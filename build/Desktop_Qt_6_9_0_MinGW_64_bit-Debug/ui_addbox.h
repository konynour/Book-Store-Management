/********************************************************************************
** Form generated from reading UI file 'addbox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOX_H
#define UI_ADDBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *addBox)
    {
        if (addBox->objectName().isEmpty())
            addBox->setObjectName("addBox");
        addBox->resize(679, 391);
        addBox->setStyleSheet(QString::fromUtf8("\n"
"   QDialog {\n"
"       background-color: #2c3e50;\n"
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
"       background-color: #2980b9;\n"
"       color: white;\n"
"       font-size: 18px;\n"
"       border-radius: 10px;\n"
"       padding: 8px 16px;\n"
"   }\n"
"   QPushButton:hover {\n"
"       background-color: #21618c;\n"
"   }\n"
"   "));
        label = new QLabel(addBox);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 679, 51));
        label->setStyleSheet(QString::fromUtf8("font-size: 26px; font-weight: bold; text-align: center;"));
        label_2 = new QLabel(addBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 100, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        lineEdit = new QLineEdit(addBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 100, 300, 31));
        label_3 = new QLabel(addBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 180, 121, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        lineEdit_2 = new QLineEdit(addBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 180, 300, 31));
        pushButton = new QPushButton(addBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(285, 250, 111, 41));

        retranslateUi(addBox);

        QMetaObject::connectSlotsByName(addBox);
    } // setupUi

    void retranslateUi(QDialog *addBox)
    {
        addBox->setWindowTitle(QCoreApplication::translate("addBox", "Add Book", nullptr));
        label->setText(QCoreApplication::translate("addBox", "\342\236\225 Add Book Window", nullptr));
        label_2->setText(QCoreApplication::translate("addBox", "\360\237\223\230 Enter Book:", nullptr));
        label_3->setText(QCoreApplication::translate("addBox", "\360\237\222\265 Enter Price:", nullptr));
        pushButton->setText(QCoreApplication::translate("addBox", "\360\237\223\232 ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBox: public Ui_addBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOX_H
