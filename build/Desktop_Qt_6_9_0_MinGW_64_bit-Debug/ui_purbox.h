/********************************************************************************
** Form generated from reading UI file 'purbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURBOX_H
#define UI_PURBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_purBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *deleteButton;

    void setupUi(QDialog *purBox)
    {
        if (purBox->objectName().isEmpty())
            purBox->setObjectName("purBox");
        purBox->resize(730, 439);
        purBox->setStyleSheet(QString::fromUtf8("\n"
"   QDialog {\n"
"       background-color: #34495e;\n"
"   }\n"
"   QLabel {\n"
"       color: white;\n"
"       font-family: \"Segoe UI\";\n"
"   }\n"
"   QLineEdit {\n"
"       background-color: white;\n"
"       border-radius: 5px;\n"
"       padding: 5px;\n"
"       font-size: 15px;\n"
"   }\n"
"   QPushButton {\n"
"       background-color: #27ae60;\n"
"       color: white;\n"
"       font-size: 18px;\n"
"       border-radius: 10px;\n"
"       padding: 8px 16px;\n"
"   }\n"
"   QPushButton:hover {\n"
"       background-color: #1e8449;\n"
"   }\n"
"   "));
        label = new QLabel(purBox);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 321, 41));
        label->setStyleSheet(QString::fromUtf8("font-size: 28px; font-weight: bold;"));
        label_2 = new QLabel(purBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 120, 161, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        lineEdit = new QLineEdit(purBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(280, 120, 280, 31));
        label_3 = new QLabel(purBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 200, 171, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        lineEdit_2 = new QLineEdit(purBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(280, 200, 280, 31));
        pushButton = new QPushButton(purBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 300, 130, 41));
        deleteButton = new QPushButton(purBox);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(450, 300, 130, 41));

        retranslateUi(purBox);

        QMetaObject::connectSlotsByName(purBox);
    } // setupUi

    void retranslateUi(QDialog *purBox)
    {
        purBox->setWindowTitle(QCoreApplication::translate("purBox", "Purchase Book", nullptr));
        label->setText(QCoreApplication::translate("purBox", "\360\237\233\222 Purchase Window", nullptr));
        label_2->setText(QCoreApplication::translate("purBox", "\360\237\223\226 Enter Book Name", nullptr));
        label_3->setText(QCoreApplication::translate("purBox", "\360\237\224\242 Enter Book Quantity", nullptr));
        pushButton->setText(QCoreApplication::translate("purBox", " OK", nullptr));
        deleteButton->setText(QCoreApplication::translate("purBox", "Delete Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class purBox: public Ui_purBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURBOX_H
