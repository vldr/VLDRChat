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

    void setupUi(QMainWindow *vldrChatQtClass)
    {
        if (vldrChatQtClass->objectName().isEmpty())
            vldrChatQtClass->setObjectName(QStringLiteral("vldrChatQtClass"));
        vldrChatQtClass->resize(600, 400);
        centralWidget = new QWidget(vldrChatQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        usersList = new QListWidget(centralWidget);
        usersList->setObjectName(QStringLiteral("usersList"));
        usersList->setGeometry(QRect(10, 10, 101, 331));
        chatBox = new QPlainTextEdit(centralWidget);
        chatBox->setObjectName(QStringLiteral("chatBox"));
        chatBox->setGeometry(QRect(120, 10, 471, 331));
        chatBox->setReadOnly(true);
        messageBox = new QLineEdit(centralWidget);
        messageBox->setObjectName(QStringLiteral("messageBox"));
        messageBox->setGeometry(QRect(10, 350, 431, 41));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(450, 350, 141, 41));
        vldrChatQtClass->setCentralWidget(centralWidget);

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
