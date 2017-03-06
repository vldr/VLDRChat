#include "vldrChatQt.h"
#include "vldrIntroQt.h"

vldrChatQt::vldrChatQt(QWidget *parent, QString ip, QWidget * callingwindow) : QMainWindow(parent)
{
	// Setup ui.
	ui.setupUi(this);

	// Store the parent window for later use.
	stored_parent = callingwindow;

	// Initalize icon variable.
	QIcon icon(":/vldrChatQt/VLDRIcon.png");

	// Set window icon.
	setWindowIcon(icon);

	// When the window closes, delete itself from memory.
	this->setAttribute(Qt::WA_DeleteOnClose);

	// Set custom title.
	setWindowTitle("VLDR Chat (" + QString(__DATE__) + ")");

	// Make the window not resizable.
	setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint | Qt::WindowCloseButtonHint);

	// Initalize QScrollBar and set a custom stylesheet to it.
	QScrollBar * customScrollBarChatBox = new QScrollBar();
	QScrollBar * customScrollBarUserList = new QScrollBar();
	customScrollBarChatBox->setStyleSheet(scrollBarStyle);
	customScrollBarUserList->setStyleSheet(scrollBarStyle);

	// Set the chatbox and userslist elements' scrollbar to the custom one.
	ui.chatBox->setVerticalScrollBar(customScrollBarChatBox);
	ui.usersList->setVerticalScrollBar(customScrollBarUserList);

	// Initalize socket.
	_pSocket = new QTcpSocket(this);

	// Check the set the proxy. Serves no purpose
	// TODO: Remove this eventually...
	_pSocket->setProxy(QNetworkProxy::NoProxy); 

	// Attempt to connect.
	_pSocket->connectToHost(ip, port);

	// Wait for it to connect... 
	if (!_pSocket->waitForConnected(1000)) {
		ui.chatBox->appendPlainText("Failed to connect... Press \"F1\" to change host!");
	}

	// Connect the enter button to send message.
	connect(ui.messageBox, &QLineEdit::returnPressed, [this] {
		SendMessage();
	});  

	// Scroll down when text changes.
	connect(ui.chatBox, &QPlainTextEdit::textChanged, [this] {
		ui.chatBox->verticalScrollBar()->setValue(ui.chatBox->verticalScrollBar()->maximum());
	});

	// Send message when send button is pressed.
	connect(ui.sendButton, &QPushButton::clicked, [this] {
		SendMessage();
		
	});
	 
	// Process information when it's ready..
	connect(_pSocket, &QTcpSocket::readyRead, [this] {
		ProcessCommands();
	});
}

// Deconstructor. This is ran when the window is deleted.
vldrChatQt::~vldrChatQt()
{
	// Delete the socket, and leave nothing behind.
	delete[] _pSocket;
}

// Display login page
void vldrChatQt::OpenLoginPage() {
	// Show the intro window.
	stored_parent->show();

	// Close this window, and delete off of memory.
	this->close();
}

// Override keyPressEvent
void vldrChatQt::keyPressEvent(QKeyEvent *event)
{
	// Check if user pressed F1 key.
	if (event->key() == Qt::Key_F1) {
		OpenLoginPage();
	}
}

// Sends message to the server!
void vldrChatQt::SendMessage() {
	// Check if you're connected.
	if (_pSocket->state() == QTcpSocket::ConnectedState) {
		// Write input to the server.
		_pSocket->write((ui.messageBox->text() + "\n").toStdString().c_str());
		_pSocket->waitForBytesWritten(1000);

		// Clear it so it's easier to type again.
		ui.messageBox->clear();
	}
	else {
		// If not, then attempt to connect again.
		AttemptConnection();
	}
}

// Reattempts to connect.
void vldrChatQt::AttemptConnection() {
	// Attempt to connect.
	_pSocket->connectToHost(ip, port);

	// Wait for connected.
	if (!_pSocket->waitForConnected(1000)) {
		// Inform user that it failed to connect.
		ui.chatBox->appendPlainText("Attempted to connect, but failed to connect...");
	}
}

// Processes everything coming in; line by line.
void vldrChatQt::ProcessCommands() {
	// While you can read line.
	while (_pSocket->canReadLine())
	{
		// Convert the bytearray to qstring.
		QString line = QString(_pSocket->readLine());
		
		// Remove implied characters.
		line = line.replace("\r\n", "");

		// Check if it's a playerlist update.
		if (line.startsWith("{player_list:(") && line.endsWith(")}")) {
			// Remove the characters so we can easily extract the usernames.
			line = line.replace("{player_list:(", "");
			line = line.replace(")}", ""); 

			// Split everything into a qstringlist
			QStringList lineList = line.split(",");

			// Clear the list.
			ui.usersList->clear();

			// Loop through every item in the list
			for (QString item : lineList)
				// Add the item to the listbox.
				ui.usersList->addItem(item);

			// Don't display the command.
			continue;
		}

		// Check if its a clear command.
		if (line == "{clear}") {
			// Clear the chatbox.
			ui.chatBox->clear();

			// Don't display the command.
			continue; 
		}

		// Display the message.
		ui.chatBox->appendHtml(QString("<span style=\"color:") + "white" + QString("\">")  + line + QString("</span>"));
	}
}