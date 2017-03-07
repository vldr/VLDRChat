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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vldrChatQtClass
{
public:
    QAction *actionLogin;
    QAction *actionExit;
    QAction *actionVersion;
    QAction *actionAbout;
    QAction *actionSend_Message;
    QAction *actionClear;
    QWidget *centralWidget;
    QListWidget *usersList;
    QPlainTextEdit *chatBox;
    QLineEdit *messageBox;
    QPushButton *sendButton;
    QWidget *widget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *vldrChatQtClass)
    {
        if (vldrChatQtClass->objectName().isEmpty())
            vldrChatQtClass->setObjectName(QStringLiteral("vldrChatQtClass"));
        vldrChatQtClass->resize(441, 361);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(9);
        vldrChatQtClass->setFont(font);
        actionLogin = new QAction(vldrChatQtClass);
        actionLogin->setObjectName(QStringLiteral("actionLogin"));
        actionExit = new QAction(vldrChatQtClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionVersion = new QAction(vldrChatQtClass);
        actionVersion->setObjectName(QStringLiteral("actionVersion"));
        actionAbout = new QAction(vldrChatQtClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSend_Message = new QAction(vldrChatQtClass);
        actionSend_Message->setObjectName(QStringLiteral("actionSend_Message"));
        actionClear = new QAction(vldrChatQtClass);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        centralWidget = new QWidget(vldrChatQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("\n"
"QWidget {\n"
"background-image: url(\":/vldrChatQt/cartographer.png\");\n"
"    background-repeat: repeat-y;\n"
"	\n"
"}"));
        usersList = new QListWidget(centralWidget);
        usersList->setObjectName(QStringLiteral("usersList"));
        usersList->setGeometry(QRect(10, 10, 91, 271));
        usersList->setAutoFillBackground(false);
        usersList->setStyleSheet(QLatin1String("QListWidget {\n"
"\n"
"border:1px solid rgb(27, 27, 27);\n"
"background:none;\n"
"background-color:rgb(43, 43, 43);\n"
"color:white;\n"
"border-top-left-radius: 3px;\n"
"border-bottom-left-radius: 3px;\n"
"}"));
        chatBox = new QPlainTextEdit(centralWidget);
        chatBox->setObjectName(QStringLiteral("chatBox"));
        chatBox->setGeometry(QRect(100, 10, 331, 271));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chatBox->sizePolicy().hasHeightForWidth());
        chatBox->setSizePolicy(sizePolicy);
        chatBox->setStyleSheet(QLatin1String("QPlainTextEdit {\n"
"border:1px solid rgb(27, 27, 27);\n"
"background:none;\n"
"background-color:rgb(43, 43, 43);\n"
"color:white;\n"
"border-top-right-radius: 3px;\n"
"border-bottom-right-radius: 3px;\n"
"}"));
        chatBox->setReadOnly(true);
        messageBox = new QLineEdit(centralWidget);
        messageBox->setObjectName(QStringLiteral("messageBox"));
        messageBox->setGeometry(QRect(10, 290, 321, 41));
        messageBox->setStyleSheet(QLatin1String("border:1px solid rgb(27, 27, 27);\n"
"background:none;\n"
"background-color:rgb(43, 43, 43);\n"
"color:white;\n"
"padding:5px;\n"
"font-size:18px;\n"
"border-radius:2px;"));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(330, 290, 101, 41));
        sendButton->setStyleSheet(QLatin1String("QPushButton {\n"
"border:1px solid rgb(27, 27, 27);\n"
"background:none;\n"
"background-color:rgb(43, 43, 43);\n"
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
        widget->setStyleSheet(QLatin1String("border-top:2px solid rgb(0, 246, 122);\n"
"background:none;"));
        vldrChatQtClass->setCentralWidget(centralWidget);
        widget->raise();
        usersList->raise();
        chatBox->raise();
        messageBox->raise();
        sendButton->raise();
        menuBar = new QMenuBar(vldrChatQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 441, 21));
        menuBar->setStyleSheet(QLatin1String("QMenuBar {\n"
"background-color:rgb(0, 197, 95);\n"
"color:black;\n"
"}\n"
"\n"
"QMenuBar::item:hover {\n"
"\n"
"background-color:rgb(43, 43, 43);\n"
"color:white;\n"
"}\n"
"\n"
"QMenuBar::item:hover {\n"
"background-color:rgb(53, 53, 53);\n"
"}"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setStyleSheet(QLatin1String("QMenu {\n"
"background-color:rgb(43, 43, 43);\n"
"color:white;\n"
"}"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelp->setStyleSheet(QLatin1String("background-color:rgb(43, 43, 43);\n"
"color:white;"));
        vldrChatQtClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLogin);
        menuFile->addAction(actionSend_Message);
        menuFile->addAction(actionClear);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(vldrChatQtClass);

        QMetaObject::connectSlotsByName(vldrChatQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *vldrChatQtClass)
    {
        vldrChatQtClass->setWindowTitle(QApplication::translate("vldrChatQtClass", "vldrChatQt", Q_NULLPTR));
        actionLogin->setText(QApplication::translate("vldrChatQtClass", "New...", Q_NULLPTR));
        actionLogin->setShortcut(QApplication::translate("vldrChatQtClass", "F1", Q_NULLPTR));
        actionExit->setText(QApplication::translate("vldrChatQtClass", "Quit...", Q_NULLPTR));
        actionVersion->setText(QApplication::translate("vldrChatQtClass", "Version", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("vldrChatQtClass", "About", Q_NULLPTR));
        actionSend_Message->setText(QApplication::translate("vldrChatQtClass", "Send...", Q_NULLPTR));
        actionClear->setText(QApplication::translate("vldrChatQtClass", "Clear...", Q_NULLPTR));
        messageBox->setPlaceholderText(QApplication::translate("vldrChatQtClass", "Say something nice!", Q_NULLPTR));
        sendButton->setText(QApplication::translate("vldrChatQtClass", "Send", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("vldrChatQtClass", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("vldrChatQtClass", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vldrChatQtClass: public Ui_vldrChatQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VLDRCHATQT_H
