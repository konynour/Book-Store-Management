#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStringList>
#include <QMessageBox>
#include "viewbooks.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , addbox(new addBox(this))
    , purbox(new purBox(this))
    , viewbooks(new viewBooks(this))
    , found(false) // نهيئ المتغير
{
    ui->setupUi(this);

    // زر إضافة كتاب
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::addFun);
    connect(addbox, &addBox::getVal, this, &MainWindow::onAdd);

    // زر الشراء
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::purFun);
    connect(purbox, &purBox::getPur, this, &MainWindow::onPur);

    // زر عرض الكتب
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::showBooks);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addbox;
    delete purbox;
    delete viewbooks;
}

void MainWindow::addFun()
{
    addbox->show();
}

void MainWindow::onAdd(const QString &n, const QString &p)
{
    nameList.append(n);
    priceList.append(p);

    QMessageBox::information(this, "Success", "New Book Added Successfully");
}

void MainWindow::purFun()
{
    purbox->show();
}

void MainWindow::onPur(const QString &n, const QString &q)
{
    found = false;
    for (int i = 0; i < nameList.length(); i++) {
        if (n == nameList[i]) {
            found = true;
            int quant_int = q.toInt();
            int price_int = priceList[i].toInt();

            int bill = price_int * quant_int;
            QString bill_str = QString::number(bill);

            QMessageBox::information(this, "Success", "Total Bill: " + bill_str);
            return;
        }
    }

    if (!found) {
        QMessageBox::information(this, "ERROR", "Book Not Found!");
    }
}

void MainWindow::showBooks()
{
    viewbooks->setBooks(nameList, priceList);
    viewbooks->show();
}
