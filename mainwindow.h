#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "addbox.h"
#include "purbox.h"
#include "viewbooks.h"  // إضافة هذا السطر لتضمين ملف الرأس الخاص بـ viewBooks

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void showBooks(); // تعريف دالة showBooks

private slots:
    void addFun();
    void onAdd(const QString &n, const QString &p);

    void purFun();
    void onPur(const QString &n, const QString &q);

private:
    Ui::MainWindow *ui;
    addBox *addbox;
    purBox *purbox;
    viewBooks *viewbooks; // إضافة المتغير هنا
    bool found;  // إضافة المتغير found الذي يستخدم في البحث
    QStringList nameList;  // إضافة المتغير nameList لحفظ أسماء الكتب
    QStringList priceList; // إضافة المتغير priceList لحفظ أسعار الكتب
};

#endif // MAINWINDOW_H
