#include "saleshistory.h"
#include "ui_saleshistory.h"

SalesHistory::SalesHistory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SalesHistory)
{
    ui->setupUi(this);
}

SalesHistory::~SalesHistory()
{
    delete ui;
}

void SalesHistory::setsalesInfo(const QString &name, const QString &price)
{
    ui->labelBookName->setText(name);
    ui->labelBookPrice->setText(price);
}
