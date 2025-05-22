#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include "viewbooks.h"
#include "editbook.h"
#include "SalesHistory.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , addbox(new addBox(this))
    , purbox(new purBox(this))
    , viewbooks(new viewBooks(this))
    , editDialog(new editbook(this))
    , detailsDialog(new SalesHistory(this))
{
    ui->setupUi(this);

    // ربط الأزرار
    connect(ui->addBookButton, &QPushButton::clicked, this, &MainWindow::addFun);
    connect(addbox, &addBox::getVal, this, &MainWindow::onAdd);

    connect(ui->purchaseButton, &QPushButton::clicked, this, &MainWindow::purFun);
    connect(purbox, &purBox::getPur, this, &MainWindow::onPur);

    connect(ui->viewBooksButton, &QPushButton::clicked, this, &MainWindow::showBooks);
    connect(ui->editBookButton, &QPushButton::clicked, this, &MainWindow::editBookFun);
    connect(ui->bookDetailsButton, &QPushButton::clicked, this, &MainWindow::showBookDetails);

    connectToDatabase(); // الاتصال بقاعدة البيانات
    createTables();
    // إنشاء الجداول إن لم تكن موجودة
    createAdminUserIfNotExists();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete addbox;
    delete purbox;
    delete viewbooks;
    delete editDialog;
    delete detailsDialog;
}

void MainWindow::connectToDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("bookstore.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", db.lastError().text());
    } else {
        qDebug() << "✅ Connected to SQLite!";
    }
}

void MainWindow::createTables()
{
    QSqlQuery query;

    // جدول الكتب
    QString createBooksTable = R"(
        CREATE TABLE IF NOT EXISTS books (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            name TEXT NOT NULL,
            price INTEGER NOT NULL
        )
    )";

    if (!query.exec(createBooksTable)) {
        qDebug() << "❌ Failed to create books table:" << query.lastError().text();
    } else {
        qDebug() << "✅ Books table ready!";
    }

    // جدول المستخدمين
    QString createUsersTable = R"(
        CREATE TABLE IF NOT EXISTS users (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            username TEXT UNIQUE NOT NULL,
            password TEXT NOT NULL,
            role TEXT NOT NULL
        )
    )";

    if (!query.exec(createUsersTable)) {
        qDebug() << "❌ Failed to create users table:" << query.lastError().text();
    } else {
        qDebug() << "✅ Users table ready!";
    }
}

void MainWindow::addFun()
{
    addbox->show();
}

void MainWindow::onAdd(const QString &n, const QString &p)
{
    QSqlQuery query;
    query.prepare("INSERT INTO books (name, price) VALUES (:name, :price)");
    query.bindValue(":name", n);
    query.bindValue(":price", p.toInt());

    if (query.exec()) {
        QMessageBox::information(this, "Success", "New Book Added Successfully");
    } else {
        QMessageBox::critical(this, "Error", "Failed to add book: " + query.lastError().text());
    }
}

void MainWindow::purFun()
{
    purbox->show();
}

void MainWindow::onPur(const QString &n, const QString &q)
{
    QSqlQuery query;
    query.prepare("SELECT price FROM books WHERE name = :name");
    query.bindValue(":name", n);

    if (query.exec() && query.next()) {
        int price = query.value(0).toInt();
        int quant = q.toInt();
        int bill = price * quant;

        QMessageBox::information(this, "Success", "Total Bill: " + QString::number(bill));
    } else {
        QMessageBox::warning(this, "Error", "Book Not Found!");
    }
}

void MainWindow::showBooks()
{
    viewbooks->loadBooksFromDatabase();  // تم تعديلها لتحمل من SQLite
    viewbooks->show();
}

void MainWindow::editBookFun()
{
    QSqlQuery query("SELECT name, price FROM books LIMIT 1");

    if (query.next()) {
        QString currentName = query.value(0).toString();
        QString currentPrice = query.value(1).toString();

        editDialog->setBookData(currentName, currentPrice);
        connect(editDialog, &editbook::bookEdited, this, &MainWindow::onBookEdited);
        editDialog->exec();
    } else {
        QMessageBox::information(this, "Info", "No books available to edit.");
    }
}

void MainWindow::onBookEdited(const QString &oldName, const QString &newName, const QString &newPrice)
{
    QSqlQuery query;
    query.prepare("UPDATE books SET name = :newName, price = :newPrice WHERE name = :oldName");
    query.bindValue(":newName", newName);
    query.bindValue(":newPrice", newPrice.toInt());
    query.bindValue(":oldName", oldName);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Book details updated.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to update book.");
    }
}

void MainWindow::showBookDetails()
{
    QSqlQuery query("SELECT name, price FROM books LIMIT 1");

    if (query.next()) {
        QString name = query.value(0).toString();
        QString price = query.value(1).toString();
        detailsDialog->setsalesInfo(name, price);
        detailsDialog->exec();
    } else {
        QMessageBox::information(this, "Info", "No books to show.");
    }
}

void MainWindow::createAdminUserIfNotExists()
{
    QSqlQuery query;
    // نتحقق إذا كان يوجد حساب أدمن
    if (query.exec("SELECT COUNT(*) FROM users WHERE role = 'admin'")) {
        if (query.next()) {
            int adminCount = query.value(0).toInt();
            if (adminCount == 0) {
                // إنشاء حساب أدمن إفتراضي
                query.prepare("INSERT INTO users (username, password, role) VALUES (:username, :password, :role)");
                query.bindValue(":username", "admin");
                query.bindValue(":password", "admin123"); // لاحقًا ممكن تشفر الباسورد
                query.bindValue(":role", "admin");

                if (query.exec()) {
                    qDebug() << "✅ Default admin user created.";
                } else {
                    qDebug() << "❌ Failed to create admin user:" << query.lastError().text();
                }
            } else {
                qDebug() << "✅ Admin user already exists.";
            }
        }
    } else {
        qDebug() << "❌ Failed to check admin user:" << query.lastError().text();
    }
}
