#ifndef SALESHISTORY_H
#define SALESHISTORY_H

#include <QDialog>

namespace Ui {
class SalesHistory;
}

class SalesHistory : public QDialog
{
    Q_OBJECT

public:
    explicit SalesHistory(QWidget *parent = nullptr);
    ~SalesHistory();

    void setsalesInfo(const QString &name, const QString &price); // دالة لتعيين البيانات

private:
    Ui::SalesHistory *ui;
};

#endif // SALESHISTORY_H
