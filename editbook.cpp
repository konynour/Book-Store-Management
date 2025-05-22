#include "editbook.h"
#include "ui_editbook.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

editbook::editbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editbook)
{
    ui->setupUi(this);

    // ربط زر الحفظ مع الدالة المناسبة
    connect(ui->saveButton, &QPushButton::clicked, this, &editbook::on_saveButton_clicked);
}

editbook::~editbook()
{
    delete ui;
}

void editbook::setBookData(const QString &name, const QString &price)
{
    originalName = name;
    ui->lineEditName->setText(name);
    ui->lineEditPrice->setText(price);
}

void editbook::on_saveButton_clicked()
{
    QString newName = ui->lineEditName->text();
    QString newPrice = ui->lineEditPrice->text();

    if (newName.isEmpty() || newPrice.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please fill all fields.");
        return;
    }

    // تحديث بيانات الكتاب في قاعدة البيانات SQLite
    QSqlQuery query;
    query.prepare("UPDATE books SET name = :newName, price = :newPrice WHERE name = :originalName");
    query.bindValue(":newName", newName);
    query.bindValue(":newPrice", newPrice);
    query.bindValue(":originalName", originalName);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to update book: " + query.lastError().text());
        qDebug() << "Failed to update book:" << query.lastError().text();
        return;
    }

    // إرسال الإشارة مع البيانات الجديدة (لو في حاجة عايزة تتعامل مع التغيير في MainWindow مثلاً)
    emit bookEdited(originalName, newName, newPrice);

    this->accept(); // إغلاق النافذة بعد التحديث
}
