#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>

namespace Ui {
class LoginPage;
}

class LoginPage : public QDialog
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

signals:
    void loginSuccess(const QString &username, const QString &role);

private slots:
    void on_loginButton_clicked();
    void on_cancelButton_clicked();
    void on_showPasswordCheckBox_toggled(bool checked);

private:
    Ui::LoginPage *ui;

    bool verifyUser(const QString &username, const QString &password, QString &role);
};

#endif // LOGINPAGE_H
