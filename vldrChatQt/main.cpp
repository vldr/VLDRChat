#include "vldrChatQt.h"
#include "vldrIntroQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	vldrIntroQt w;
	w.show();
	return a.exec();
}
