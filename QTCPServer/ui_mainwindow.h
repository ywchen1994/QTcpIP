/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_sendMessage;
    QTextBrowser *textBrowser_receivedMessages;
    QComboBox *comboBox_receiver;
    QLineEdit *lineEdit_message;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(442, 337);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(37, 37, 37, 179);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_sendMessage = new QPushButton(centralWidget);
        pushButton_sendMessage->setObjectName(QString::fromUtf8("pushButton_sendMessage"));
        pushButton_sendMessage->setMinimumSize(QSize(0, 0));
        pushButton_sendMessage->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 178, 255);\n"
"color:white;\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(43, 162, 255);\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
""));

        gridLayout->addWidget(pushButton_sendMessage, 1, 2, 1, 1);

        textBrowser_receivedMessages = new QTextBrowser(centralWidget);
        textBrowser_receivedMessages->setObjectName(QString::fromUtf8("textBrowser_receivedMessages"));
        textBrowser_receivedMessages->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(textBrowser_receivedMessages, 0, 0, 1, 3);

        comboBox_receiver = new QComboBox(centralWidget);
        comboBox_receiver->addItem(QString());
        comboBox_receiver->setObjectName(QString::fromUtf8("comboBox_receiver"));
        comboBox_receiver->setMinimumSize(QSize(110, 0));

        gridLayout->addWidget(comboBox_receiver, 1, 0, 1, 1);

        lineEdit_message = new QLineEdit(centralWidget);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));
        lineEdit_message->setMinimumSize(QSize(150, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
        lineEdit_message->setPalette(palette);
        lineEdit_message->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(69, 70, 70);\n"
"border-radius: 10px;"));

        gridLayout->addWidget(lineEdit_message, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 442, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QTCPServer", nullptr));
        pushButton_sendMessage->setText(QApplication::translate("MainWindow", "Send", nullptr));
        comboBox_receiver->setItemText(0, QApplication::translate("MainWindow", "Broadcast", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
