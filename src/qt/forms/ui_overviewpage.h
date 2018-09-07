/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QLabel *labelAlerts;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QPushButton *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QFrame *line;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelWatchPending;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QTableWidget *hodlTable;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelMaturedText;
    QLabel *labelMatured;
    QLabel *labellockedtext;
    QLabel *labelaccruedtext;
    QLabel *labellocked;
    QLabel *labelaccrued;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(1062, 649);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        OverviewPage->setStyleSheet(QLatin1String("QWidget QFrame#frame_2 {\n"
"image: url(:/images/background);\n"
"image-position:top right;\n"
"padding-top:0px;\n"
"}\n"
"\n"
"QStatusBar {\n"
"background-color:#ffffff;\n"
"}\n"
"\n"
".QFrame {\n"
"background-color:transparent;\n"
"border:0px solid #fff;\n"
"}\n"
"\n"
"QMenuBar {\n"
"background-color:#fff;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"background-color:#fff;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"background-color:#f8f6f6;\n"
"}\n"
"\n"
"QMenu {\n"
"background-color:#f8f6f6;\n"
"}\n"
"\n"
"QMenu::item {\n"
"color:#333;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"background-color:#f2f0f0;\n"
"color:#333;\n"
"}\n"
"\n"
"QToolBar {\n"
"background-color:#fff;\n"
"border:0px solid #000;\n"
"padding:0;\n"
"margin:0;\n"
"}\n"
"\n"
"QToolBar > QToolButton {\n"
"background-color:#fff;\n"
"border:0px solid #333;\n"
"min-height:2.5em;\n"
"min-width: 8em;\n"
"padding: 0em 1em;\n"
"/*font-weight:bold;*/\n"
"color:#333;\n"
"}\n"
"\n"
"QToolBar > QToolButton:checked {\n"
"background-color:#183862;\n"
"color:#fff;\n"
""
                        "font-weight:bold;\n"
"}\n"
"\n"
"QMessageBox {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"/*******************************************************/\n"
"\n"
"QLabel { /* Base Text Size & Color */\n"
"font-size:12px;\n"
"color:#333333;\n"
"}\n"
"\n"
".QCheckBox { /* Checkbox Labels */\n"
"color:#333333;\n"
"background-color:transparent;\n"
"}\n"
"\n"
".QCheckBox:hover {\n"
"background-color:transparent;\n"
"}\n"
"\n"
".QValidatedLineEdit, .QLineEdit { /* Text Entry Fields */\n"
"border: 1px solid #82C3E6;\n"
"font-size:11px;\n"
"min-height:25px;\n"
"outline:0;\n"
"padding:3px;\n"
"background-color:#fcfcfc;\n"
"}\n"
"\n"
".QLineEdit:!focus {\n"
"font-size:12px;\n"
"}\n"
"\n"
".QValidatedLineEdit:disabled, .QLineEdit:disabled {\n"
"background-color:#f2f2f2;\n"
"}\n"
"\n"
"/*******************************************************/\n"
"\n"
"QPushButton { /* Global Button Style */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #4ca5dc, stop: .1 #2c85cc, stop: .95 #2c85cc, stop: 1 #1D80B5)"
                        ";\n"
"border:0;\n"
"border-radius:3px;\n"
"color:#ffffff;\n"
"font-size:12px;\n"
"font-weight:normal;\n"
"height: 26px;\n"
"padding-left:25px;\n"
"padding-right:25px;\n"
"padding-top:5px;\n"
"padding-bottom:5px;\n"
"margin-right: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #4ca5dc, stop: .1 #4ca5dc, stop: .95 #4ca5dc, stop: 1 #1D80B5);\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"border:none;\n"
"outline:none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border:1px solid #333;\n"
"}\n"
"\n"
"QComboBox { /* Dropdown Menus */\n"
"border:1px solid #82C3E6;\n"
"padding: 3px 5px 3px 5px;\n"
"background:#fcfcfc;\n"
"min-height:25px;\n"
"color:#818181;\n"
"}\n"
"\n"
"QComboBox:checked {\n"
"background:#f2f2f2;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"background: #183862;\n"
"color:#616161;\n"
"border:0px solid transparent;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"width:25px;\n"
"border:0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"border-image: url(':/im"
                        "ages/light/drkblue_downArrow') 0 0 0 0 stretch stretch;\n"
"}\n"
"\n"
"QComboBox QListView {\n"
"background:#fff;\n"
"border:1px solid #333;\n"
"padding-right:1px;\n"
"padding-left:1px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item { margin:4px; }\n"
"\n"
"QComboBox::item {\n"
"color:#818181;\n"
"}\n"
"\n"
"QComboBox::item:alternate {\n"
"background:#fff;\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"border:0px solid transparent;\n"
"background:#f2f2f2;\n"
"}\n"
"\n"
"QComboBox::indicator {\n"
"background-color:transparent;\n"
"selection-background-color:transparent;\n"
"color:transparent;\n"
"selection-color:transparent;\n"
"}\n"
"\n"
"QAbstractSpinBox {\n"
"border:1px solid #82C3E6;\n"
"padding: 3px 5px 3px 5px;\n"
"background:#fcfcfc;\n"
"min-height:25px;\n"
"color:#818181;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-button {\n"
"subcontrol-origin: border;\n"
"subcontrol-position: top right;\n"
"width:21px;\n"
"background:#fcfcfc;\n"
"border-left:0px;\n"
"border-right:1px solid #82C3E6;\n"
"border-top:1px solid "
                        "#82C3E6;\n"
"border-bottom:0px;\n"
"padding-right:1px;\n"
"padding-left:5px;\n"
"padding-top:2px;\n"
"}\n"
"\n"
"QAbstractSpinBox::up-arrow {\n"
"image:url(':/images/light/drkblue_upArrow_small');\n"
"}\n"
"\n"
"QAbstractSpinBox::down-button {\n"
"subcontrol-origin: border;\n"
"subcontrol-position: bottom right;\n"
"width:21px;\n"
"background:#fcfcfc;\n"
"border-top:0px;\n"
"border-left:0px;\n"
"border-right:1px solid #82C3E6;\n"
"border-bottom:1px solid #82C3E6;\n"
"padding-right:1px;\n"
"padding-left:5px;\n"
"padding-bottom:2px;\n"
"}\n"
"\n"
"QAbstractSpinBox::down-arrow {\n"
"image:url(':/images/light/drkblue_downArrow_small');\n"
"}\n"
"\n"
"QCheckBox {\n"
"spacing: 5px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"width: 16px;\n"
"height: 16px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image:url(':/images/light/unchecked');\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image:url(':/images/light/unchecked');\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image:url(':/images"
                        "/light/checked');\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image:url(':/images/light/checked');\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image:url(':/images/light/checked');\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image:url(':/images/light/unchecked');\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image:url(':/images/light/unchecked');\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image:url(':/images/light/checked');\n"
"}\n"
"\n"
"/*******************************************************/\n"
"\n"
"QHeaderView { /* Table Header */\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QHeaderView::section { /* Table Header Sections */\n"
"qproperty-alignment:center;\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 0.25, stop: 0 #1070B0, stop: 1 #183862);\n"
"color:#fff;\n"
"min-height:25px;\n"
"font-weight:bold;\n"
"font-size:14px;\n"
"outline:0;\n"
"border:0px solid #fff;\n"
"border-right:1px solid #fff;\n"
"padding-left:5px;\n"
""
                        "padding-right:5px;\n"
"padding-top:2px;\n"
"padding-bottom:2px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"border-right: 0px solid #d7d7d7;\n"
"}\n"
"\n"
".QScrollArea {\n"
"background:transparent;\n"
"border:0px;\n"
"}\n"
"\n"
".QTableView { /* Table - has to be selected as a class otherwise it throws off QCalendarWidget */\n"
"background:transparent;\n"
"border:0px solid #fff;\n"
"}\n"
"\n"
"QTableView::item { /* Table Item */\n"
"background-color:#fcfcfc;\n"
"font-size:12px;\n"
"}\n"
"\n"
"QTableView::item:selected { /* Table Item Selected */\n"
"background-color:#f0f0f0;\n"
"color:#333;\n"
"}\n"
"\n"
"QScrollBar { /* Scroll Bar */\n"
"\n"
"}\n"
"\n"
"QScrollBar:vertical { /* Vertical Scroll Bar Attributes */\n"
"border:0;\n"
"background:#ffffff;\n"
"width:18px;\n"
"margin: 18px 0px 18px 0px;\n"
"}\n"
"\n"
"QScrollBar:horizontal { /* Horizontal Scroll Bar Attributes */\n"
"border:0;\n"
"background:#ffffff;\n"
"height:18px;\n"
"margin: 0px 18px 0px 18px;\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical { "
                        "/* Scroll Bar Slider - vertical */\n"
"background:#e0e0e0;\n"
"min-height:10px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal { /* Scroll Bar Slider - horizontal */\n"
"background:#e0e0e0;\n"
"min-width:10px;\n"
"}\n"
"\n"
"QScrollBar::add-page, QScrollBar::sub-page { /* Scroll Bar Background */\n"
"background:#F8F6F6;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical, QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal { /* Define Arrow Button Dimensions */\n"
"background-color:#F8F6F6;\n"
"border: 1px solid #f2f0f0;\n"
"width:16px;\n"
"height:16px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed, QScrollBar::sub-line:vertical:pressed, QScrollBar::add-line:horizontal:pressed, QScrollBar::sub-line:horizontal:pressed {\n"
"background-color:#e0e0e0;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical { /* Vertical - top button position */\n"
"subcontrol-position:top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical { /* Vertical - bottom button posit"
                        "ion */\n"
"subcontrol-position:bottom;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal { /* Vertical - left button position */\n"
"subcontrol-position:left;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal { /* Vertical - right button position */\n"
"subcontrol-position:right;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar:up-arrow, QScrollBar:down-arrow, QScrollBar:left-arrow, QScrollBar:right-arrow { /* Arrows Icon */\n"
"width:10px;\n"
"height:10px;\n"
"}\n"
"\n"
"QScrollBar:up-arrow {\n"
"background-image: url(':/images/light/drkblue_upArrow_small');\n"
"}\n"
"\n"
"QScrollBar:down-arrow {\n"
"background-image: url(':/images/light/drkblue_downArrow_small');\n"
"}\n"
"\n"
"QScrollBar:left-arrow {\n"
"background-image: url(':/images/light/drkblue_leftArrow_small');\n"
"}\n"
"\n"
"QScrollBar:right-arrow {\n"
"background-image: url(':/images/light/drkblue_rightArrow_small');\n"
"}\n"
"\n"
"\n"
"/************************************************"
                        "*******/\n"
"\n"
"/* DIALOG BOXES */\n"
"\n"
"QDialog .QTabWidget {\n"
"border-bottom:1px solid #333;\n"
"}\n"
"\n"
"QDialog .QTabWidget::pane {\n"
"border: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab {\n"
"background-color:#f2f0f0;\n"
"color:#333;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"padding-top:5px;\n"
"padding-bottom:5px;\n"
"border-top: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab:first {\n"
"border-left: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab:last {\n"
"border-right: 1px solid #d7d7d7;\n"
"}\n"
"\n"
"QDialog .QTabWidget QTabBar::tab:selected, QDialog .QTabWidget QTabBar::tab:hover {\n"
"background-color:#ffffff;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget {\n"
"background-color:#fff;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget QAbstractSpinBox {\n"
"min-height:15px;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget QAbstractSpinBox::down-button {\n"
"width:15px;\n"
"}\n"
"\n"
"QDialog .QTabWidg"
                        "et .QWidget QAbstractSpinBox::up-button {\n"
"width:15px;\n"
"}\n"
"\n"
"QDialog .QTabWidget .QWidget QComboBox {\n"
"min-height:15px;\n"
"}\n"
"\n"
"QDialog QWidget { /* Remove Annoying Focus Rectangle */\n"
"outline: 0;\n"
"}\n"
"\n"
"/*******************************************************/\n"
"/* FILE MENU */\n"
"\n"
"/* Dialog: Open URI */\n"
"QDialog#OpenURIDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QLabel#label { /* URI Label */\n"
"font-weight:bold;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QPushButton#selectFileButton { /* ... Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QPushButton#selectFileButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240,"
                        " 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QPushButton#selectFileButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"/* Dialog: Sign / Verify Message */\n"
"QDialog#SignVerifyMessageDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#addressBookButton_SM { /* Address Book Button */\n"
"background-color:transparent;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPlainTextEdit { /* Message Signing Text */\n"
"border:1px solid #82C3E6;\n"
"background-color:#fff;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#pasteButton_SM { /* Paste Button */\n"
"/* qproperty-icon: url(\":/icons/light/drkblue_editpaste\"); */\n"
"background-color:transparent;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QLineEdit:!focus { /* Font Hack */\n"
"font-size:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushBu"
                        "tton#copySignatureButton_SM { /* Copy Button */\n"
"/* qproperty-icon: url(\":/icons/light/drkblue_editcopy\"); */\n"
"background-color:transparent;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_SM { /* Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_SM:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_SM:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#addressBookButton_VM "
                        "{ /* Verify Message - Address Book Button */\n"
"background-color:transparent;\n"
"border:0;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_VM { /* Verify Message - Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_VM:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_VM:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"/* Dialog: Send and Receive */\n"
"QWidget#AddressBookPage {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
""
                        "QWidget#AddressBookPage QPushButton#newAddress { /* New Address Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#newAddress:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#newAddress:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#copyAddress { /* Copy Address Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padd"
                        "ing-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#copyAddress:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#copyAddress:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#deleteAddress { /* Delete Address Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#deleteAddress:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#33"
                        "3;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#deleteAddress:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QTableView { /* Address Listing */\n"
"font-size:12px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QHeaderView::section { /* Min width for Windows fix */\n"
"min-width:260px;\n"
"}\n"
"\n"
"/* SETTINGS MENU */\n"
"\n"
"/* Encrypt Wallet and Change Passphrase Dialog */\n"
"QDialog#AskPassphraseDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#AskPassphraseDialog QLabel#passLabel1, QDialog#AskPassphraseDialog QLabel#passLabel2, QDialog#AskPassphraseDialog QLabel#passLabel3 {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:170px;\n"
"min-height:33px; /* base width of 25px for QLineEdit, plus padding and border */\n"
"}\n"
"\n"
"/* Options Dialog */\n"
"QDialog#OptionsDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QValueComboBox, QDialog#OptionsDialog QSpinBox {\n"
"margin-top:5px;\n"
"margin-bottom:5px;\n"
"}\n"
""
                        "\n"
"QDialog#OptionsDialog QValidatedLineEdit, QDialog#OptionsDialog QValidatedLineEdit:disabled, QDialog#OptionsDialog QLineEdit, QDialog#OptionsDialog QLineEdit:disabled {\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"min-height:20px;\n"
"margin-top:0px;\n"
"margin-bottom:0px;\n"
"padding-top:1px;\n"
"padding-bottom:1px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog > QLabel {\n"
"qproperty-alignment: 'AlignVCenter';\n"
"min-height:20px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QWidget#tabDisplay QValueComboBox {\n"
"margin-top:0px;\n"
"margin-bottom:0px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QLabel#label_3 { /* Translations Missing? Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignCenter';\n"
"color:#818181;\n"
"padding-bottom:8px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QCheckBox {\n"
"min-height:20px;\n"
"}\n"
"\n"
"QDialog#OptionsDialog QCheckBox#displayAddresses {\n"
"min-height:33px;\n"
"\n"
"}\n"
"\n"
"/* TOOLS MENU */\n"
"\n"
"QDialog#RPCConsole { /* RPC Console Dialog Box */\n"
"background-color:#F8"
                        "F6F6;\n"
"}\n"
"\n"
"QDialog#RPCConsole QWidget#tab_info QLabel#label_11, QDialog#RPCConsole QWidget#tab_info QLabel#label_10 { /* Margin between Network and Block Chain headers */\n"
"qproperty-alignment: 'AlignBottom';\n"
"min-height:25px;\n"
"min-width:180px;\n"
"}\n"
"\n"
"QDialog#RPCConsole QWidget#tab_peers  QLabel#peerHeading { /* Peers Info Header */\n"
"color:#183862;\n"
"}\n"
"\n"
"QDialog#RPCConsole QPushButton#openDebugLogfileButton {\n"
"max-width:60px;\n"
"}\n"
"\n"
"QDialog#RPCConsole QTextEdit#messagesWidget { /* Console Messages Window */\n"
"border:0;\n"
"}\n"
"\n"
"QDialog#RPCConsole QLineEdit#lineEdit { /* Console Input */\n"
"margin-right:5px;\n"
"}\n"
"\n"
"QDialog#RPCConsole QPushButton#clearButton { /* Console Clear Button */\n"
"background-color:transparent;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#RPCConsole .QGroupBox #line { /* Network In Line */\n"
"background-color:#00ff00;\n"
"}\n"
"\n"
"QDialog#RPCConsole .QGroupBox #line_2 { /* Network Out Line */\n"
""
                        "background:#ff0000;\n"
"}\n"
"\n"
"/* HELP MENU */\n"
"\n"
"/* Command Line Options Dialog */\n"
"QDialog#HelpMessageDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#HelpMessageDialog QScrollArea * {\n"
"background-color:#ffffff;\n"
"}\n"
"\n"
"QDialog#HelpMessageDialog QScrollBar:vertical, QDialog#HelpMessageDialog QScrollBar:horizontal {\n"
"border:0;\n"
"}\n"
"\n"
"/* About Proton Dialog */\n"
"QDialog#AboutDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#AboutDialog QLabel#label, QDialog#AboutDialog QLabel#copyrightLabel, QDialog#AboutDialog QLabel#label_2 { /* About Proton Contents */\n"
"margin-left:10px;\n"
"}\n"
"\n"
"QDialog#AboutDialog QLabel#label_2 { /* Margin for About Proton text */\n"
"margin-right:10px;\n"
"}\n"
"\n"
"/* Edit Address Dialog */\n"
"QDialog#EditAddressDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#EditAddressDialog QLabel {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-height:27px;\n"
"font-weight:normal;\n"
"padding-right:"
                        "5px;\n"
"}\n"
"\n"
"/* OVERVIEW SCREEN */\n"
"\n"
"QWidget .QFrame#frame { /* Wallet Balance */\n"
"min-width:490px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame > .QLabel {\n"
"min-width:190px;\n"
"font-weight:normal;\n"
"min-height:30px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#label_5 { /* Wallet Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:transparent;\n"
"color:#f4f4f5;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWalletStatus { /* Wallet Sync Status */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"margin-left:3px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelSpendable { /* Spendable Header */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:18px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchonly { /* Watch-only Header */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidge"
                        "t .QFrame#frame .QLabel#labelBalanceText { /* Available Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#183862;\n"
"color:#ffffff;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"font-size:14px;\n"
"font-weight: bold;\n"
"min-height:35px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelBalance { /* Available Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:16px;\n"
"color:#183862;\n"
"margin-left:0px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchAvailable { /* Watch-only Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelPendingText { /* Pending Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"font-size:14px;\n"
"font-Weight:bold;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget ."
                        "QFrame#frame .QLabel#labelUnconfirmed { /* Pending Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"margin-left:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchPending { /* Watch-only Pending Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelImmatureText { /* Immature Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelImmature { /* Immature Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"margin-left:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchImmature { /* Watch-only Immature Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:1"
                        "2px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelTotalText { /* Total Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelTotal { /* Total Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"margin-left:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchTotal { /* Watch-only Total Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
"margin-left:16px;\n"
"}\n"
"\n"
"/* PRIVATESEND WIDGET */\n"
"\n"
"QWidget .QFrame#framePrivateSend { /* PrivateSend Widget */\n"
"background-color:transparent;\n"
"max-width: 451px;\n"
"min-width: 451px;\n"
"max-height: 350px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QWidget#layoutWidgetPrivateSendHeader { /* PrivateSend Header */\n"
"max-wid"
                        "th: 421px;\n"
"min-width: 421px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QLabel#labelPrivateSendHeader { /* PrivateSend Header */\n"
"qproperty-alignment: 'AlignVCenter | AlignCenter';\n"
"max-width: 421px;\n"
"min-width: 421px;\n"
"background-color:#183862;\n"
"color:#fff;\n"
"margin-right: 5px;\n"
"padding-right: 5px;\n"
"font-weight:bold;\n"
"font-size:14px;\n"
"min-height:35px;\n"
"max-height:35px;\n"
"}\n"
"/******************************************************************/\n"
"QWidget .QFrame#framePrivateSend .QLabel#labelPrivateSendSyncStatus { /* PrivateSend Sync Status */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"margin-left:2px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget {\n"
"max-width: 451px;\n"
"max-height: 175px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget > .QLabel {\n"
"min-width:175px;\n"
"font-weight:normal;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #pr"
                        "ivateSendFormLayoutWidget .QLabel#labelPrivateSendEnabledText { /* PrivateSend Enabled Status Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelPrivateSendEnabled { /* PrivateSend Enabled Status */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelCompletitionText { /* PrivateSend Completion Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QProgressBar#privateSendProgress { /* PrivateSend Completion */\n"
"border: 1px solid #818181;\n"
"border-radius: 1px;\n"
"margin-right:43px;\n"
"text-align: right;\n"
"color:#818181;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFo"
                        "rmLayoutWidget .QProgressBar#privateSendProgress::chunk {\n"
"background-color: #183862;\n"
"width:1px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAnonymizedText { /* PrivateSend Balance Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAnonymized { /* PrivateSend Balance */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAmountAndRoundsText { /* PrivateSend Amount and Rounds Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelAmountRounds { /* PrivateSend Amount and Rounds */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend "
                        "#privateSendFormLayoutWidget .QLabel#labelSubmittedDenomText { /* PrivateSend Submitted Denom Label */\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"min-width:160px;\n"
"background-color:#F8F6F6;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelSubmittedDenom { /* PrivateSend Submitted Denom */\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QWidget#layoutWidgetLastMessageAndButtons {\n"
"max-width: 451px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QLabel#labelPrivateSendLastMessage { /* PrivateSend Status Notifications */\n"
"qproperty-alignment: 'AlignVCenter | AlignCenter';\n"
"min-width: 288px;\n"
"min-height: 43px;\n"
"font-size:11px;\n"
"color:#818181;\n"
"}\n"
"\n"
"/* PRIVATESEND BUTTONS */\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton { /* PrivateSend Buttons - General Attributes */\n"
"border:0px solid #ffffff;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend QPushButton:focus {\n"
"b"
                        "order:none;\n"
"outline:none;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#togglePrivateSend { /* Start PrivateSend Mixing */\n"
"min-height: 40px;\n"
"font-size:15px;\n"
"font-weight:normal;\n"
"color:#ffffff;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"padding-top:5px;\n"
"padding-bottom:6px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#togglePrivateSend:hover {\n"
"\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendAuto { /* Try Mix Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"min-height:25px;\n"
"font-size:9px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendAuto:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 2"
                        "55), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendAuto:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendReset { /* Reset Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"min-height:25px;\n"
"font-size:9px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendReset:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendReset:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendInfo { /* Info Button */\n"
""
                        "background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"min-height:25px;\n"
"font-size:9px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendInfo:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendInfo:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"/* RECENT TRANSACTIONS */\n"
"\n"
"QWidget .QFrame#frame_2 { /* Transactions Widget */\n"
"min-width:410px;\n"
"margin-right:20px;\n"
"margin-left:0;\n"
"margin-top:15px;\n"
"background-repeat:none;\n"
"}\n"
"\n"
"QWidget .QFrame#frame_2 .QLabel#label_4 { /* Recent Transactions Label */\n"
"min-width:180px;\n"
"color:#999;\n"
"margin-left:0px"
                        ";\n"
"margin-top:30px;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"font-weight:normal;\n"
"font-size:18px;\n"
"font-weight:bold;\n"
"min-height:24px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame_2 .QLabel#labelTransactionsStatus { /* Recent Transactions Sync Status */\n"
"qproperty-alignment: 'AlignBottom | AlignRight';\n"
"min-width:93px;\n"
"margin-top:83px;\n"
"margin-left:16px;\n"
"margin-right:5px;\n"
"min-height:16px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame_2 QListView { /* SUQA Transaction List */\n"
"font-weight:normal;\n"
"font-size:14px;\n"
"max-width:500px;\n"
"margin-top:12px;\n"
"margin-left:0px; /* CSS Voodoo - set to -66px to hide default transaction icons */\n"
"}\n"
"\n"
"/* SEND DIALOG */\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl { /* Coin Control Section */\n"
"\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl > .QLabel { /* Default Font Color and  Size */\n"
"font-weight:normal;\n"
"color: #999;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QPushB"
                        "utton#pushButtonCoinControl { /* Coin Control Inputs Button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QLabel#labelCoinControlFeatures { /* Coin Control Header */\n"
"color:#999;\n"
"font-weight:normal;\n"
"font-size:14px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QWidget#widgetCoinControl { /* Coin Control Inputs */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QWidget#widgetCoinControl > .QLabel { /* Coin Control Inputs Labels */\n"
"padding:2px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QCheckBox#checkBoxCoinControlChange { /* Custom Change Label */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QValidatedLineEdit#lineEditCoinControlChange { /* Custom Change Address */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QLabel#labelCoinControlChangeLabel { /* Custom Change Address Validation Label */\n"
"font-weight:norma"
                        "l;\n"
"qproperty-margin:-6;\n"
"margin-right:112px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QScrollArea#scrollArea .QWidget#scrollAreaWidgetContents { /* Send To Widget */\n"
"background:transparent;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#sendButton { /* Send Button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton { /* Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton:pressed {\n"
"bo"
                        "rder:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#addButton { /* Add Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#addButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#addButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QCheckBox#checkUsePrivateSend { /* PrivateSend Checkbox */\n"
"color:#616161;\n"
"font-weight:bold;\n"
"background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5, stop:0 rgba(248, 246, 246, 128), stop: 1 rgba(0, 0, 0, 0));\n"
"border-ra"
                        "dius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:18px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QCheckBox#checkUseInstantSend { /* InstantSend Checkbox */\n"
"color:#616161;\n"
"font-weight:bold;\n"
"background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5, stop:0 rgba(248, 246, 246, 128), stop: 1 rgba(0, 0, 0, 0));\n"
"border-radius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:18px;\n"
"margin-left:10px;\n"
"margin-right:20px;\n"
"}\n"
"\n"
"/* This QLabel uses name = \"label\" which conflicts with Address Book -> New Address */\n"
"/* To maximize backwards compatibility this formatting has been removed */\n"
"\n"
"QDialog#SendCoinsDialog QLabel#label {\n"
"/*margin-left:20px;\n"
"margin-right:-2px;\n"
"padding-right:-2px;\n"
"color:#616161;\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"border-radius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:20px;*/\n"
"min-height:27px;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog QLabel#labelBalance {\n"
"margin-left:0px;\n"
"padding-left:0px;\n"
"color:#33333"
                        "3;\n"
"/* font-weight:bold;\n"
"border-radius:5px;\n"
"padding-top:20px;\n"
"padding-bottom:20px; */\n"
"min-height:27px;\n"
"}\n"
"\n"
"#checkboxSubtractFeeFromAmount {\n"
"padding-left:10px;\n"
"}\n"
"\n"
"\n"
"/* SEND COINS ENTRY */\n"
"\n"
"QStackedWidget#SendCoinsEntry .QFrame#SendCoins > .QLabel { /* Send Coin Entry Labels */\n"
"background-color:#F8F6F6;\n"
"min-width:102px;\n"
"font-weight:normal;\n"
"/*font-size:11px;*/\n"
"color:#333;\n"
"min-height:25px;\n"
"margin-right:5px;\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QFrame#SendCoins .QLabel#amountLabel {\n"
"color: #fff;\n"
"background-color:#999;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QValidatedLineEdit#payTo { /* Pay To Input Field */\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton { /* General Settings for Pay To Icons */\n"
"background-color:transparent;\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"border: 0;\n"
"outline: 0;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#addressBookButt"
                        "on { /* Address Book Button */\n"
"padding-left:10px;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#addressBookButton {\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#pasteButton {\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#deleteButton {\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QLineEdit#addAsLabel { /* Pay To Input Field */\n"
"}\n"
"\n"
"/* COIN CONTROL POPUP */\n"
"\n"
"QDialog#CoinControlDialog { /* Coin Control Dialog Window */\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlQuantityText { /* Coin Control Quantity Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlQuantity { /* Coin Control Quantity */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlBytesText { /* Coin Control Bytes Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlBytes { /* Coin Control Bytes */\n"
""
                        "}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAmountText { /* Coin Control Amount Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAmount { /* Coin Control Amount */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlPriorityText { /* Coin Control Priority Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlPriority { /* Coin Control Priority */\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlFeeText { /* Coin Control Fee Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlFee { /* Coin Control Fee */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlLowOutputText { /* Coin Control Low Output Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlLowOutput { /* Coin Control Low Output */\n"
""
                        "}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAfterFeeText { /* Coin Control After Fee Label */\n"
"min-height:30px;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlAfterFee { /* Coin Control After Fee */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlChangeText { /* Coin Control Change Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlChange { /* Coin Control Change */\n"
"\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QFrame#frame .QPushButton#pushButtonSelectAll { /* (un)select all button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QFrame#frame .QPushButton#pushButtonToggleLock { /* Toggle lock state button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QDialogButtonBox#buttonBox QPushButton { /* Coin Control 'OK' button */\n"
"}\n"
"\n"
"Q"
                        "Dialog#CoinControlDialog .QFrame#frame .QRadioButton#radioTreeMode { /* Coin Control Tree Mode Selector */\n"
"color:#818181;\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QFrame#frame .QRadioButton#radioListMode { /* Coin Control List Mode Selector */\n"
"color:#818181;\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog QHeaderView::section:first { /* Bug Fix: the number \"1\" displays in this table for some reason... */\n"
"color:transparent;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget { /* Coin Control Widget Container */\n"
"outline:0;\n"
"background-color:#ffffff;\n"
"border:0px solid #818181;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::item {\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::item:selected { /* Coin Control Item (selected) */\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::it"
                        "em:checked { /* Coin Control Item (checked) */\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::branch:selected { /* Coin Control Branch Icon */\n"
"background-image: url(':/images/light/drkblue_qtreeview_selected');\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::branch:checked { /* Coin Control Branch Icon */\n"
"background-image: url(':/images/light/drkblue_qtreeview_selected');\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::seperator {\n"
"\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::indicator { /* Coin Control Widget Checkbox */\n"
"\n"
"}\n"
"\n"
"/* RECEIVE COINS */\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 .QLabel#la"
                        "bel_2 { /* Label Label */\n"
"background-color:#F8F6F6;\n"
"border: 1px solid #fff;\n"
"min-width:102px;\n"
"color:#333;\n"
"/*font-weight:bold;\n"
"font-size:11px;*/\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 .QLabel#label { /* Amount Label */\n"
"background-color:#999;\n"
"border: 1px solid #fff;\n"
"min-width:102px;\n"
"color:#ffffff;\n"
"/*font-weight:bold;\n"
"font-size:11px;*/\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 .QLabel#label_3 { /* Message Label */\n"
"background-color:#F8F6F6;\n"
"border: 1px solid #fff;\n"
"min-width:102px;\n"
"color:#333;\n"
"/*font-weight:bold;\n"
"font-size:11px;*/\n"
"padding-right:5px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 QPushButton#clearButton { /* Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#6161"
                        "61;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 QPushButton#clearButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame2 QPushButton#clearButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#showRequestButton { /* Show Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#showRequestButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240"
                        ", 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#showRequestButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#removeRequestButton { /* Remove Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#removeRequestButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#removeRequestButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#R"
                        "eceiveCoinsDialog .QFrame#frame .QLabel#label_6 { /* Requested Payments History Label */\n"
"color:#999;\n"
"font-weight:normal;\n"
"font-size:14px;\n"
"}\n"
"\n"
"/* RECEIVE COINS DIALOG */\n"
"\n"
"QDialog#ReceiveRequestDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#ReceiveRequestDialog QTextEdit { /* Contents of Receive Coin Dialog */\n"
"border:1px solid #d7d7d7;\n"
"}\n"
"\n"
"/* TRANSACTIONS PAGE */\n"
"\n"
"TransactionView QLineEdit { /* Filters */\n"
"margin-bottom:2px;\n"
"margin-right:1px;\n"
"min-width:111px;\n"
"text-align:center;\n"
"}\n"
"\n"
"TransactionView QLineEdit#addressWidget { /* Address Filter */\n"
"margin-bottom:2px;\n"
"margin-right:1px;\n"
"min-width:405px;\n"
"text-align:center;\n"
"}\n"
"\n"
"TransactionView QLineEdit#amountWidget { /* Amount Filter */\n"
"margin-bottom:2px;\n"
"margin-right:1px;\n"
"max-width:100px;\n"
"text-align:center;\n"
"}\n"
"\n"
"TransactionView QComboBox {\n"
"margin-bottom:1px;\n"
"margin-right:1px;\n"
"}\n"
"\n"
"QLabel#transactionSumLabel"
                        " { /* Example of setObjectName for widgets without name */\n"
"color:#333333;\n"
"font-weight:bold;\n"
"}\n"
" \n"
"QLabel#transactionSum { /* Example of setObjectName for widgets without name */\n"
"color:#333333;\n"
"}\n"
"\n"
"/* TRANSACTION DETAIL DIALOG */\n"
"\n"
"QDialog#TransactionDescDialog {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"QDialog#TransactionDescDialog QTextEdit { /* Contents of Receive Coin Dialog */\n"
"border:1px solid #d7d7d7;\n"
"\n"
"}\n"
"\n"
"\n"
""));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setGeometry(QRect(0, 0, 800, 20));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        verticalLayout_6 = new QVBoxLayout(OverviewPage);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, 12, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QPushButton(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setEnabled(false);
        labelWalletStatus->setMaximumSize(QSize(30, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/warning"), QSize(), QIcon::Disabled, QIcon::Off);
        labelWalletStatus->setIcon(icon);
        labelWalletStatus->setIconSize(QSize(24, 24));
        labelWalletStatus->setFlat(true);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelUnconfirmed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelWatchImmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy1);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelImmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelWatchPending->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font1);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelWatchTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelBalance->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelWatchAvailable->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QPushButton(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setEnabled(false);
        labelTransactionsStatus->setMaximumSize(QSize(30, 16777215));
        labelTransactionsStatus->setIcon(icon);
        labelTransactionsStatus->setIconSize(QSize(24, 24));
        labelTransactionsStatus->setFlat(true);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout);

        label = new QLabel(OverviewPage);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_6->addWidget(label);

        hodlTable = new QTableWidget(OverviewPage);
        if (hodlTable->columnCount() < 9)
            hodlTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        hodlTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        hodlTable->setObjectName(QStringLiteral("hodlTable"));
        hodlTable->setEnabled(true);
        hodlTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hodlTable->setAlternatingRowColors(true);
        hodlTable->horizontalHeader()->setDefaultSectionSize(85);
        hodlTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(hodlTable);

        frame_3 = new QFrame(OverviewPage);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(12);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 6, 1, 1);

        labelMaturedText = new QLabel(frame_3);
        labelMaturedText->setObjectName(QStringLiteral("labelMaturedText"));

        gridLayout_2->addWidget(labelMaturedText, 0, 4, 1, 1);

        labelMatured = new QLabel(frame_3);
        labelMatured->setObjectName(QStringLiteral("labelMatured"));
        labelMatured->setFont(font);
        labelMatured->setCursor(QCursor(Qt::IBeamCursor));
        labelMatured->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelMatured->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelMatured->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labelMatured, 0, 5, 1, 1);

        labellockedtext = new QLabel(frame_3);
        labellockedtext->setObjectName(QStringLiteral("labellockedtext"));

        gridLayout_2->addWidget(labellockedtext, 0, 0, 1, 1);

        labelaccruedtext = new QLabel(frame_3);
        labelaccruedtext->setObjectName(QStringLiteral("labelaccruedtext"));

        gridLayout_2->addWidget(labelaccruedtext, 0, 2, 1, 1);

        labellocked = new QLabel(frame_3);
        labellocked->setObjectName(QStringLiteral("labellocked"));
        labellocked->setFont(font);
        labellocked->setCursor(QCursor(Qt::IBeamCursor));
        labellocked->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labellocked->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labellocked->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labellocked, 0, 1, 1, 1);

        labelaccrued = new QLabel(frame_3);
        labelaccrued->setObjectName(QStringLiteral("labelaccrued"));
        labelaccrued->setFont(font);
        labelaccrued->setCursor(QCursor(Qt::IBeamCursor));
        labelaccrued->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 SUQA"));
        labelaccrued->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelaccrued->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(labelaccrued, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);


        verticalLayout_6->addWidget(frame_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        label_5->setText(QApplication::translate("OverviewPage", "Balances", 0));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the SUQA network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelWalletStatus->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", 0));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", 0));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", 0));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", 0));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the SUQA network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelTransactionsStatus->setText(QString());
        label->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-weight:600;\">Interests</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = hodlTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("OverviewPage", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem1 = hodlTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("OverviewPage", "Principal", 0));
        QTableWidgetItem *___qtablewidgetitem2 = hodlTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("OverviewPage", "Accrued Interest", 0));
        QTableWidgetItem *___qtablewidgetitem3 = hodlTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("OverviewPage", "Accrued Value", 0));
        QTableWidgetItem *___qtablewidgetitem4 = hodlTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("OverviewPage", "On Maturation", 0));
        QTableWidgetItem *___qtablewidgetitem5 = hodlTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("OverviewPage", "Term (Days)", 0));
        QTableWidgetItem *___qtablewidgetitem6 = hodlTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("OverviewPage", "Deposit Block", 0));
        QTableWidgetItem *___qtablewidgetitem7 = hodlTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("OverviewPage", "Maturation Block", 0));
        QTableWidgetItem *___qtablewidgetitem8 = hodlTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("OverviewPage", "Estimated Date", 0));
        labelMaturedText->setText(QApplication::translate("OverviewPage", "Matured:", 0));
#ifndef QT_NO_TOOLTIP
        labelMatured->setToolTip(QApplication::translate("OverviewPage", "Your total balance of matured deposits that are currently not earning any interest.", 0));
#endif // QT_NO_TOOLTIP
        labellockedtext->setText(QApplication::translate("OverviewPage", "Locked:", 0));
        labelaccruedtext->setText(QApplication::translate("OverviewPage", "Accrued:", 0));
#ifndef QT_NO_TOOLTIP
        labellocked->setToolTip(QApplication::translate("OverviewPage", "Your total locked/invested balance in term deposits.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelaccrued->setToolTip(QApplication::translate("OverviewPage", "Your total balance of accrued interests, that have not matured yet.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
