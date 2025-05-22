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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainLayout;
    QWidget *containerWidget;
    QVBoxLayout *containerLayout;
    QLabel *titleLabel;
    QPushButton *addBookButton;
    QPushButton *purchaseButton;
    QPushButton *viewBooksButton;
    QPushButton *editBookButton;
    QPushButton *bookDetailsButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow {\n"
"        background-color: #34495e;\n"
"    }\n"
"   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainLayout = new QVBoxLayout(centralwidget);
        mainLayout->setSpacing(15);
        mainLayout->setContentsMargins(20, 20, 20, 20);
        mainLayout->setObjectName("mainLayout");
        containerWidget = new QWidget(centralwidget);
        containerWidget->setObjectName("containerWidget");
        containerWidget->setMaximumWidth(400);
        containerLayout = new QVBoxLayout(containerWidget);
        containerLayout->setSpacing(10);
        containerLayout->setObjectName("containerLayout");
        containerLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(containerWidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"           QLabel {\n"
"               font-size: 28px;\n"
"               font-weight: bold;\n"
"               color: white;\n"
"               background-color: transparent;\n"
"               text-align: center;\n"
"               padding: 10px;\n"
"               text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.3);\n"
"           }\n"
"          "));
        titleLabel->setAlignment(Qt::AlignCenter);

        containerLayout->addWidget(titleLabel);

        addBookButton = new QPushButton(containerWidget);
        addBookButton->setObjectName("addBookButton");
        addBookButton->setMinimumHeight(50);
        addBookButton->setStyleSheet(QString::fromUtf8("\n"
"           QPushButton {\n"
"               background-color: #3498db;\n"
"               color: white;\n"
"               font-size: 16px;\n"
"               border-radius: 8px;\n"
"               padding: 12px;\n"
"               border: none;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #2980b9;\n"
"           }\n"
"           QPushButton:pressed {\n"
"               background-color: #1f618d;\n"
"           }\n"
"          "));

        containerLayout->addWidget(addBookButton);

        purchaseButton = new QPushButton(containerWidget);
        purchaseButton->setObjectName("purchaseButton");
        purchaseButton->setMinimumHeight(50);
        purchaseButton->setStyleSheet(QString::fromUtf8("\n"
"           QPushButton {\n"
"               background-color: #27ae60;\n"
"               color: white;\n"
"               font-size: 16px;\n"
"               border-radius: 8px;\n"
"               padding: 12px;\n"
"               border: none;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #1e8449;\n"
"           }\n"
"           QPushButton:pressed {\n"
"               background-color: #166d3b;\n"
"           }\n"
"          "));

        containerLayout->addWidget(purchaseButton);

        viewBooksButton = new QPushButton(containerWidget);
        viewBooksButton->setObjectName("viewBooksButton");
        viewBooksButton->setMinimumHeight(50);
        viewBooksButton->setStyleSheet(QString::fromUtf8("\n"
"           QPushButton {\n"
"               background-color: #e67e22;\n"
"               color: white;\n"
"               font-size: 16px;\n"
"               border-radius: 8px;\n"
"               padding: 12px;\n"
"               border: none;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #d35400;\n"
"           }\n"
"           QPushButton:pressed {\n"
"               background-color: #a84300;\n"
"           }\n"
"          "));

        containerLayout->addWidget(viewBooksButton);

        editBookButton = new QPushButton(containerWidget);
        editBookButton->setObjectName("editBookButton");
        editBookButton->setMinimumHeight(50);
        editBookButton->setStyleSheet(QString::fromUtf8("\n"
"           QPushButton {\n"
"               background-color: #9b59b6;\n"
"               color: white;\n"
"               font-size: 16px;\n"
"               border-radius: 8px;\n"
"               padding: 12px;\n"
"               border: none;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #8e44ad;\n"
"           }\n"
"           QPushButton:pressed {\n"
"               background-color: #6c3483;\n"
"           }\n"
"          "));

        containerLayout->addWidget(editBookButton);

        bookDetailsButton = new QPushButton(containerWidget);
        bookDetailsButton->setObjectName("bookDetailsButton");
        bookDetailsButton->setMinimumHeight(50);
        bookDetailsButton->setStyleSheet(QString::fromUtf8("\n"
"           QPushButton {\n"
"               background-color: #1abc9c;\n"
"               color: white;\n"
"               font-size: 16px;\n"
"               border-radius: 8px;\n"
"               padding: 12px;\n"
"               border: none;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #16a085;\n"
"           }\n"
"           QPushButton:pressed {\n"
"               background-color: #117864;\n"
"           }\n"
"          "));

        containerLayout->addWidget(bookDetailsButton);


        mainLayout->addWidget(containerWidget, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Book Store Management", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\360\237\223\232 Book Store Management", nullptr));
        addBookButton->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Add Book", nullptr));
        purchaseButton->setText(QCoreApplication::translate("MainWindow", "\360\237\233\222 Purchase", nullptr));
        viewBooksButton->setText(QCoreApplication::translate("MainWindow", "\360\237\223\226 View Books", nullptr));
        editBookButton->setText(QCoreApplication::translate("MainWindow", "\342\234\217\357\270\217 Edit Book", nullptr));
        bookDetailsButton->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 sales History", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
