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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QFrame *frame;
    QLabel *label;

    void setupUi(QWidget *vldrIntroQt)
    {
        if (vldrIntroQt->objectName().isEmpty())
            vldrIntroQt->setObjectName(QStringLiteral("vldrIntroQt"));
        vldrIntroQt->resize(251, 203);
        vldrIntroQt->setStyleSheet(QLatin1String("\n"
"QWidget {\n"
"	background-color:rgb(45, 45, 45);\n"
"	\n"
"}"));
        ipBox = new QLineEdit(vldrIntroQt);
        ipBox->setObjectName(QStringLiteral("ipBox"));
        ipBox->setGeometry(QRect(10, 100, 231, 41));
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
        frame = new QFrame(vldrIntroQt);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 61, 61));
        frame->setStyleSheet(QStringLiteral("border-image: url(:/vldrChatQt/VLDRIconThumbnail2.png) 0 0 0 0 stretch stretch;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(vldrIntroQt);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 161, 61));
        QFont font;
        font.setFamily(QStringLiteral("MS Gothic"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color:rgb(0, 252, 127);\n"
"padding-left:1px;\n"
"padding-top:-2px;\n"
"background-color:rgb(0,0,0,50);\n"
"border-radius:5px;\n"
"padding:2px"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(vldrIntroQt);

        QMetaObject::connectSlotsByName(vldrIntroQt);
    } // setupUi

    void retranslateUi(QWidget *vldrIntroQt)
    {
        vldrIntroQt->setWindowTitle(QApplication::translate("vldrIntroQt", "vldrIntroQt", Q_NULLPTR));
        ipBox->setPlaceholderText(QApplication::translate("vldrIntroQt", "Address, ex: 127.0.0.1", Q_NULLPTR));
        connectButton->setText(QApplication::translate("vldrIntroQt", "Connect", Q_NULLPTR));
        label->setText(QApplication::translate("vldrIntroQt", "Type an address to connect to a VLDR server. This whole project is open source.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vldrIntroQt: public Ui_vldrIntroQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLDRINTROQT_H
