#include "purbox.h"
#include "ui_purbox.h"

purBox::purBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::purBox)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked,this,&purBox::pur);
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

