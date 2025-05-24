#include "purbox.h"
#include "ui_purbox.h"
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

purBox::purBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::purBox)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked,this,&purBox::pur);
    connect(ui->deleteButton, &QPushButton::clicked, this, &purBox::on_deleteButton_clicked);

}

purBox::~purBox()
{
    delete ui;
}

void purBox::pur()
{
    QString userName=ui->lineEdit->text();
    QString quant=ui->lineEdit_2->text();
    emit getPur(userName,quant);
}
void purBox::on_deleteButton_clicked()
{
    QString bookName = ui->lineEdit->text().trimmed(); // ناخد اسم الكتاب من مربع النص

    if (bookName.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter the book name to delete.");
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM books WHERE name = :name");
    query.bindValue(":name", bookName);

    if (query.exec()) {
        if (query.numRowsAffected() > 0) {
            QMessageBox::information(this, "Deleted", "Book deleted successfully.");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear(); // تنظيف الكمية أيضاً
        } else {
            QMessageBox::warning(this, "Not Found", "Book not found in the database.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to delete book.");
        qDebug() << "Delete error:" << query.lastError().text();
    }
}

