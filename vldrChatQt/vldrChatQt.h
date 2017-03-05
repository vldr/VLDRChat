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
	QString ip = "127.0.0.1";
	int port = 5555;

	QTcpSocket * _pSocket;

	Ui::vldrChatQtClass ui;

	void SendMessage();
	void AttemptConnection();
	void ProcessCommands();
};


