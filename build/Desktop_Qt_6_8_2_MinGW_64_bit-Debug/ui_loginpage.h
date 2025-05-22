/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
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
    QLabel *logoLabel;
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
    QLabel *signupLabel;

    void setupUi(QDialog *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        verticalLayout = new QVBoxLayout(LoginPage);
        verticalLayout->setObjectName("verticalLayout");
        logoLabel = new QLabel(LoginPage);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/login_icon.png")));
        logoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(logoLabel);

        labelTitle = new QLabel(LoginPage);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelUsername = new QLabel(LoginPage);
        labelUsername->setObjectName("labelUsername");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelUsername);

        usernameLineEdit = new QLineEdit(LoginPage);
        usernameLineEdit->setObjectName("usernameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        labelPassword = new QLabel(LoginPage);
        labelPassword->setObjectName("labelPassword");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword);

        passwordLineEdit = new QLineEdit(LoginPage);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);


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

        signupLabel = new QLabel(LoginPage);
        signupLabel->setObjectName("signupLabel");
        signupLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(signupLabel);


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
        signupLabel->setText(QCoreApplication::translate("LoginPage", "Don't have an account? Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
