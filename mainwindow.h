#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include "addbox.h"
#include "purbox.h"
#include "viewbooks.h"
#include "editbook.h"
#include "SalesHistory.h"  // غيرنا من bookdialog.h إلى saleshistory.h

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addFun();
    void onAdd(const QString &n, const QString &p);

    void purFun();
    void onPur(const QString &n, const QString &q);

    void showBooks();

    void editBookFun();
    void onBookEdited(const QString &oldName, const QString &newName, const QString &newPrice);

    void showBookDetails();  // عرض تفاصيل الكتاب الجديدة

private:
    Ui::MainWindow *ui;
    addBox *addbox;
    purBox *purbox;
    viewBooks *viewbooks;
    editbook *editDialog;
    SalesHistory *detailsDialog;  // نوع الجديد
    QStringList nameList;
    QStringList priceList;
    void connectToDatabase();  // **تعريف الدالة هنا**
    void createTables();
    void createAdminUserIfNotExists();

    bool found;



};

#endif // MAINWINDOW_H
