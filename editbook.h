#ifndef EDITBOOK_H
#define EDITBOOK_H

#include <QDialog>

namespace Ui {
class editbook;
}

class editbook : public QDialog
{
    Q_OBJECT

public:
    explicit editbook(QWidget *parent = nullptr);
    ~editbook();

    void setBookData(const QString &name, const QString &price); // تعيين بيانات الكتاب

signals:
    void bookEdited(const QString &oldName, const QString &newName, const QString &newPrice); // إشارة عند تعديل الكتاب

private slots:
    void on_saveButton_clicked(); // استجابة للضغط على زر الحفظ

private:
    Ui::editbook *ui;
    QString originalName; // لتخزين الاسم الأصلي للكتاب
};

#endif // EDITBOOK_H
