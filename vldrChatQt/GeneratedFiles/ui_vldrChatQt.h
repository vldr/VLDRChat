/********************************************************************************
** Form generated from reading UI file 'vldrChatQt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VLDRCHATQT_H
#define UI_VLDRCHATQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vldrChatQtClass
{
public:
    QWidget *centralWidget;
    QListWidget *usersList;
    QPlainTextEdit *chatBox;
    QLineEdit *messageBox;
    QPushButton *sendButton;
    QWidget *widget;

    void setupUi(QMainWindow *vldrChatQtClass)
    {
        if (vldrChatQtClass->objectName().isEmpty())
            vldrChatQtClass->setObjectName(QStringLiteral("vldrChatQtClass"));
        vldrChatQtClass->resize(442, 343);
        centralWidget = new QWidget(vldrChatQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("\n"
"QWidget {\n"
"	background-color:rgb(45, 45, 45);\n"
"	\n"
"}"));
        usersList = new QListWidget(centralWidget);
        usersList->setObjectName(QStringLiteral("usersList"));
        usersList->setGeometry(QRect(10, 10, 91, 271));
        usersList->setAutoFillBackground(false);
        usersList->setStyleSheet(QLatin1String("border:1px solid rgb(27, 27, 27);\n"
"\n"
"background-color:rgb(37, 37, 37);\n"
"color:white;\n"
"border-radius:2px;"));
        chatBox = new QPlainTextEdit(centralWidget);
        chatBox->setObjectName(QStringLiteral("chatBox"));
        chatBox->setGeometry(QRect(110, 10, 321, 271));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chatBox->sizePolicy().hasHeightForWidth());
        chatBox->setSizePolicy(sizePolicy);
        chatBox->setStyleSheet(QLatin1String("QPlainTextEdit {\n"
"border:1px solid rgb(27, 27, 27);\n"
"\n"
"background-color:rgb(37, 37, 37);\n"
"color:white;\n"
"border-radius:2px;\n"
"}"));
        chatBox->setReadOnly(true);
        messageBox = new QLineEdit(centralWidget);
        messageBox->setObjectName(QStringLiteral("messageBox"));
        messageBox->setGeometry(QRect(10, 290, 321, 41));
        messageBox->setStyleSheet(QLatin1String("border:1px solid rgb(27, 27, 27);\n"
"\n"
"background-color:rgb(37, 37, 37);\n"
"color:white;\n"
"border-radius-right:2px;\n"
"padding:5px;\n"
"font-size:18px;\n"
"border-radius:2px;"));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(330, 290, 101, 41));
        sendButton->setStyleSheet(QLatin1String("QPushButton {\n"
"border:1px solid rgb(27, 27, 27);\n"
"border-bottom:2px solid rgb(27, 27, 27);\n"
"\n"
"background-color:rgb(37, 37, 37);\n"
"color:rgb(173, 173, 173);\n"
"border-top-right-radius: 3px;\n"
"border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color:white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-bottom:0px solid gray;\n"
"}"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-10, 0, 461, 20));
        widget->setStyleSheet(QStringLiteral("border-top:2px solid rgb(113, 255, 5);"));
        vldrChatQtClass->setCentralWidget(centralWidget);
        widget->raise();
        usersList->raise();
        chatBox->raise();
        messageBox->raise();
        sendButton->raise();

        retranslateUi(vldrChatQtClass);

        QMetaObject::connectSlotsByName(vldrChatQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *vldrChatQtClass)
    {
        vldrChatQtClass->setWindowTitle(QApplication::translate("vldrChatQtClass", "vldrChatQt", Q_NULLPTR));
        sendButton->setText(QApplication::translate("vldrChatQtClass", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vldrChatQtClass: public Ui_vldrChatQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLDRCHATQT_H
