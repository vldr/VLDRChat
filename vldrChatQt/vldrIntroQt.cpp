#include "vldrIntroQt.h"

vldrIntroQt::vldrIntroQt(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);

	// Initalize icon variable.
	QIcon icon(":/vldrChatQt/VLDRIcon.png");

	// Set window icon.
	setWindowIcon(icon);

	// Set custom title.
	setWindowTitle("VLDR Chat Intro (" + QString(__DATE__) + ")");

	// Make the window not resizable.
	setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint | Qt::WindowCloseButtonHint);

	// Connect the button click.
	connect(ui.connectButton, &QPushButton::clicked, [this] {
		// Using an shared pointer so I can go back and forth between windows without creating a new window instance everytime and using up memory.
		// I understand I could've never just deleted any window and hidden one or the other without deleting the object... But I needed the chat window to restart everytime.
		// When the chat window closes, I've setup a attribute to destroy itself, using shared_ptr it will prevent it from creating an exeception.
		// Furthermore, I've tried using raw pointers, and it's worked. But one problem was that if it breaks for some reason...
		win = new std::shared_ptr<vldrChatQt>(new vldrChatQt(this, ui.ipBox->text()));

		// Actually display the window.
		win->get()->show();

		// Close this window when done.
		this->hide();
	});
}
