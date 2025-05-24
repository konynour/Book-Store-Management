#include "categories.h"
#include "ui_categories.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

Categories::Categories(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Categories)
{
    ui->setupUi(this);

    connect(ui->addButton, &QPushButton::clicked, this, &Categories::addCategory);
    connect(ui->deleteButton, &QPushButton::clicked, this, &Categories::deleteSelectedCategory);

    loadCategories();
}

Categories::~Categories()
{
    delete ui;
}

void Categories::loadCategories()
{
    ui->listWidget->clear();

    QSqlQuery query("CREATE TABLE IF NOT EXISTS categories (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT UNIQUE)");
    if (!query.exec()) {
        qDebug() << "❌ Error creating categories table:" << query.lastError().text();
    }

    if (query.exec("SELECT name FROM categories")) {
        while (query.next()) {
            QString name = query.value(0).toString();
            ui->listWidget->addItem(name);
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to load categories: " + query.lastError().text());
    }
}

void Categories::addCategory()
{
    QString name = ui->lineEdit->text().trimmed();

    if (name.isEmpty()) {
        QMessageBox::warning(this, "Validation", "Category name cannot be empty!");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO categories (name) VALUES (:name)");
    query.bindValue(":name", name);

    if (query.exec()) {
        ui->lineEdit->clear();
        loadCategories();
        QMessageBox::information(this, "Success", "Category added.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to add category: " + query.lastError().text());
    }
}

void Categories::deleteSelectedCategory()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if (!item) {
        QMessageBox::warning(this, "Selection", "No category selected!");
        return;
    }

    QString name = item->text();
    QSqlQuery query;
    query.prepare("DELETE FROM categories WHERE name = :name");
    query.bindValue(":name", name);

    if (query.exec()) {
        loadCategories();
        QMessageBox::information(this, "Deleted", "Category deleted.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to delete: " + query.lastError().text());
    }
}
