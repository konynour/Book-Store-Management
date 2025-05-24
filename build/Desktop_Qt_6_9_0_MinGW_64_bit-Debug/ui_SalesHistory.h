/********************************************************************************
** Form generated from reading UI file 'SalesHistory.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESHISTORY_H
#define UI_SALESHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SalesHistory
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *bookInfoLayout;
    QLabel *labelBookNameTitle;
    QLabel *labelBookName;
    QLabel *labelBookPriceTitle;
    QLabel *labelBookPrice;
    QTableWidget *salesTable;
    QHBoxLayout *buttonsLayout;
    QPushButton *refreshButton;
    QPushButton *exportButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *SalesHistory)
    {
        if (SalesHistory->objectName().isEmpty())
            SalesHistory->setObjectName("SalesHistory");
        SalesHistory->setMinimumSize(QSize(650, 450));
        SalesHistory->setMaximumSize(QSize(900, 650));
        SalesHistory->setStyleSheet(QString::fromUtf8("\n"
"    QDialog {\n"
"      background-color: #2c3e50;\n"
"      color: white;\n"
"      font-family: \"Segoe UI\", Tahoma, Geneva, Verdana, sans-serif;\n"
"    }\n"
"    QLabel {\n"
"      font-size: 13px;\n"
"      font-family: \"Segoe UI\", Tahoma, Geneva, Verdana, sans-serif;\n"
"      color: #ecf0f1;\n"
"    }\n"
"    QPushButton {\n"
"      background-color: #3498db;\n"
"      color: white;\n"
"      font-weight: bold;\n"
"      border-radius: 8px;\n"
"      padding: 10px 18px;\n"
"      border: none;\n"
"      min-width: 80px;\n"
"      box-shadow: 2px 2px 5px rgba(0,0,0,0.3);\n"
"    }\n"
"    QPushButton:hover {\n"
"      background-color: #2980b9;\n"
"    }\n"
"    QPushButton:pressed {\n"
"      background-color: #1f618d;\n"
"    }\n"
"    QTableWidget {\n"
"      background-color: #34495e;\n"
"      alternate-background-color: #3e536b;\n"
"      gridline-color: #5d6d7e;\n"
"      font-size: 14px;\n"
"      selection-background-color: #16a085;\n"
"      selection-color: white;\n"
"      border-radi"
                        "us: 8px;\n"
"      padding: 5px;\n"
"    }\n"
"    QTableWidget::item:hover {\n"
"      background-color: #2980b9;\n"
"      color: white;\n"
"    }\n"
"    QHeaderView::section {\n"
"      background-color: #1abc9c;\n"
"      color: black;\n"
"      font-weight: bold;\n"
"      padding: 6px;\n"
"      border: none;\n"
"    }\n"
"   "));
        verticalLayout = new QVBoxLayout(SalesHistory);
        verticalLayout->setSpacing(12);
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(SalesHistory);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"       color: #1abc9c;\n"
"       text-shadow: 1px 1px 2px rgba(0,0,0,0.4);\n"
"      "));

        verticalLayout->addWidget(titleLabel);

        bookInfoLayout = new QHBoxLayout();
        bookInfoLayout->setSpacing(30);
        bookInfoLayout->setObjectName("bookInfoLayout");
        labelBookNameTitle = new QLabel(SalesHistory);
        labelBookNameTitle->setObjectName("labelBookNameTitle");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        labelBookNameTitle->setFont(font1);

        bookInfoLayout->addWidget(labelBookNameTitle);

        labelBookName = new QLabel(SalesHistory);
        labelBookName->setObjectName("labelBookName");
        QFont font2;
        font2.setPointSize(14);
        labelBookName->setFont(font2);

        bookInfoLayout->addWidget(labelBookName);

        labelBookPriceTitle = new QLabel(SalesHistory);
        labelBookPriceTitle->setObjectName("labelBookPriceTitle");
        labelBookPriceTitle->setFont(font1);

        bookInfoLayout->addWidget(labelBookPriceTitle);

        labelBookPrice = new QLabel(SalesHistory);
        labelBookPrice->setObjectName("labelBookPrice");
        labelBookPrice->setFont(font2);

        bookInfoLayout->addWidget(labelBookPrice);


        verticalLayout->addLayout(bookInfoLayout);

        salesTable = new QTableWidget(SalesHistory);
        if (salesTable->columnCount() < 5)
            salesTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        salesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        salesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        salesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        salesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        salesTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        salesTable->setObjectName("salesTable");
        salesTable->setColumnCount(5);
        salesTable->setRowCount(0);
        salesTable->setAlternatingRowColors(true);
        salesTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        salesTable->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(salesTable);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setSpacing(25);
        buttonsLayout->setObjectName("buttonsLayout");
        refreshButton = new QPushButton(SalesHistory);
        refreshButton->setObjectName("refreshButton");

        buttonsLayout->addWidget(refreshButton);

        exportButton = new QPushButton(SalesHistory);
        exportButton->setObjectName("exportButton");

        buttonsLayout->addWidget(exportButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(SalesHistory);
        closeButton->setObjectName("closeButton");

        buttonsLayout->addWidget(closeButton);


        verticalLayout->addLayout(buttonsLayout);


        retranslateUi(SalesHistory);
        QObject::connect(closeButton, &QPushButton::clicked, SalesHistory, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SalesHistory);
    } // setupUi

    void retranslateUi(QDialog *SalesHistory)
    {
        SalesHistory->setWindowTitle(QCoreApplication::translate("SalesHistory", "Sales History", nullptr));
        titleLabel->setText(QCoreApplication::translate("SalesHistory", "\360\237\223\212 Sales History", nullptr));
        labelBookNameTitle->setText(QCoreApplication::translate("SalesHistory", "Book Name:", nullptr));
        labelBookName->setText(QCoreApplication::translate("SalesHistory", "---", nullptr));
        labelBookPriceTitle->setText(QCoreApplication::translate("SalesHistory", "Price:", nullptr));
        labelBookPrice->setText(QCoreApplication::translate("SalesHistory", "---", nullptr));
        QTableWidgetItem *___qtablewidgetitem = salesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SalesHistory", "Sale ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = salesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SalesHistory", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = salesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("SalesHistory", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = salesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("SalesHistory", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = salesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("SalesHistory", "Total Price", nullptr));
        refreshButton->setText(QCoreApplication::translate("SalesHistory", "\360\237\224\204 Refresh", nullptr));
        exportButton->setText(QCoreApplication::translate("SalesHistory", "\360\237\223\244 Export", nullptr));
        closeButton->setText(QCoreApplication::translate("SalesHistory", "\342\234\226 Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SalesHistory: public Ui_SalesHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESHISTORY_H
