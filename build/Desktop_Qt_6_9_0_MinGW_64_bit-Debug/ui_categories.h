/********************************************************************************
** Form generated from reading UI file 'categories.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORIES_H
#define UI_CATEGORIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Categories
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QHBoxLayout *buttonLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *Categories)
    {
        if (Categories->objectName().isEmpty())
            Categories->setObjectName("Categories");
        Categories->setStyleSheet(QString::fromUtf8("\n"
"    QWidget {\n"
"        background-color: #ecf0f1;\n"
"    }\n"
"    QLabel#labelTitle {\n"
"        color: #2c3e50;\n"
"        font-size: 22px;\n"
"        font-weight: bold;\n"
"        padding: 12px;\n"
"    }\n"
"    QListWidget {\n"
"        background-color: #ffffff;\n"
"        border: 1px solid #bdc3c7;\n"
"        border-radius: 6px;\n"
"        padding: 6px;\n"
"    }\n"
"    QLineEdit {\n"
"        padding: 8px;\n"
"        border: 1px solid #95a5a6;\n"
"        border-radius: 6px;\n"
"        background-color: #ffffff;\n"
"        font-size: 14px;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #3498db;\n"
"        color: white;\n"
"        padding: 8px 16px;\n"
"        border-radius: 8px;\n"
"        font-size: 14px;\n"
"        font-weight: bold;\n"
"        border: none;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #2980b9;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #2471a3;\n"
"    }\n"
"   "));
        verticalLayout = new QVBoxLayout(Categories);
        verticalLayout->setSpacing(15);
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        verticalLayout->setObjectName("verticalLayout");
        labelTitle = new QLabel(Categories);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        labelTitle->setFont(font);

        verticalLayout->addWidget(labelTitle);

        listWidget = new QListWidget(Categories);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        lineEdit = new QLineEdit(Categories);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setSpacing(10);
        buttonLayout->setObjectName("buttonLayout");
        addButton = new QPushButton(Categories);
        addButton->setObjectName("addButton");

        buttonLayout->addWidget(addButton);

        deleteButton = new QPushButton(Categories);
        deleteButton->setObjectName("deleteButton");

        buttonLayout->addWidget(deleteButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(Categories);

        QMetaObject::connectSlotsByName(Categories);
    } // setupUi

    void retranslateUi(QWidget *Categories)
    {
        Categories->setWindowTitle(QCoreApplication::translate("Categories", "Book Categories", nullptr));
        labelTitle->setText(QCoreApplication::translate("Categories", "\360\237\223\202 Book Categories", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Categories", "\342\236\225 Enter new category...", nullptr));
        addButton->setText(QCoreApplication::translate("Categories", "\342\236\225 Add Category", nullptr));
        deleteButton->setText(QCoreApplication::translate("Categories", "\360\237\227\221\357\270\217 Delete Category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Categories: public Ui_Categories {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORIES_H
