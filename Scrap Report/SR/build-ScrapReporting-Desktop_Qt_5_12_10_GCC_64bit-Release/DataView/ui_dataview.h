/********************************************************************************
** Form generated from reading UI file 'dataview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAVIEW_H
#define UI_DATAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataView
{
public:
    QAction *actionClear_Database;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *ScrapTable;
    QVBoxLayout *verticalLayout_2;
    QTableView *ScrapTable_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Export;
    QPushButton *clrAll;
    QPushButton *dRow_Scrap;
    QWidget *Kanban;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *k_Card;
    QLineEdit *k_Part;
    QLineEdit *k_Qty;
    QPushButton *pushButton;
    QTableView *kanbanTable;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *DeleteRow;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DataView)
    {
        if (DataView->objectName().isEmpty())
            DataView->setObjectName(QString::fromUtf8("DataView"));
        DataView->resize(800, 600);
        actionClear_Database = new QAction(DataView);
        actionClear_Database->setObjectName(QString::fromUtf8("actionClear_Database"));
        centralWidget = new QWidget(DataView);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        ScrapTable = new QWidget();
        ScrapTable->setObjectName(QString::fromUtf8("ScrapTable"));
        verticalLayout_2 = new QVBoxLayout(ScrapTable);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ScrapTable_2 = new QTableView(ScrapTable);
        ScrapTable_2->setObjectName(QString::fromUtf8("ScrapTable_2"));
        ScrapTable_2->setFrameShape(QFrame::StyledPanel);
        ScrapTable_2->setFrameShadow(QFrame::Plain);
        ScrapTable_2->setAlternatingRowColors(true);
        ScrapTable_2->setTextElideMode(Qt::ElideLeft);
        ScrapTable_2->setSortingEnabled(true);
        ScrapTable_2->horizontalHeader()->setCascadingSectionResizes(false);
        ScrapTable_2->horizontalHeader()->setStretchLastSection(true);
        ScrapTable_2->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(ScrapTable_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        Export = new QPushButton(ScrapTable);
        Export->setObjectName(QString::fromUtf8("Export"));

        horizontalLayout_3->addWidget(Export);

        clrAll = new QPushButton(ScrapTable);
        clrAll->setObjectName(QString::fromUtf8("clrAll"));

        horizontalLayout_3->addWidget(clrAll);

        dRow_Scrap = new QPushButton(ScrapTable);
        dRow_Scrap->setObjectName(QString::fromUtf8("dRow_Scrap"));

        horizontalLayout_3->addWidget(dRow_Scrap);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(ScrapTable, QString());
        Kanban = new QWidget();
        Kanban->setObjectName(QString::fromUtf8("Kanban"));
        verticalLayout_3 = new QVBoxLayout(Kanban);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(Kanban);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        k_Card = new QLineEdit(widget);
        k_Card->setObjectName(QString::fromUtf8("k_Card"));

        horizontalLayout->addWidget(k_Card);

        k_Part = new QLineEdit(widget);
        k_Part->setObjectName(QString::fromUtf8("k_Part"));

        horizontalLayout->addWidget(k_Part);

        k_Qty = new QLineEdit(widget);
        k_Qty->setObjectName(QString::fromUtf8("k_Qty"));

        horizontalLayout->addWidget(k_Qty);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addWidget(widget);

        kanbanTable = new QTableView(Kanban);
        kanbanTable->setObjectName(QString::fromUtf8("kanbanTable"));
        kanbanTable->setFrameShadow(QFrame::Plain);
        kanbanTable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        kanbanTable->setAlternatingRowColors(true);
        kanbanTable->setSelectionMode(QAbstractItemView::SingleSelection);
        kanbanTable->setSelectionBehavior(QAbstractItemView::SelectItems);
        kanbanTable->setSortingEnabled(true);
        kanbanTable->horizontalHeader()->setMinimumSectionSize(100);
        kanbanTable->horizontalHeader()->setDefaultSectionSize(250);
        kanbanTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        kanbanTable->horizontalHeader()->setStretchLastSection(true);
        kanbanTable->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(kanbanTable);

        widget_2 = new QWidget(Kanban);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(608, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        DeleteRow = new QPushButton(widget_2);
        DeleteRow->setObjectName(QString::fromUtf8("DeleteRow"));

        horizontalLayout_2->addWidget(DeleteRow);


        verticalLayout_3->addWidget(widget_2);

        tabWidget->addTab(Kanban, QString());

        verticalLayout->addWidget(tabWidget);

        DataView->setCentralWidget(centralWidget);
        statusbar = new QStatusBar(DataView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DataView->setStatusBar(statusbar);

        retranslateUi(DataView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataView);
    } // setupUi

    void retranslateUi(QMainWindow *DataView)
    {
        DataView->setWindowTitle(QApplication::translate("DataView", "DataView", nullptr));
        actionClear_Database->setText(QApplication::translate("DataView", "Export", nullptr));
        Export->setText(QApplication::translate("DataView", "Export", nullptr));
        clrAll->setText(QApplication::translate("DataView", "Delete All", nullptr));
        dRow_Scrap->setText(QApplication::translate("DataView", "Delete Current Selection", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ScrapTable), QApplication::translate("DataView", "Scrap Table View", nullptr));
        k_Card->setPlaceholderText(QApplication::translate("DataView", "Card Number", nullptr));
        k_Part->setPlaceholderText(QApplication::translate("DataView", "Part Number", nullptr));
        k_Qty->setPlaceholderText(QApplication::translate("DataView", "Quantity", nullptr));
        pushButton->setText(QApplication::translate("DataView", "Add Part", nullptr));
        DeleteRow->setText(QApplication::translate("DataView", "Delete Current Selection", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Kanban), QApplication::translate("DataView", "Kanban Card Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataView: public Ui_DataView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAVIEW_H
