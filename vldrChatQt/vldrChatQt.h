#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vldrChatQt.h"
#include <sstream>

#include <QScrollBar>
#include <QTcpSocket>
#include <QNetworkProxy>
#include <QInputDialog>
#include <QMessageBox>

#include <iomanip> 

#include <QtPlugin>
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)

class vldrChatQt : public QMainWindow 
{
	Q_OBJECT

public:
	vldrChatQt(QWidget *parent = Q_NULLPTR, QString ip = "127.0.0.1", QWidget *callingwindow = Q_NULLPTR);
	~vldrChatQt();

private:
	QString scrollBarStyle = "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
		"background-color: rgb(43, 43, 43);"
		"border-radius:5px;"
		"}"
		"QScrollBar:vertical {"
		"    width:5px;"
		"    margin: 0px 0px 0px 0px;"
		""
		"border-radius:5px;"
		"}"
		"QScrollBar::handle:vertical {"
		"    background-color: rgb(0,0,0,150);"
		"    min-height: 0px;"
		"border-radius:5px;"
		""
		"}"
		"QScrollBar::add-line:vertical {"
		"    background-color: rgb(0,0,0,150);"
		"    height: 0px;"
		"    subcontrol-position: bottom;"
		"    subcontrol-origin: margin;"
		"border-radius:5px;"
		"}"
		"QScrollBar::sub-line:vertical {"
		"    background-color:rgb(0,0,0,150);"
		"    height: 0px;"
		"    subcontrol-position: top;"
		"    subcontrol-origin: margin;"
		"border-radius:5px;"
		"}";

	int port = 5555;
	QString ip = "127.0.0.1";

	
	QTcpSocket * _pSocket;

	QWidget * stored_parent;

	Ui::vldrChatQtClass ui;

	void keyPressEvent(QKeyEvent *event);

	void OpenLoginPage();
	void SendMessage();
	void AttemptConnection();
	void ProcessCommands();
};


