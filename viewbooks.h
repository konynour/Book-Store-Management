#ifndef VIEWBOOKS_H
#define VIEWBOOKS_H

#include <QDialog>
#include <QStringList>
#include <QTableWidgetItem>

// تأكد من إضافة هذه السطور لتضمين الأصناف addBox و purBox
#include "addbox.h"  // تضمين رأس addBox
#include "purbox.h"  // تضمين رأس purBox

namespace Ui {
class viewBooks;
}

class viewBooks : public QDialog
{
    Q_OBJECT

public:
    explicit viewBooks(QWidget *parent = nullptr);
    ~viewBooks();

    // دالة setBooks لعرض الكتب في الجدول
    void setBooks(const QStringList &names, const QStringList &prices);

private slots:

    void addFun();
    void purFun();
    void onAdd(const QString &n, const QString &p);
    void onPur(const QString &n, const QString &q);
    void showBooks();

private:
    void loadBooks();

    Ui::viewBooks *ui;
    addBox *addbox;  // تعريف كائن من addBox
    purBox *purbox;  // تعريف كائن من purBox
    viewBooks *viewbooks;
};

#endif // VIEWBOOKS_H
