#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vldrChatQt.h"
#include <sstream>

#include <QScrollBar>
#include <QTcpSocket>
#include <QNetworkProxy>

#include <iomanip> 

#include <QtPlugin>
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)

class vldrChatQt : public QMainWindow 
{
	Q_OBJECT

public:
	vldrChatQt(QWidget *parent = Q_NULLPTR);
	
private:
	QString scrollBarStyle = "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
		"background: none;"
		"border-radius:5px;"
		"}"
		"QScrollBar:vertical {"
		"    width:5px;"
		"    margin: 0px 0px 0px 0px;"
		"border-radius:5px;"
		"}"
		"QScrollBar::handle:vertical {"
		"    background-color: rgb(0,0,0,100);"
		"    min-height: 0px;"
		"border-radius:5px;"
		""
		"}"
		"QScrollBar::add-line:vertical {"
		"    background-color: rgb(0,0,0,100);"
		"    height: 0px;"
		"    subcontrol-position: bottom;"
		"    subcontrol-origin: margin;"
		"border-radius:5px;"
		"}"
		"QScrollBar::sub-line:vertical {"
		"    background-color:rgb(0,0,0,100);"
		"    height: 0px;"
		"    subcontrol-position: top;"
		"    subcontrol-origin: margin;"
		"border-radius:5px;"
		"}";

	QString ip = "127.0.0.1";
	int port = 5555;

	QTcpSocket * _pSocket;

	Ui::vldrChatQtClass ui;

	void SendMessage();
	void AttemptConnection();
	void ProcessCommands();
};


