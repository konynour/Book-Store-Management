#include "loginpage.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginPage login;

    MainWindow mainWindow;

    QObject::connect(&login, &LoginPage::loginSuccess, [&](const QString &username, const QString &role){
        qDebug() << "Login success for user:" << username << "with role:" << role;
        mainWindow.show();
    });

    if (login.exec() == QDialog::Accepted) {
        return a.exec();
    }

    return 0;
}
