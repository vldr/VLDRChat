#include "vldrIntroQt.h"

vldrIntroQt::vldrIntroQt(QWidget *parent) : QMainWindow(parent)
{
	// Setup ui.
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
		// Create a raw pointer replacing a nullptr.
		win = new vldrChatQt(Q_NULLPTR, ui.ipBox->text(), this);

		// Actually display the window.
		win->show();

		// Close this window when done.
		this->hide();
	});

	// Connect the enter button to send message.
	connect(ui.ipBox, &QLineEdit::returnPressed, [this] {
		ui.connectButton->click();
	});
}
 