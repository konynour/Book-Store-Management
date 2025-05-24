/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QFormLayout *formLayout;
    QLabel *labelUsername;
    QLineEdit *usernameLineEdit;
    QLabel *labelPassword;
    QLineEdit *passwordLineEdit;
    QCheckBox *showPasswordCheckBox;
    QHBoxLayout *horizontalLayoutButtons;
    QSpacerItem *horizontalSpacerLeft;
    QPushButton *loginButton;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacerRight;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->setMinimumSize(QSize(350, 300));
        LoginPage->setStyleSheet(QString::fromUtf8("\n"
"    QDialog {\n"
"        background-color: #f4f6f9;\n"
"        font-family: \"Segoe UI\", sans-serif;\n"
"        color: #2c3e50;\n"
"    }\n"
"\n"
"    QLabel#labelTitle {\n"
"        font-size: 20px;\n"
"        font-weight: bold;\n"
"        color: #34495e;\n"
"        margin-bottom: 10px;\n"
"    }\n"
"\n"
"    QLabel {\n"
"        font-size: 14px;\n"
"        color: #2c3e50;\n"
"    }\n"
"\n"
"    QLineEdit {\n"
"        background-color: #ffffff;\n"
"        border: 1px solid #bdc3c7;\n"
"        border-radius: 6px;\n"
"        padding: 6px;\n"
"        font-size: 14px;\n"
"    }\n"
"\n"
"    QLineEdit:focus {\n"
"        border: 1px solid #3498db;\n"
"        background-color: #ecf0f1;\n"
"    }\n"
"\n"
"    QPushButton {\n"
"        background-color: #3498db;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        border-radius: 6px;\n"
"        padding: 6px 12px;\n"
"    }\n"
"\n"
"    QPushButton:hover {\n"
"        background-color: #2980b9;\n"
"    }\n"
"\n"
"    QCheckBox {\n"
""
                        "        font-size: 13px;\n"
"        margin-top: 10px;\n"
"    }\n"
"   "));
        verticalLayout = new QVBoxLayout(LoginPage);
        verticalLayout->setObjectName("verticalLayout");
        labelTitle = new QLabel(LoginPage);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelUsername = new QLabel(LoginPage);
        labelUsername->setObjectName("labelUsername");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, labelUsername);

        usernameLineEdit = new QLineEdit(LoginPage);
        usernameLineEdit->setObjectName("usernameLineEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, usernameLineEdit);

        labelPassword = new QLabel(LoginPage);
        labelPassword->setObjectName("labelPassword");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, labelPassword);

        passwordLineEdit = new QLineEdit(LoginPage);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, passwordLineEdit);


        verticalLayout->addLayout(formLayout);

        showPasswordCheckBox = new QCheckBox(LoginPage);
        showPasswordCheckBox->setObjectName("showPasswordCheckBox");

        verticalLayout->addWidget(showPasswordCheckBox);

        horizontalLayoutButtons = new QHBoxLayout();
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        horizontalSpacerLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacerLeft);

        loginButton = new QPushButton(LoginPage);
        loginButton->setObjectName("loginButton");

        horizontalLayoutButtons->addWidget(loginButton);

        cancelButton = new QPushButton(LoginPage);
        cancelButton->setObjectName("cancelButton");

        horizontalLayoutButtons->addWidget(cancelButton);

        horizontalSpacerRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayoutButtons->addItem(horizontalSpacerRight);


        verticalLayout->addLayout(horizontalLayoutButtons);


        retranslateUi(LoginPage);

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QDialog *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Login", nullptr));
        labelTitle->setText(QCoreApplication::translate("LoginPage", "Please Log In", nullptr));
        labelUsername->setText(QCoreApplication::translate("LoginPage", "Username:", nullptr));
        labelPassword->setText(QCoreApplication::translate("LoginPage", "Password:", nullptr));
        showPasswordCheckBox->setText(QCoreApplication::translate("LoginPage", "Show Password", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        cancelButton->setText(QCoreApplication::translate("LoginPage", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
