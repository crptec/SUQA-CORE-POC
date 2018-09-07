/********************************************************************************
** Form generated from reading UI file 'sendcoinsentry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSENTRY_H
#define UI_SENDCOINSENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendCoinsEntry
{
public:
    QFrame *SendCoins;
    QGridLayout *gridLayout;
    QFrame *line;
    QLabel *payToLabel;
    QLineEdit *addAsLabel;
    QLabel *amountLabel;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;
    QLabel *labellLabel;
    QHBoxLayout *horizontalLayoutAmount;
    BitcoinAmountField *payAmount;
    QLabel *locklabel;
    QLineEdit *lockperiod;
    QComboBox *locklength;
    QCheckBox *checkboxSubtractFeeFromAmount;
    QLabel *messageLabel;
    QLabel *messageTextLabel;
    QFrame *SendCoins_UnauthenticatedPaymentRequest;
    QGridLayout *gridLayout_is;
    QLabel *payToLabel_is;
    QHBoxLayout *payToLayout_is;
    QLabel *payTo_is;
    QToolButton *deleteButton_is;
    QLabel *memoLabel_is;
    QLabel *memoTextLabel_is;
    QLabel *amountLabel_is;
    BitcoinAmountField *payAmount_is;
    QFrame *SendCoins_AuthenticatedPaymentRequest;
    QGridLayout *gridLayout_s;
    QLabel *payToLabel_s;
    QHBoxLayout *payToLayout_s;
    QLabel *payTo_s;
    QToolButton *deleteButton_s;
    QLabel *memoLabel_s;
    QLabel *memoTextLabel_s;
    QLabel *amountLabel_s;
    BitcoinAmountField *payAmount_s;

    void setupUi(QStackedWidget *SendCoinsEntry)
    {
        if (SendCoinsEntry->objectName().isEmpty())
            SendCoinsEntry->setObjectName(QStringLiteral("SendCoinsEntry"));
        SendCoinsEntry->resize(729, 175);
        SendCoinsEntry->setFocusPolicy(Qt::TabFocus);
        SendCoinsEntry->setAutoFillBackground(false);
        SendCoinsEntry->setStyleSheet(QLatin1String("\n"
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
"font-weight:bold;\n"
"}\n"
"\n"
"QMessageBox {\n"
"background-color:#F8F6F6;\n"
"}\n"
"\n"
"/**************************"
                        "*****************************/\n"
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
"\n"
"background-color:#183862;\n"
"\n"
"border:1;\n"
"\n"
"border-radius:3px;\n"
"\n"
"color:#ffffff;\n"
"\n"
"font-size:12px;\n"
"\n"
"font-weight:bold;\n"
"\n"
"height: 26px;\n"
"\n"
"padding-left:25px;\n"
"\n"
"padding-right:25px;\n"
"\n"
"padding-t"
                        "op:5px;\n"
"\n"
"padding-bottom:5px;\n"
"\n"
"margin-right: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:hover { /* Global Button Style hover */\n"
"\n"
"background-color:#f57026;\n"
"\n"
"border:1;\n"
"\n"
"border-radius:3px;\n"
"\n"
"color:#ffffff;\n"
"\n"
"font-size:12px;\n"
"\n"
"font-weight:bold;\n"
"\n"
"height: 26px;\n"
"\n"
"padding-left:25px;\n"
"\n"
"padding-right:25px;\n"
"\n"
"padding-top:5px;\n"
"\n"
"padding-bottom:5px;\n"
"\n"
"margin-right: 10px;\n"
"\n"
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
""
                        "}\n"
"\n"
"QComboBox::down-arrow {\n"
"border-image: url(':/images/light/drkblue_downArrow') 0 0 0 0 stretch stretch;\n"
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
"border-left:0px;"
                        "\n"
"border-right:1px solid #82C3E6;\n"
"border-top:1px solid #82C3E6;\n"
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
"\n"
"\n"
"/*******************************************************/\n"
"\n"
"QHeaderView { /* Table Header */\n"
"background-color:transparent;\n"
"}\n"
"\n"
"QHeaderView::section { /* Table"
                        " Header Sections */\n"
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
"QScrollBar:vertical { /"
                        "* Vertical Scroll Bar Attributes */\n"
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
"QScrollBar::handle:vertical { /* Scroll Bar Slider - vertical */\n"
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
"QScrollBar::add-line:vertical:pressed, QScrollBar::sub-line:vertical:pressed, QS"
                        "crollBar::add-line:horizontal:pressed, QScrollBar::sub-line:horizontal:pressed {\n"
"background-color:#e0e0e0;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical { /* Vertical - top button position */\n"
"subcontrol-position:top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical { /* Vertical - bottom button position */\n"
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
"background-image:"
                        " url(':/images/light/drkblue_downArrow_small');\n"
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
"/*******************************************************/\n"
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
"back"
                        "ground-color:#ffffff;\n"
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
"QDialog .QTabWidget .QWidget QAbstractSpinBox::up-button {\n"
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
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 25"
                        "0, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QDialog#OpenURIDialog QPushButton#selectFileButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
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
"QDialog#SignVerifyMessageD"
                        "ialog QPushButton#pasteButton_SM { /* Paste Button */\n"
"/* qproperty-icon: url(\":/icons/light/drkblue_editpaste\"); */\n"
"background-color:transparent;\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QLineEdit:!focus { /* Font Hack */\n"
"font-size:10px;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#copySignatureButton_SM { /* Copy Button */\n"
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
"background-color:qlineargradient(x1: 0, y1: "
                        "0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#clearButton_SM:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SignVerifyMessageDialog QPushButton#addressBookButton_VM { /* Verify Message - Address Book Button */\n"
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
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, sto"
                        "p: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
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
"border:1px"
                        " solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#copyAddress { /* Copy Address Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
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
"border:1px sol"
                        "id #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#AddressBookPage QPushButton#deleteAddress:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
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
""
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
"qproperty-alignment: 'AlignVCenter |"
                        " AlignCenter';\n"
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
"background-color:#F8F6F6;\n"
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
"QD"
                        "ialog#RPCConsole QPushButton#clearButton { /* Console Clear Button */\n"
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
"QDialog#AboutDialog QLabel#"
                        "label_2 { /* Margin for About Proton text */\n"
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
"padding-right:5px;\n"
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
"QWidget .QFrame#frame .QLabel"
                        "#labelSpendable { /* Spendable Header */\n"
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
"QWidget .QFrame#frame .QLabel#labelBalanceText { /* Available Balance Label */\n"
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
"font-siz"
                        "e:12px;\n"
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
"QWidget .QFrame#frame .QLabel#labelUnconfirmed { /* Pending Balance */\n"
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
"QWidget .QFrame"
                        "#frame .QLabel#labelImmature { /* Immature Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"margin-left:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#frame .QLabel#labelWatchImmature { /* Watch-only Immature Balance */\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"font-size:12px;\n"
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
"margin-left:16p"
                        "x;\n"
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
"max-width: 421px;\n"
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
"padding-rig"
                        "ht:5px;\n"
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
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelPrivateSendEnabledText { /* PrivateSend Enabled Status Label */\n"
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
"padding-ri"
                        "ght:5px;\n"
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
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QProgressBar#privateSendProgress::chunk {\n"
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
"qp"
                        "roperty-alignment: 'AlignVCenter | AlignRight';\n"
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
"QWidget .QFrame#framePrivateSend #privateSendFormLayoutWidget .QLabel#labelSubmittedDenomText { /* PrivateSend Submitted Denom Label */\n"
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
"qproperty-alignment: 'AlignVCenter | AlignCe"
                        "nter';\n"
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
"border:none;\n"
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
""
                        "border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"min-height:25px;\n"
"font-size:9px;\n"
"padding:0px;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendAuto:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
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
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, sto"
                        "p: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendReset:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget .QFrame#framePrivateSend .QPushButton#privateSendInfo { /* Info Button */\n"
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
"/* R"
                        "ECENT TRANSACTIONS */\n"
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
"margin-left:0px;\n"
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
""
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
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QPushButton#pushButtonCoinControl { /* Coin Control Inputs Button */\n"
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
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QCheckBox#checkBoxCoinControlChang"
                        "e { /* Custom Change Label */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QValidatedLineEdit#lineEditCoinControlChange { /* Custom Change Address */\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QFrame#frameCoinControl .QLabel#labelCoinControlChangeLabel { /* Custom Change Address Validation Label */\n"
"font-weight:normal;\n"
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
""
                        "}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QPushButton#clearButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
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
"QDialog#SendCoinsDialog .QPushButton#add"
                        "Button:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QDialog#SendCoinsDialog .QCheckBox#checkUsePrivateSend { /* PrivateSend Checkbox */\n"
"color:#616161;\n"
"font-weight:bold;\n"
"background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5, stop:0 rgba(248, 246, 246, 128), stop: 1 rgba(0, 0, 0, 0));\n"
"border-radius:5px;\n"
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
"/*ma"
                        "rgin-left:20px;\n"
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
"color:#333333;\n"
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
"QStackedWidget#SendCoinsEntry"
                        " .QValidatedLineEdit#payTo { /* Pay To Input Field */\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton { /* General Settings for Pay To Icons */\n"
"padding-left:5px;\n"
"padding-right:5px;\n"
"border: 0;\n"
"outline: 0;\n"
"}\n"
"\n"
"QStackedWidget#SendCoinsEntry .QToolButton#addressBookButton { /* Address Book Button */\n"
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
"QDialog#CoinControlDialog .QLabel#labe"
                        "lCoinControlQuantity { /* Coin Control Quantity */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlBytesText { /* Coin Control Bytes Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlBytes { /* Coin Control Bytes */\n"
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
"QDialog#CoinControlDialog .QLabel#labelCoinCo"
                        "ntrolFee { /* Coin Control Fee */\n"
"min-height:30px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlLowOutputText { /* Coin Control Low Output Label */\n"
"padding-left:15px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QLabel#labelCoinControlLowOutput { /* Coin Control Low Output */\n"
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
""
                        "QDialog#CoinControlDialog .QFrame#frame .QPushButton#pushButtonToggleLock { /* Toggle lock state button */\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"min-height:25px;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QDialogButtonBox#buttonBox QPushButton { /* Coin Control 'OK' button */\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .QFrame#frame .QRadioButton#radioTreeMode { /* Coin Control Tree Mode Selector */\n"
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
"QDialog#CoinCo"
                        "ntrolDialog .CoinControlTreeWidget#treeWidget::item {\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::item:selected { /* Coin Control Item (selected) */\n"
"background-color:#f7f7f7;\n"
"color:#333;\n"
"}\n"
"\n"
"QDialog#CoinControlDialog .CoinControlTreeWidget#treeWidget::item:checked { /* Coin Control Item (checked) */\n"
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
""
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
"QWidget#ReceiveCoinsDialog .QFrame#frame2 .QLabel#label_2 { /* Label Label */\n"
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
"QWi"
                        "dget#ReceiveCoinsDialog .QFrame#frame2 QPushButton#clearButton { /* Clear Button */\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebebeb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
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
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(250, 250, 250, 128), stop: .95 rgba(250, 250, 250, 255), stop: 1 #ebe"
                        "beb);\n"
"border:1px solid #d2d2d2;\n"
"color:#616161;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#showRequestButton:hover {\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
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
"background-color:qlineargradient(x1"
                        ": 0, y1: 0, x2: 0, y2: 1, stop: .01 #f6f6f6, stop: .1 rgba(240, 240, 240, 255), stop: .95 rgba(240, 240, 240, 255), stop: 1 #ebebeb);\n"
"color:#333;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame QPushButton#removeRequestButton:pressed {\n"
"border:1px solid #9e9e9e;\n"
"}\n"
"\n"
"QWidget#ReceiveCoinsDialog .QFrame#frame .QLabel#label_6 { /* Requested Payments History Label */\n"
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
"text-align:"
                        "center;\n"
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
"QLabel#transactionSumLabel { /* Example of setObjectName for widgets without name */\n"
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
        SendCoins = new QFrame();
        SendCoins->setObjectName(QStringLiteral("SendCoins"));
        SendCoins->setFrameShape(QFrame::NoFrame);
        gridLayout = new QGridLayout(SendCoins);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(-1, 8, -1, 4);
        line = new QFrame(SendCoins);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 2);

        payToLabel = new QLabel(SendCoins);
        payToLabel->setObjectName(QStringLiteral("payToLabel"));
        payToLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(payToLabel, 0, 0, 1, 1);

        addAsLabel = new QLineEdit(SendCoins);
        addAsLabel->setObjectName(QStringLiteral("addAsLabel"));

        gridLayout->addWidget(addAsLabel, 1, 1, 1, 1);

        amountLabel = new QLabel(SendCoins);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(amountLabel, 2, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QStringLiteral("payToLayout"));
        payTo = new QValidatedLineEdit(SendCoins);
        payTo->setObjectName(QStringLiteral("payTo"));

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(SendCoins);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setIconSize(QSize(22, 22));

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendCoins);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon1);
        pasteButton->setIconSize(QSize(22, 22));

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendCoins);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(22, 22));

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 0, 1, 1, 1);

        labellLabel = new QLabel(SendCoins);
        labellLabel->setObjectName(QStringLiteral("labellLabel"));
        labellLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labellLabel, 1, 0, 1, 1);

        horizontalLayoutAmount = new QHBoxLayout();
        horizontalLayoutAmount->setObjectName(QStringLiteral("horizontalLayoutAmount"));
        payAmount = new BitcoinAmountField(SendCoins);
        payAmount->setObjectName(QStringLiteral("payAmount"));

        horizontalLayoutAmount->addWidget(payAmount);

        locklabel = new QLabel(SendCoins);
        locklabel->setObjectName(QStringLiteral("locklabel"));

        horizontalLayoutAmount->addWidget(locklabel);

        lockperiod = new QLineEdit(SendCoins);
        lockperiod->setObjectName(QStringLiteral("lockperiod"));
        lockperiod->setEnabled(true);
        lockperiod->setMaximumSize(QSize(40, 16777215));
        lockperiod->setLayoutDirection(Qt::LeftToRight);
        lockperiod->setMaxLength(6);

        horizontalLayoutAmount->addWidget(lockperiod);

        locklength = new QComboBox(SendCoins);
        locklength->setObjectName(QStringLiteral("locklength"));

        horizontalLayoutAmount->addWidget(locklength);

        checkboxSubtractFeeFromAmount = new QCheckBox(SendCoins);
        checkboxSubtractFeeFromAmount->setObjectName(QStringLiteral("checkboxSubtractFeeFromAmount"));

        horizontalLayoutAmount->addWidget(checkboxSubtractFeeFromAmount);

        horizontalLayoutAmount->setStretch(4, 1);

        gridLayout->addLayout(horizontalLayoutAmount, 2, 1, 1, 1);

        messageLabel = new QLabel(SendCoins);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(messageLabel, 3, 0, 1, 1);

        messageTextLabel = new QLabel(SendCoins);
        messageTextLabel->setObjectName(QStringLiteral("messageTextLabel"));
        messageTextLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(messageTextLabel, 3, 1, 1, 1);

        SendCoinsEntry->addWidget(SendCoins);
        SendCoins_UnauthenticatedPaymentRequest = new QFrame();
        SendCoins_UnauthenticatedPaymentRequest->setObjectName(QStringLiteral("SendCoins_UnauthenticatedPaymentRequest"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 255, 191, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush7(QColor(255, 255, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SendCoins_UnauthenticatedPaymentRequest->setPalette(palette);
        SendCoins_UnauthenticatedPaymentRequest->setAutoFillBackground(false);
        SendCoins_UnauthenticatedPaymentRequest->setFrameShape(QFrame::NoFrame);
        gridLayout_is = new QGridLayout(SendCoins_UnauthenticatedPaymentRequest);
        gridLayout_is->setSpacing(12);
        gridLayout_is->setObjectName(QStringLiteral("gridLayout_is"));
        payToLabel_is = new QLabel(SendCoins_UnauthenticatedPaymentRequest);
        payToLabel_is->setObjectName(QStringLiteral("payToLabel_is"));
        payToLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(payToLabel_is, 0, 0, 1, 1);

        payToLayout_is = new QHBoxLayout();
        payToLayout_is->setSpacing(0);
        payToLayout_is->setObjectName(QStringLiteral("payToLayout_is"));
        payTo_is = new QLabel(SendCoins_UnauthenticatedPaymentRequest);
        payTo_is->setObjectName(QStringLiteral("payTo_is"));

        payToLayout_is->addWidget(payTo_is);

        deleteButton_is = new QToolButton(SendCoins_UnauthenticatedPaymentRequest);
        deleteButton_is->setObjectName(QStringLiteral("deleteButton_is"));
        deleteButton_is->setIcon(icon2);

        payToLayout_is->addWidget(deleteButton_is);


        gridLayout_is->addLayout(payToLayout_is, 0, 1, 1, 1);

        memoLabel_is = new QLabel(SendCoins_UnauthenticatedPaymentRequest);
        memoLabel_is->setObjectName(QStringLiteral("memoLabel_is"));
        memoLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(memoLabel_is, 1, 0, 1, 1);

        memoTextLabel_is = new QLabel(SendCoins_UnauthenticatedPaymentRequest);
        memoTextLabel_is->setObjectName(QStringLiteral("memoTextLabel_is"));
        memoTextLabel_is->setTextFormat(Qt::PlainText);

        gridLayout_is->addWidget(memoTextLabel_is, 1, 1, 1, 1);

        amountLabel_is = new QLabel(SendCoins_UnauthenticatedPaymentRequest);
        amountLabel_is->setObjectName(QStringLiteral("amountLabel_is"));
        amountLabel_is->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_is->addWidget(amountLabel_is, 2, 0, 1, 1);

        payAmount_is = new BitcoinAmountField(SendCoins_UnauthenticatedPaymentRequest);
        payAmount_is->setObjectName(QStringLiteral("payAmount_is"));
        payAmount_is->setAcceptDrops(false);

        gridLayout_is->addWidget(payAmount_is, 2, 1, 1, 1);

        SendCoinsEntry->addWidget(SendCoins_UnauthenticatedPaymentRequest);
        SendCoins_AuthenticatedPaymentRequest = new QFrame();
        SendCoins_AuthenticatedPaymentRequest->setObjectName(QStringLiteral("SendCoins_AuthenticatedPaymentRequest"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush8(QColor(230, 255, 224, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(185, 243, 171, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(70, 116, 59, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(93, 155, 79, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush12(QColor(155, 255, 147, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush13(QColor(197, 243, 187, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        QBrush brush14(QColor(125, 194, 122, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush14);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush15(QColor(140, 232, 119, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SendCoins_AuthenticatedPaymentRequest->setPalette(palette1);
        SendCoins_AuthenticatedPaymentRequest->setAutoFillBackground(false);
        SendCoins_AuthenticatedPaymentRequest->setFrameShape(QFrame::NoFrame);
        gridLayout_s = new QGridLayout(SendCoins_AuthenticatedPaymentRequest);
        gridLayout_s->setSpacing(12);
        gridLayout_s->setObjectName(QStringLiteral("gridLayout_s"));
        payToLabel_s = new QLabel(SendCoins_AuthenticatedPaymentRequest);
        payToLabel_s->setObjectName(QStringLiteral("payToLabel_s"));
        payToLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(payToLabel_s, 0, 0, 1, 1);

        payToLayout_s = new QHBoxLayout();
        payToLayout_s->setSpacing(0);
        payToLayout_s->setObjectName(QStringLiteral("payToLayout_s"));
        payTo_s = new QLabel(SendCoins_AuthenticatedPaymentRequest);
        payTo_s->setObjectName(QStringLiteral("payTo_s"));
        payTo_s->setTextFormat(Qt::PlainText);

        payToLayout_s->addWidget(payTo_s);

        deleteButton_s = new QToolButton(SendCoins_AuthenticatedPaymentRequest);
        deleteButton_s->setObjectName(QStringLiteral("deleteButton_s"));
        deleteButton_s->setIcon(icon2);

        payToLayout_s->addWidget(deleteButton_s);


        gridLayout_s->addLayout(payToLayout_s, 0, 1, 1, 1);

        memoLabel_s = new QLabel(SendCoins_AuthenticatedPaymentRequest);
        memoLabel_s->setObjectName(QStringLiteral("memoLabel_s"));
        memoLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(memoLabel_s, 1, 0, 1, 1);

        memoTextLabel_s = new QLabel(SendCoins_AuthenticatedPaymentRequest);
        memoTextLabel_s->setObjectName(QStringLiteral("memoTextLabel_s"));
        memoTextLabel_s->setTextFormat(Qt::PlainText);

        gridLayout_s->addWidget(memoTextLabel_s, 1, 1, 1, 1);

        amountLabel_s = new QLabel(SendCoins_AuthenticatedPaymentRequest);
        amountLabel_s->setObjectName(QStringLiteral("amountLabel_s"));
        amountLabel_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_s->addWidget(amountLabel_s, 2, 0, 1, 1);

        payAmount_s = new BitcoinAmountField(SendCoins_AuthenticatedPaymentRequest);
        payAmount_s->setObjectName(QStringLiteral("payAmount_s"));
        payAmount_s->setAcceptDrops(false);

        gridLayout_s->addWidget(payAmount_s, 2, 1, 1, 1);

        SendCoinsEntry->addWidget(SendCoins_AuthenticatedPaymentRequest);
#ifndef QT_NO_SHORTCUT
        payToLabel->setBuddy(payTo);
        amountLabel->setBuddy(payAmount);
        labellLabel->setBuddy(addAsLabel);
        amountLabel_is->setBuddy(payAmount_is);
        amountLabel_s->setBuddy(payAmount_s);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(payTo, addressBookButton);
        QWidget::setTabOrder(addressBookButton, pasteButton);
        QWidget::setTabOrder(pasteButton, deleteButton);
        QWidget::setTabOrder(deleteButton, addAsLabel);
        QWidget::setTabOrder(addAsLabel, payAmount);
        QWidget::setTabOrder(payAmount, payAmount_is);
        QWidget::setTabOrder(payAmount_is, deleteButton_is);
        QWidget::setTabOrder(deleteButton_is, payAmount_s);
        QWidget::setTabOrder(payAmount_s, deleteButton_s);

        retranslateUi(SendCoinsEntry);

        QMetaObject::connectSlotsByName(SendCoinsEntry);
    } // setupUi

    void retranslateUi(QStackedWidget *SendCoinsEntry)
    {
#ifndef QT_NO_TOOLTIP
        SendCoins->setToolTip(QApplication::translate("SendCoinsEntry", "This is a normal payment.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel->setText(QApplication::translate("SendCoinsEntry", "Pay &To:", 0));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendCoinsEntry", "Enter a label for this address to add it to the list of used addresses", 0));
#endif // QT_NO_TOOLTIP
        amountLabel->setText(QApplication::translate("SendCoinsEntry", "A&mount:", 0));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendCoinsEntry", "The SUQA address to send the payment to", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendCoinsEntry", "Choose previously used address", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendCoinsEntry", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
        labellLabel->setText(QApplication::translate("SendCoinsEntry", "&Label:", 0));
        locklabel->setText(QApplication::translate("SendCoinsEntry", "  For  ", 0));
        lockperiod->setText(QApplication::translate("SendCoinsEntry", "4", 0));
        locklength->clear();
        locklength->insertItems(0, QStringList()
         << QApplication::translate("SendCoinsEntry", "Weeks", 0)
         << QApplication::translate("SendCoinsEntry", "Days", 0)
         << QApplication::translate("SendCoinsEntry", "Blocks", 0)
        );
#ifndef QT_NO_TOOLTIP
        checkboxSubtractFeeFromAmount->setToolTip(QApplication::translate("SendCoinsEntry", "The fee will be deducted from the amount being sent. The recipient will receive less bitcoins than you enter in the amount field. If multiple recipients are selected, the fee is split equally.", 0));
#endif // QT_NO_TOOLTIP
        checkboxSubtractFeeFromAmount->setText(QApplication::translate("SendCoinsEntry", "S&ubtract fee from amount", 0));
        messageLabel->setText(QApplication::translate("SendCoinsEntry", "Message:", 0));
#ifndef QT_NO_TOOLTIP
        messageTextLabel->setToolTip(QApplication::translate("SendCoinsEntry", "A message that was attached to the suqa: URI which will be stored with the transaction for your reference. Note: This message will not be sent over the SUQA network.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SendCoins_UnauthenticatedPaymentRequest->setToolTip(QApplication::translate("SendCoinsEntry", "This is an unauthenticated payment request.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel_is->setText(QApplication::translate("SendCoinsEntry", "Pay To:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton_is->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton_is->setText(QString());
        memoLabel_is->setText(QApplication::translate("SendCoinsEntry", "Memo:", 0));
        amountLabel_is->setText(QApplication::translate("SendCoinsEntry", "A&mount:", 0));
#ifndef QT_NO_TOOLTIP
        SendCoins_AuthenticatedPaymentRequest->setToolTip(QApplication::translate("SendCoinsEntry", "This is an authenticated payment request.", 0));
#endif // QT_NO_TOOLTIP
        payToLabel_s->setText(QApplication::translate("SendCoinsEntry", "Pay To:", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton_s->setToolTip(QApplication::translate("SendCoinsEntry", "Remove this entry", 0));
#endif // QT_NO_TOOLTIP
        deleteButton_s->setText(QString());
        memoLabel_s->setText(QApplication::translate("SendCoinsEntry", "Memo:", 0));
        amountLabel_s->setText(QApplication::translate("SendCoinsEntry", "A&mount:", 0));
        Q_UNUSED(SendCoinsEntry);
    } // retranslateUi

};

namespace Ui {
    class SendCoinsEntry: public Ui_SendCoinsEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSENTRY_H
