#include "vldrChatQt.h"

vldrChatQt::vldrChatQt(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);

	QIcon icon(":/vldrChatQt/VLDRIcon.png");

	setWindowIcon(icon);

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
		ui.chatBox->appendPlainText("Failed to connect...");
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

		ui.chatBox->appendPlainText(line);
	}
}