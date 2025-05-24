/********************************************************************************
** Form generated from reading UI file 'viewbooks.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWBOOKS_H
#define UI_VIEWBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_viewBooks
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *closeButton;
    QPushButton *deleteButton;

    void setupUi(QDialog *viewBooks)
    {
        if (viewBooks->objectName().isEmpty())
            viewBooks->setObjectName("viewBooks");
        viewBooks->resize(800, 500);
        viewBooks->setStyleSheet(QString::fromUtf8("\n"
"    QDialog {\n"
"        background-color: #34495e;  /* \331\204\331\210\331\206 \330\247\331\204\330\256\331\204\331\201\331\212\330\251 \331\205\330\264\330\247\330\250\331\207 \331\204\331\200 purBox */\n"
"    }\n"
"    QLabel#label {\n"
"        font-size: 28px;\n"
"        font-weight: bold;\n"
"        color: white;  /* \331\206\330\265 \330\250\330\247\331\204\331\204\331\210\331\206 \330\247\331\204\330\243\330\250\331\212\330\266 */\n"
"    }\n"
"    QTableWidget {\n"
"        background-color: #ffffff;\n"
"        gridline-color: #d0d0d0;\n"
"        font-size: 16px;\n"
"        alternate-background-color: #f0f0f0;\n"
"    }\n"
"    QTableWidget QTableWidgetItem {\n"
"        background-color: #f9f9f9;  /* \330\247\331\204\331\204\331\210\331\206 \330\247\331\204\330\254\330\257\331\212\330\257 \331\204\330\256\331\204\330\247\331\212\330\247 \330\247\331\204\331\203\330\252\330\247\330\250\330\251 */\n"
"    }\n"
"    QTableWidget::item:selected {\n"
"        background-color: #27ae60;  /* \331"
                        "\204\331\210\331\206 \330\256\331\204\331\201\331\212\330\251 \330\247\331\204\330\256\331\204\330\247\331\212\330\247 \330\247\331\204\331\205\330\255\330\257\330\257\330\251 \331\202\330\261\331\212\330\250 \331\205\331\206 \331\204\331\210\331\206 \330\247\331\204\330\262\330\261 */\n"
"    }\n"
"    QHeaderView::section {\n"
"        background-color: #2e3a59;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #27ae60;  /* \331\204\331\210\331\206 \330\247\331\204\330\262\330\261 \331\202\330\261\331\212\330\250 \331\205\331\206 purBox */\n"
"        color: white;\n"
"        font-size: 16px;\n"
"        border-radius: 10px;\n"
"        padding: 10px 20px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #1e8449;  /* \331\204\331\210\331\206 \330\247\331\204\330\262\330\261 \330\271\331\206\330\257 \330\247\331\204\330\252\330\255\331\210\331\212\331\205 */\n"
"    }\n"
"   "));
        label = new QLabel(viewBooks);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 10, 300, 50));
        label->setAlignment(Qt::AlignCenter);
        tableWidget = new QTableWidget(viewBooks);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(50, 80, 700, 380));
        tableWidget->setColumnCount(3);
        tableWidget->setRowCount(0);
        tableWidget->horizontalHeader()->setVisible(true);
        closeButton = new QPushButton(viewBooks);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(650, 450, 100, 40));
        deleteButton = new QPushButton(viewBooks);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(520, 450, 100, 40));

        retranslateUi(viewBooks);

        QMetaObject::connectSlotsByName(viewBooks);
    } // setupUi

    void retranslateUi(QDialog *viewBooks)
    {
        viewBooks->setWindowTitle(QCoreApplication::translate("viewBooks", "\360\237\223\232 View Books", nullptr));
        label->setText(QCoreApplication::translate("viewBooks", "\360\237\223\232 Available Books", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("viewBooks", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("viewBooks", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("viewBooks", "Quantity", nullptr));
        closeButton->setText(QCoreApplication::translate("viewBooks", "exit", nullptr));
        deleteButton->setText(QCoreApplication::translate("viewBooks", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewBooks: public Ui_viewBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWBOOKS_H
