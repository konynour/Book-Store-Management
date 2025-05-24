#include "viewbooks.h"
#include "ui_viewbooks.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidgetItem>
#include <QMessageBox>


viewBooks::viewBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewBooks)
{
    ui->setupUi(this);

    // ربط زر "إغلاق" مع وظيفة إغلاق النافذة
    connect(ui->closeButton, &QPushButton::clicked, this, &QDialog::accept);

    // الآن ما نحتاجش نملأ بيانات ثابتة عند الفتح
    // loadBooks();  // نلغيها، لأننا هنحمل من قاعدة البيانات مباشرة
}

viewBooks::~viewBooks()
{
    delete ui;
}

// تحميل الكتب من قاعدة البيانات SQLite وعرضها في الجدول
void viewBooks::loadBooksFromDatabase()
{
    QSqlQuery query("SELECT name, price FROM books");

    ui->tableWidget->clearContents();

    int row = 0;
    // نفرغ الجدول أولاً
    ui->tableWidget->setRowCount(0);

    while (query.next()) {
        ui->tableWidget->insertRow(row);

        QString name = query.value(0).toString();
        QString price = query.value(1).toString();

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(name));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(price));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem("1"));  // الكمية ثابتة 1 أو ممكن تعدلها

        row++;
    }

    if (row == 0) {
        qDebug() << "No books found in database.";
    }
}

// دوال موجودة ممكن تستخدمها لاحقاً، يمكن تحذفها لو مش محتاجها
void viewBooks::loadBooks()
{
    // مش محتاجين هذه الآن
}

void viewBooks::addFun()
{
    qDebug() << "Add Book button clicked!";
}

void viewBooks::purFun()
{
    qDebug() << "Purchase Book button clicked!";
}

void viewBooks::onAdd(const QString &n, const QString &p)
{
    qDebug() << "onAdd triggered with values: " << n << " " << p;
}

void viewBooks::onPur(const QString &n, const QString &q)
{
    qDebug() << "onPur triggered with values: " << n << " " << q;
}

void viewBooks::showBooks()
{

    loadBooksFromDatabase();
    this->show();
}

void viewBooks::setBooks(const QStringList &names, const QStringList &prices)
{
    // دي من الماضي لما كنت بتستخدم الـ QStringList مش من قاعدة بيانات
    // ممكن تحذفها أو تخليها تدعو loadBooksFromDatabase بدلًا منها
}
void viewBooks::on_deleteButton_clicked()
{
    int row = ui->tableWidget->currentRow();
    if (row >= 0) {
        QString bookName = ui->tableWidget->item(row, 0)->text();

        // احذف من قاعدة البيانات (SQLite) إذا كنت رابط القاعدة
        QSqlQuery query;
        query.prepare("DELETE FROM books WHERE name = :name");
        query.bindValue(":name", bookName);
        if (query.exec()) {
            ui->tableWidget->removeRow(row);
            QMessageBox::information(this, "Deleted", "Book deleted successfully.");
        } else {
            QMessageBox::warning(this, "Error", "Failed to delete book.");
        }
    } else {
        QMessageBox::warning(this, "No selection", "Please select a book to delete.");
    }
}
