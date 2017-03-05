#pragma once

#include <QWidget>
#include "ui_vldrIntroQt.h"

#include "vldrChatQt.h"

#include <memory>

class vldrIntroQt : public QMainWindow
{
	Q_OBJECT

public:
	vldrIntroQt(QWidget *parent = Q_NULLPTR);

	/*std::shared_ptr<*/vldrChatQt/*>*/ * win = nullptr;
private:
	Ui::vldrIntroQt ui;
};
