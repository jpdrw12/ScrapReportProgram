/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Table
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *cNum;
    QLineEdit *pNum;
    QLineEdit *sQty;
    QLineEdit *gQty;
    QDateEdit *dateIn;
    QLineEdit *comIn;
    QPushButton *PartAddBtn;
    QSpacerItem *horizontalSpacer_3;
    QTableView *scrapTable;
    QFrame *line;

    void setupUi(QMainWindow *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName(QString::fromUtf8("Table"));
        Table->resize(1014, 738);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Table->sizePolicy().hasHeightForWidth());
        Table->setSizePolicy(sizePolicy);
        Table->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0.073, y1:0.068, x2:0.534, y2:0.324227, stop:0 rgba(170, 170, 170, 255), stop:0.488764 rgba(213, 213, 213, 251), stop:1 rgba(239, 239, 239, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        centralwidget = new QWidget(Table);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 60));
        label_2->setMaximumSize(QSize(16777215, 60));
        label_2->setStyleSheet(QString::fromUtf8("Border: 1px Solid;\n"
"text-decoration: underline;\n"
"font: 20pt \"Calibri\";\n"
"border-radius: 5px;\n"
"background-color: rgb(240, 240, 240);"));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(16777215, 37));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border: 1px solid;\n"
"border-top-left-radius: 5px;\n"
"border-top-right-radius: 5px;\n"
"padding: 5px 0px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(90, 0, 0);\n"
"max-height: 25px;\n"
"       font-size: 14px;\n"
"padding-left: 10px;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setIndent(20);

        verticalLayout->addWidget(label);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 70));
        frame->setMaximumSize(QSize(16777215, 70));
        frame->setStyleSheet(QString::fromUtf8("border: 1px solid;\n"
"background-color: rgb(240, 240, 240);\n"
"border-top: 0px;\n"
"	border-bottom-left-radius: 5px;\n"
"	border-bottom-right-radius: 5px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cNum = new QLineEdit(frame);
        cNum->setObjectName(QString::fromUtf8("cNum"));
        cNum->setMinimumSize(QSize(0, 35));
        cNum->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        cNum->setFont(font1);
        cNum->setStyleSheet(QString::fromUtf8("font: 13pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"border: 1px solid rgb(0,0,0);"));

        horizontalLayout->addWidget(cNum);

        pNum = new QLineEdit(frame);
        pNum->setObjectName(QString::fromUtf8("pNum"));
        pNum->setMinimumSize(QSize(0, 35));
        pNum->setMaximumSize(QSize(16777215, 35));
        pNum->setFont(font1);
        pNum->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 13pt \"MS Shell Dlg 2\";\n"
"border-radius: 4px;\n"
"border: 1px solid rgb(0,0,0);"));

        horizontalLayout->addWidget(pNum);

        sQty = new QLineEdit(frame);
        sQty->setObjectName(QString::fromUtf8("sQty"));
        sQty->setMinimumSize(QSize(0, 35));
        sQty->setMaximumSize(QSize(16777215, 35));
        sQty->setFont(font1);
        sQty->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"border: 1px solid rgb(0,0,0);\n"
"font: 13pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(sQty);

        gQty = new QLineEdit(frame);
        gQty->setObjectName(QString::fromUtf8("gQty"));
        gQty->setMinimumSize(QSize(0, 35));
        gQty->setMaximumSize(QSize(16777215, 35));
        gQty->setFont(font1);
        gQty->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"border: 1px solid rgb(0,0,0);\n"
"font: 13pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(gQty);

        dateIn = new QDateEdit(frame);
        dateIn->setObjectName(QString::fromUtf8("dateIn"));
        dateIn->setEnabled(true);
        dateIn->setMinimumSize(QSize(0, 35));
        dateIn->setMaximumSize(QSize(16777215, 35));
        dateIn->setFont(font1);
        dateIn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"border: 1px solid rgb(0,0,0);\n"
"font: 13pt \"MS Shell Dlg 2\";"));
        dateIn->setReadOnly(false);
        dateIn->setKeyboardTracking(true);
        dateIn->setCalendarPopup(true);

        horizontalLayout->addWidget(dateIn);

        comIn = new QLineEdit(frame);
        comIn->setObjectName(QString::fromUtf8("comIn"));
        comIn->setMinimumSize(QSize(0, 35));
        comIn->setMaximumSize(QSize(16777215, 35));
        comIn->setFont(font1);
        comIn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"border: 1px solid rgb(0,0,0);\n"
"font: 13pt \"MS Shell Dlg 2\";\n"
""));

        horizontalLayout->addWidget(comIn);

        PartAddBtn = new QPushButton(frame);
        PartAddBtn->setObjectName(QString::fromUtf8("PartAddBtn"));
        PartAddBtn->setMinimumSize(QSize(80, 35));
        PartAddBtn->setMaximumSize(QSize(16777215, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        PartAddBtn->setFont(font2);
        PartAddBtn->setStyleSheet(QString::fromUtf8("border-radius: 4px;\n"
"font: 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(220, 220, 220);\n"
"border: 1px solid rgb(0,0,0);\n"
"Hover: {background-color: rgb(90, 0, 0);}\n"
""));
        PartAddBtn->setIconSize(QSize(16, 16));
        PartAddBtn->setFlat(false);

        horizontalLayout->addWidget(PartAddBtn);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(frame);


        verticalLayout_2->addLayout(verticalLayout);

        scrapTable = new QTableView(centralwidget);
        scrapTable->setObjectName(QString::fromUtf8("scrapTable"));
        scrapTable->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0.073, y1:0.068, x2:0.438, y2:0.420818, stop:0.117978 rgba(255, 255, 255, 255), stop:0.589888 rgba(244, 244, 244, 251), stop:0.893258 rgba(234, 234, 234, 255));\n"
"alternate-background-color: rgb(236, 236, 236);"));
        scrapTable->setAlternatingRowColors(true);
        scrapTable->setSortingEnabled(true);
        scrapTable->horizontalHeader()->setCascadingSectionResizes(false);
        scrapTable->horizontalHeader()->setDefaultSectionSize(250);
        scrapTable->horizontalHeader()->setStretchLastSection(true);
        scrapTable->verticalHeader()->setVisible(false);
        scrapTable->verticalHeader()->setMinimumSectionSize(30);
        scrapTable->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout_2->addWidget(scrapTable);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        Table->setCentralWidget(centralwidget);

        retranslateUi(Table);

        PartAddBtn->setDefault(false);


        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QMainWindow *Table)
    {
        Table->setWindowTitle(QApplication::translate("Table", "Table", nullptr));
        label_2->setText(QApplication::translate("Table", "<html><head/><body><p align=\"center\"><span style=\" text-decoration: underline;\">SHEET METAL SCRAP REPORT</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Table", "Scrap Part Information", nullptr));
        cNum->setText(QString());
        cNum->setPlaceholderText(QApplication::translate("Table", "Card Number", nullptr));
        pNum->setPlaceholderText(QApplication::translate("Table", "Part Number", nullptr));
        sQty->setPlaceholderText(QApplication::translate("Table", "Scrap Quantity", nullptr));
        gQty->setPlaceholderText(QApplication::translate("Table", "Order Quantity", nullptr));
        comIn->setPlaceholderText(QApplication::translate("Table", "Comments", nullptr));
        PartAddBtn->setText(QApplication::translate("Table", "Add Part", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
