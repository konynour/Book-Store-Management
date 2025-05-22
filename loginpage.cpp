#include "loginpage.h"
#include "ui_loginpage.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

LoginPage::LoginPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

LoginPage::~LoginPage()
{
    delete ui;
}

bool LoginPage::verifyUser(const QString &username, const QString &password, QString &role)
{
    QSqlQuery query;
    query.prepare("SELECT role FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        if (query.next()) {
            role = query.value(0).toString();
            return true;
        }
    } else {
        qDebug() << "Database query error:" << query.lastError().text();
    }
    return false;
}

void LoginPage::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text().trimmed();
    QString password = ui->passwordLineEdit->text();

    QString role;
    if (verifyUser(username, password, role)) {
        emit loginSuccess(username, role);
        accept();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }
}

void LoginPage::on_cancelButton_clicked()
{
    reject();
}

void LoginPage::on_showPasswordCheckBox_toggled(bool checked)
{
    ui->passwordLineEdit->setEchoMode(checked ? QLineEdit::Normal : QLineEdit::Password);
}
