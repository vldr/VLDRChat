/********************************************************************************
** Form generated from reading UI file 'vldrIntroQt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VLDRINTROQT_H
#define UI_VLDRINTROQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vldrIntroQt
{
public:
    QLineEdit *ipBox;
    QPushButton *connectButton;
    QWidget *widget;

    void setupUi(QWidget *vldrIntroQt)
    {
        if (vldrIntroQt->objectName().isEmpty())
            vldrIntroQt->setObjectName(QStringLiteral("vldrIntroQt"));
        vldrIntroQt->resize(280, 206);
        vldrIntroQt->setStyleSheet(QLatin1String("\n"
"QWidget {\n"
"	background-color:rgb(45, 45, 45);\n"
"	\n"
"}"));
        ipBox = new QLineEdit(vldrIntroQt);
        ipBox->setObjectName(QStringLiteral("ipBox"));
        ipBox->setGeometry(QRect(10, 100, 261, 41));
        ipBox->setStyleSheet(QLatin1String("border:1px solid rgb(27, 27, 27);\n"
"\n"
"background-color:rgb(37, 37, 37);\n"
"color:white;\n"
"padding:5px;\n"
"font-size:18px;\n"
"border-radius:3px;"));
        connectButton = new QPushButton(vldrIntroQt);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setGeometry(QRect(10, 150, 111, 41));
        connectButton->setStyleSheet(QLatin1String("QPushButton {\n"
"border:1px solid rgb(27, 27, 27);\n"
"border-bottom:2px solid rgb(27, 27, 27);\n"
"\n"
"background-color:rgb(37, 37, 37);\n"
"color:rgb(173, 173, 173);\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-bottom:0px solid gray;\n"
"}"));
        widget = new QWidget(vldrIntroQt);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-70, 0, 461, 20));
        widget->setStyleSheet(QStringLiteral("border-top:2px solid rgb(113, 255, 5);"));

        retranslateUi(vldrIntroQt);

        QMetaObject::connectSlotsByName(vldrIntroQt);
    } // setupUi

    void retranslateUi(QWidget *vldrIntroQt)
    {
        vldrIntroQt->setWindowTitle(QApplication::translate("vldrIntroQt", "vldrIntroQt", Q_NULLPTR));
        ipBox->setPlaceholderText(QApplication::translate("vldrIntroQt", "Address, ex: 127.0.0.1", Q_NULLPTR));
        connectButton->setText(QApplication::translate("vldrIntroQt", "Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vldrIntroQt: public Ui_vldrIntroQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLDRINTROQT_H
