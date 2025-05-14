#ifndef PURBOX_H
#define PURBOX_H

#include <QDialog>

namespace Ui {
class purBox;
}

class purBox : public QDialog
{
    Q_OBJECT

signals:
    void getPur(const QString &n, const QString &q);

public:
    explicit purBox(QWidget *parent = nullptr);
    ~purBox();

private slots:
    void pur();

private:
    Ui::purBox *ui;
};

#endif // PURBOX_H
