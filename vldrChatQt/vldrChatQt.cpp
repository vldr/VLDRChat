#include "vldrChatQt.h"

vldrChatQt::vldrChatQt(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);

	QIcon icon(":/vldrChatQt/VLDRIcon.png");

	setWindowIcon(icon);

	QScrollBar * customScrollBarChatBox = new QScrollBar();
	QScrollBar * customScrollBarUserList = new QScrollBar();
	customScrollBarChatBox->setStyleSheet(scrollBarStyle);
	customScrollBarUserList->setStyleSheet(scrollBarStyle);

	ui.chatBox->setVerticalScrollBar(customScrollBarChatBox);
	ui.usersList->setVerticalScrollBar(customScrollBarUserList);

	_pSocket = new QTcpSocket(this);
	_pSocket->setProxy(QNetworkProxy::NoProxy);
	_pSocket->connectToHost(ip, port);

	connect(ui.messageBox, &QLineEdit::returnPressed, [this] {
		SendMessage();
	}); 

	connect(ui.chatBox, &QPlainTextEdit::textChanged, [this] {
		ui.chatBox->verticalScrollBar()->setValue(ui.chatBox->verticalScrollBar()->maximum());
	});

	connect(ui.sendButton, &QPushButton::clicked, [this] {
		SendMessage();
	});

	connect(_pSocket, &QTcpSocket::readyRead, [this] {
		ProcessCommands();
	});

	if (!_pSocket->waitForConnected(5000)) {
		ui.chatBox->appendPlainText("Failed to connect... Type something to attempt to reconnect...");
	}
}

void vldrChatQt::SendMessage() {
	if (_pSocket->state() == QTcpSocket::ConnectedState) {
		_pSocket->write((ui.messageBox->text() + "\n").toStdString().c_str());
		_pSocket->waitForBytesWritten(1000);

		ui.messageBox->clear();
	}
	else {
		AttemptConnection();
	}
}

void vldrChatQt::AttemptConnection() {
	ui.chatBox->appendPlainText("Failed to connect to server, attempting to reconnect...");

	_pSocket->connectToHost(ip, port);

	if (!_pSocket->waitForConnected(5000)) {
		ui.chatBox->appendPlainText("Failed to connect...");
	}
}

void vldrChatQt::ProcessCommands() {
	while (_pSocket->canReadLine())
	{
		QString line = QString(_pSocket->readLine());
		
		line = line.replace("\r\n", "");

		if (line.startsWith("{player_list:(") && line.endsWith(")}")) {
			line = line.replace("{player_list:(", "");
			line = line.replace(")}", ""); 

			QStringList lineList = line.split(",");

			ui.usersList->clear();

			for (QString item : lineList)
				ui.usersList->addItem(item);

			continue;
		}

		QString colors[7];
		colors[0] = "#ffff00"; colors[1] = "#ff0000"; colors[2] = "#ff9400"; colors[3] = "#94ff00";
		colors[4] = "#00ff83"; colors[5] = "#00bbff"; colors[6] = "#f600ff";

		ui.chatBox->appendHtml(QString("<span style=\"color:") +  QString(colors[qrand() % 7]) + QString("\">")  + line + QString("</span>"));
	}
}