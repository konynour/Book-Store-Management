/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(894, 548);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("\n"
"    QWidget {\n"
"        background-color: #2c3e50;\n"
"    }\n"
"    "));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 20, 400, 60));
        label->setStyleSheet(QString::fromUtf8("\n"
"     QLabel {\n"
"         font-size: 32px;\n"
"         font-weight: bold;\n"
"         color: white;\n"
"         background-color: transparent;\n"
"         qproperty-alignment: AlignCenter;\n"
"     }\n"
"     "));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 120, 251, 51));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"     QPushButton {\n"
"         background-color: #3498db;\n"
"         color: white;\n"
"         font-size: 16px;\n"
"         border-radius: 10px;\n"
"         padding: 10px;\n"
"     }\n"
"     QPushButton:hover {\n"
"         background-color: #2980b9;\n"
"     }\n"
"     "));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 200, 251, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"     QPushButton {\n"
"         background-color: #27ae60;\n"
"         color: white;\n"
"         font-size: 16px;\n"
"         border-radius: 10px;\n"
"         padding: 10px;\n"
"     }\n"
"     QPushButton:hover {\n"
"         background-color: #1e8449;\n"
"     }\n"
"     "));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(310, 280, 251, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"     QPushButton {\n"
"         background-color: #e67e22;\n"
"         color: white;\n"
"         font-size: 16px;\n"
"         border-radius: 10px;\n"
"         padding: 10px;\n"
"     }\n"
"     QPushButton:hover {\n"
"         background-color: #d35400;\n"
"     }\n"
"     "));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 894, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Book Store", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\360\237\223\232Book Store Management ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Add Book", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\360\237\233\222 Purchase", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\360\237\223\226 View Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
