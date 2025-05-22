/********************************************************************************
** Form generated from reading UI file 'editbook.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOOK_H
#define UI_EDITBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_editbook
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;
    QPushButton *saveButton;

    void setupUi(QDialog *editbook)
    {
        if (editbook->objectName().isEmpty())
            editbook->setObjectName("editbook");
        editbook->setStyleSheet(QString::fromUtf8("\n"
"    QDialog {\n"
"        background-color: #2c3e50;\n"
"    }\n"
"    QLabel {\n"
"        color: white;\n"
"        font-size: 16px;\n"
"    }\n"
"    QLineEdit {\n"
"        background-color: #ecf0f1;\n"
"        border: 1px solid #bdc3c7;\n"
"        border-radius: 5px;\n"
"        padding: 5px;\n"
"        font-size: 14px;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #27ae60;\n"
"        color: white;\n"
"        font-size: 16px;\n"
"        padding: 8px 20px;\n"
"        border-radius: 8px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #1e8449;\n"
"    }\n"
"   "));
        verticalLayout = new QVBoxLayout(editbook);
        verticalLayout->setObjectName("verticalLayout");
        labelName = new QLabel(editbook);
        labelName->setObjectName("labelName");

        verticalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(editbook);
        lineEditName->setObjectName("lineEditName");

        verticalLayout->addWidget(lineEditName);

        labelPrice = new QLabel(editbook);
        labelPrice->setObjectName("labelPrice");

        verticalLayout->addWidget(labelPrice);

        lineEditPrice = new QLineEdit(editbook);
        lineEditPrice->setObjectName("lineEditPrice");

        verticalLayout->addWidget(lineEditPrice);

        saveButton = new QPushButton(editbook);
        saveButton->setObjectName("saveButton");

        verticalLayout->addWidget(saveButton);


        retranslateUi(editbook);

        QMetaObject::connectSlotsByName(editbook);
    } // setupUi

    void retranslateUi(QDialog *editbook)
    {
        editbook->setWindowTitle(QCoreApplication::translate("editbook", "Edit Book", nullptr));
        labelName->setText(QCoreApplication::translate("editbook", "\360\237\223\225 Book Name:", nullptr));
        labelPrice->setText(QCoreApplication::translate("editbook", "\360\237\222\260 Book Price:", nullptr));
        saveButton->setText(QCoreApplication::translate("editbook", "\360\237\222\276 Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editbook: public Ui_editbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOOK_H
