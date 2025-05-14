#include "viewbooks.h"
#include "ui_viewbooks.h"
#include <QDebug>

viewBooks::viewBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewBooks)
{
    ui->setupUi(this);

    // ربط زر "إغلاق" مع وظيفة إغلاق النافذة
    connect(ui->closeButton, &QPushButton::clicked, this, &QDialog::accept);

    // يمكنك استدعاء loadBooks لملء الجدول ببعض البيانات التجريبية
    loadBooks();
}

viewBooks::~viewBooks()
{
    delete ui;
}

void viewBooks::loadBooks()
{
    ui->tableWidget->setRowCount(3);
    ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Book A"));
    ui->tableWidget->setItem(0, 1, new QTableWidgetItem("100"));
    ui->tableWidget->setItem(0, 2, new QTableWidgetItem("5"));

    ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Book B"));
    ui->tableWidget->setItem(1, 1, new QTableWidgetItem("150"));
    ui->tableWidget->setItem(1, 2, new QTableWidgetItem("2"));

    ui->tableWidget->setItem(2, 0, new QTableWidgetItem("Book C"));
    ui->tableWidget->setItem(2, 1, new QTableWidgetItem("90"));
    ui->tableWidget->setItem(2, 2, new QTableWidgetItem("10"));
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
    qDebug() << "showBooks() called";
    // هنا يمكنك إضافة الشيفرة الفعلية لعرض الكتب
}

void viewBooks::setBooks(const QStringList &names, const QStringList &prices)
{
    ui->tableWidget->setRowCount(names.size());

    for (int i = 0; i < names.size(); ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(names[i]));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(prices[i]));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem("1"));
    }
}
