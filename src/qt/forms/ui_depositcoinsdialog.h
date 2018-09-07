/********************************************************************************
** Form generated from reading UI file 'depositcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITCOINSDIALOG_H
#define UI_DEPOSITCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_DepositCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameCoinControl;
    QVBoxLayout *verticalLayoutCoinControl2;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl1;
    QLabel *labelCoinControlFeatures;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QPushButton *pushButtonCoinControl;
    QLabel *labelCoinControlAutomaticallySelected;
    QLabel *labelCoinControlInsuffFunds;
    QSpacerItem *horizontalSpacerCoinControl;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QLabel *labelCoinControlPriorityText;
    QLabel *labelCoinControlPriority;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *checkBoxCoinControlChange;
    QValidatedLineEdit *lineEditCoinControlChange;
    QLabel *labelCoinControlChangeLabel;
    QSpacerItem *verticalSpacerCoinControl;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QFrame *frameFee;
    QVBoxLayout *verticalLayoutFee1;
    QVBoxLayout *verticalLayoutFee2;
    QHBoxLayout *horizontalLayoutFee1;
    QVBoxLayout *verticalLayoutFee7;
    QSpacerItem *verticalSpacerSmartFee;
    QHBoxLayout *horizontalLayoutSmartFee;
    QLabel *labelFeeHeadline;
    QLabel *labelFeeMinimized;
    QPushButton *buttonChooseFee;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonMinimizeFee;
    QFrame *frameFeeSelection;
    QVBoxLayout *verticalLayoutFee12;
    QGridLayout *gridLayoutFee;
    QVBoxLayout *verticalLayoutFee8;
    QHBoxLayout *horizontalLayoutFee13;
    QRadioButton *radioCustomPerKilobyte;
    QRadioButton *radioCustomAtLeast;
    BitcoinAmountField *customFee;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayoutFee8;
    QCheckBox *checkBoxMinimumFee;
    QLabel *labelMinFeeWarning;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayoutFee4;
    QRadioButton *radioSmartFee;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayoutFee9;
    QRadioButton *radioCustomFee;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayoutFee3;
    QHBoxLayout *horizontalLayoutFee12;
    QLabel *labelSmartFee;
    QLabel *labelFeeEstimation;
    QLabel *labelSmartFee2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayoutFee9;
    QVBoxLayout *verticalLayoutFee6;
    QLabel *labelSmartFee3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayoutFee5;
    QSlider *sliderSmartFee;
    QHBoxLayout *horizontalLayoutFee10;
    QLabel *labelSmartFeeNormal;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelSmartFeeFast;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayoutFee5;
    QCheckBox *checkBoxFreeTx;
    QLabel *labelFreeTx;
    QSpacerItem *horizontalSpacerFee5;
    QSpacerItem *verticalSpacerFee2;
    QSpacerItem *verticalSpacerFee;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendButton;
    QPushButton *clearButton;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QButtonGroup *groupCustomFee;
    QButtonGroup *groupFee;

    void setupUi(QDialog *DepositCoinsDialog)
    {
        if (DepositCoinsDialog->objectName().isEmpty())
            DepositCoinsDialog->setObjectName(QStringLiteral("DepositCoinsDialog"));
        DepositCoinsDialog->setEnabled(true);
        DepositCoinsDialog->resize(943, 809);
        DepositCoinsDialog->setStyleSheet(QLatin1String("\n"
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
        verticalLayout = new QVBoxLayout(DepositCoinsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 8);
        frameCoinControl = new QFrame(DepositCoinsDialog);
        frameCoinControl->setObjectName(QStringLiteral("frameCoinControl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCoinControl->sizePolicy().hasHeightForWidth());
        frameCoinControl->setSizePolicy(sizePolicy);
        frameCoinControl->setMaximumSize(QSize(16777215, 16777215));
        frameCoinControl->setFrameShape(QFrame::StyledPanel);
        frameCoinControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutCoinControl2 = new QVBoxLayout(frameCoinControl);
        verticalLayoutCoinControl2->setSpacing(0);
        verticalLayoutCoinControl2->setObjectName(QStringLiteral("verticalLayoutCoinControl2"));
        verticalLayoutCoinControl2->setContentsMargins(0, 0, 0, 6);
        verticalLayoutCoinControl = new QVBoxLayout();
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName(QStringLiteral("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setContentsMargins(10, 10, -1, -1);
        horizontalLayoutCoinControl1 = new QHBoxLayout();
        horizontalLayoutCoinControl1->setObjectName(QStringLiteral("horizontalLayoutCoinControl1"));
        horizontalLayoutCoinControl1->setContentsMargins(-1, -1, -1, 15);
        labelCoinControlFeatures = new QLabel(frameCoinControl);
        labelCoinControlFeatures->setObjectName(QStringLiteral("labelCoinControlFeatures"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCoinControlFeatures->setFont(font);
        labelCoinControlFeatures->setStyleSheet(QStringLiteral("font-weight:bold;"));

        horizontalLayoutCoinControl1->addWidget(labelCoinControlFeatures);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl1);

        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName(QStringLiteral("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(-1, -1, -1, 10);
        pushButtonCoinControl = new QPushButton(frameCoinControl);
        pushButtonCoinControl->setObjectName(QStringLiteral("pushButtonCoinControl"));
        pushButtonCoinControl->setStyleSheet(QStringLiteral(""));
        pushButtonCoinControl->setAutoDefault(false);

        horizontalLayoutCoinControl2->addWidget(pushButtonCoinControl);

        labelCoinControlAutomaticallySelected = new QLabel(frameCoinControl);
        labelCoinControlAutomaticallySelected->setObjectName(QStringLiteral("labelCoinControlAutomaticallySelected"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAutomaticallySelected);

        labelCoinControlInsuffFunds = new QLabel(frameCoinControl);
        labelCoinControlInsuffFunds->setObjectName(QStringLiteral("labelCoinControlInsuffFunds"));
        labelCoinControlInsuffFunds->setFont(font);
        labelCoinControlInsuffFunds->setStyleSheet(QStringLiteral("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlInsuffFunds);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacerCoinControl);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(frameCoinControl);
        widgetCoinControl->setObjectName(QStringLiteral("widgetCoinControl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetCoinControl->sizePolicy().hasHeightForWidth());
        widgetCoinControl->setSizePolicy(sizePolicy2);
        widgetCoinControl->setMinimumSize(QSize(0, 0));
        widgetCoinControl->setStyleSheet(QStringLiteral(""));
        horizontalLayoutCoinControl5 = new QHBoxLayout(widgetCoinControl);
        horizontalLayoutCoinControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCoinControl5->setObjectName(QStringLiteral("horizontalLayoutCoinControl5"));
        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(20);
        horizontalLayoutCoinControl3->setObjectName(QStringLiteral("horizontalLayoutCoinControl3"));
        horizontalLayoutCoinControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QStringLiteral("formLayoutCoinControl1"));
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(14);
        formLayoutCoinControl1->setContentsMargins(10, 4, 6, -1);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));
        QFont font1;
        labelCoinControlQuantityText->setFont(font1);
        labelCoinControlQuantityText->setMargin(0);

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setText(QStringLiteral("0"));
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(widgetCoinControl);
        labelCoinControlBytesText->setObjectName(QStringLiteral("labelCoinControlBytesText"));
        labelCoinControlBytesText->setFont(font1);

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(widgetCoinControl);
        labelCoinControlBytes->setObjectName(QStringLiteral("labelCoinControlBytes"));
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setText(QStringLiteral("0"));
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QStringLiteral("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(14);
        formLayoutCoinControl2->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));
        labelCoinControlAmountText->setFont(font1);
        labelCoinControlAmountText->setMargin(0);

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setText(QStringLiteral("0.00 SUQA"));
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);

        labelCoinControlPriorityText = new QLabel(widgetCoinControl);
        labelCoinControlPriorityText->setObjectName(QStringLiteral("labelCoinControlPriorityText"));
        labelCoinControlPriorityText->setFont(font1);

        formLayoutCoinControl2->setWidget(1, QFormLayout::LabelRole, labelCoinControlPriorityText);

        labelCoinControlPriority = new QLabel(widgetCoinControl);
        labelCoinControlPriority->setObjectName(QStringLiteral("labelCoinControlPriority"));
        labelCoinControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlPriority->setText(QStringLiteral("medium"));
        labelCoinControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(1, QFormLayout::FieldRole, labelCoinControlPriority);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QStringLiteral("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(14);
        formLayoutCoinControl3->setContentsMargins(6, 4, 6, -1);
        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));
        labelCoinControlFeeText->setFont(font1);
        labelCoinControlFeeText->setMargin(0);

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setText(QStringLiteral("0.00 SUQA"));
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);

        labelCoinControlLowOutputText = new QLabel(widgetCoinControl);
        labelCoinControlLowOutputText->setObjectName(QStringLiteral("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setFont(font1);

        formLayoutCoinControl3->setWidget(1, QFormLayout::LabelRole, labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(widgetCoinControl);
        labelCoinControlLowOutput->setObjectName(QStringLiteral("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setText(QStringLiteral("no"));
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(1, QFormLayout::FieldRole, labelCoinControlLowOutput);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QStringLiteral("formLayoutCoinControl4"));
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(14);
        formLayoutCoinControl4->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setFont(font1);
        labelCoinControlAfterFeeText->setMargin(0);

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setText(QStringLiteral("0.00 SUQA"));
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));
        labelCoinControlChangeText->setFont(font1);

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setText(QStringLiteral("0.00 SUQA"));
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl4);

        horizontalLayoutCoinControl3->setStretch(3, 1);

        horizontalLayoutCoinControl5->addLayout(horizontalLayoutCoinControl3);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(12);
        horizontalLayoutCoinControl4->setObjectName(QStringLiteral("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(-1, 5, 5, -1);
        checkBoxCoinControlChange = new QCheckBox(frameCoinControl);
        checkBoxCoinControlChange->setObjectName(QStringLiteral("checkBoxCoinControlChange"));

        horizontalLayoutCoinControl4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QValidatedLineEdit(frameCoinControl);
        lineEditCoinControlChange->setObjectName(QStringLiteral("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy3);

        horizontalLayoutCoinControl4->addWidget(lineEditCoinControlChange);

        labelCoinControlChangeLabel = new QLabel(frameCoinControl);
        labelCoinControlChangeLabel->setObjectName(QStringLiteral("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy4);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);

        verticalSpacerCoinControl = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCoinControl->addItem(verticalSpacerCoinControl);

        verticalLayoutCoinControl->setStretch(4, 1);

        verticalLayoutCoinControl2->addLayout(verticalLayoutCoinControl);


        verticalLayout->addWidget(frameCoinControl);

        scrollArea = new QScrollArea(DepositCoinsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 925, 287));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QStringLiteral("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        frameFee = new QFrame(DepositCoinsDialog);
        frameFee->setObjectName(QStringLiteral("frameFee"));
        sizePolicy.setHeightForWidth(frameFee->sizePolicy().hasHeightForWidth());
        frameFee->setSizePolicy(sizePolicy);
        frameFee->setMaximumSize(QSize(16777215, 16777215));
        frameFee->setFrameShape(QFrame::StyledPanel);
        frameFee->setFrameShadow(QFrame::Sunken);
        verticalLayoutFee1 = new QVBoxLayout(frameFee);
        verticalLayoutFee1->setSpacing(0);
        verticalLayoutFee1->setContentsMargins(0, 0, 0, 0);
        verticalLayoutFee1->setObjectName(QStringLiteral("verticalLayoutFee1"));
        verticalLayoutFee2 = new QVBoxLayout();
        verticalLayoutFee2->setSpacing(0);
        verticalLayoutFee2->setObjectName(QStringLiteral("verticalLayoutFee2"));
        verticalLayoutFee2->setContentsMargins(10, 0, -1, -1);
        horizontalLayoutFee1 = new QHBoxLayout();
        horizontalLayoutFee1->setObjectName(QStringLiteral("horizontalLayoutFee1"));
        horizontalLayoutFee1->setContentsMargins(-1, -1, -1, 0);
        verticalLayoutFee7 = new QVBoxLayout();
        verticalLayoutFee7->setSpacing(0);
        verticalLayoutFee7->setObjectName(QStringLiteral("verticalLayoutFee7"));
        verticalSpacerSmartFee = new QSpacerItem(1, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutFee7->addItem(verticalSpacerSmartFee);

        horizontalLayoutSmartFee = new QHBoxLayout();
        horizontalLayoutSmartFee->setSpacing(10);
        horizontalLayoutSmartFee->setObjectName(QStringLiteral("horizontalLayoutSmartFee"));
        labelFeeHeadline = new QLabel(frameFee);
        labelFeeHeadline->setObjectName(QStringLiteral("labelFeeHeadline"));
        sizePolicy1.setHeightForWidth(labelFeeHeadline->sizePolicy().hasHeightForWidth());
        labelFeeHeadline->setSizePolicy(sizePolicy1);
        labelFeeHeadline->setFont(font);
        labelFeeHeadline->setStyleSheet(QStringLiteral("font-weight:bold;"));

        horizontalLayoutSmartFee->addWidget(labelFeeHeadline);

        labelFeeMinimized = new QLabel(frameFee);
        labelFeeMinimized->setObjectName(QStringLiteral("labelFeeMinimized"));

        horizontalLayoutSmartFee->addWidget(labelFeeMinimized);

        buttonChooseFee = new QPushButton(frameFee);
        buttonChooseFee->setObjectName(QStringLiteral("buttonChooseFee"));

        horizontalLayoutSmartFee->addWidget(buttonChooseFee);


        verticalLayoutFee7->addLayout(horizontalLayoutSmartFee);

        verticalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee7->addItem(verticalSpacer_5);


        horizontalLayoutFee1->addLayout(verticalLayoutFee7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee1->addItem(horizontalSpacer_4);

        buttonMinimizeFee = new QPushButton(frameFee);
        buttonMinimizeFee->setObjectName(QStringLiteral("buttonMinimizeFee"));

        horizontalLayoutFee1->addWidget(buttonMinimizeFee);


        verticalLayoutFee2->addLayout(horizontalLayoutFee1);

        frameFeeSelection = new QFrame(frameFee);
        frameFeeSelection->setObjectName(QStringLiteral("frameFeeSelection"));
        verticalLayoutFee12 = new QVBoxLayout(frameFeeSelection);
        verticalLayoutFee12->setSpacing(0);
        verticalLayoutFee12->setContentsMargins(0, 0, 0, 0);
        verticalLayoutFee12->setObjectName(QStringLiteral("verticalLayoutFee12"));
        gridLayoutFee = new QGridLayout();
        gridLayoutFee->setObjectName(QStringLiteral("gridLayoutFee"));
        gridLayoutFee->setHorizontalSpacing(10);
        gridLayoutFee->setVerticalSpacing(4);
        gridLayoutFee->setContentsMargins(-1, 10, -1, 4);
        verticalLayoutFee8 = new QVBoxLayout();
        verticalLayoutFee8->setSpacing(6);
        verticalLayoutFee8->setObjectName(QStringLiteral("verticalLayoutFee8"));
        horizontalLayoutFee13 = new QHBoxLayout();
        horizontalLayoutFee13->setObjectName(QStringLiteral("horizontalLayoutFee13"));
        radioCustomPerKilobyte = new QRadioButton(frameFeeSelection);
        groupCustomFee = new QButtonGroup(DepositCoinsDialog);
        groupCustomFee->setObjectName(QStringLiteral("groupCustomFee"));
        groupCustomFee->addButton(radioCustomPerKilobyte);
        radioCustomPerKilobyte->setObjectName(QStringLiteral("radioCustomPerKilobyte"));
        radioCustomPerKilobyte->setChecked(true);

        horizontalLayoutFee13->addWidget(radioCustomPerKilobyte);

        radioCustomAtLeast = new QRadioButton(frameFeeSelection);
        groupCustomFee->addButton(radioCustomAtLeast);
        radioCustomAtLeast->setObjectName(QStringLiteral("radioCustomAtLeast"));

        horizontalLayoutFee13->addWidget(radioCustomAtLeast);

        customFee = new BitcoinAmountField(frameFeeSelection);
        customFee->setObjectName(QStringLiteral("customFee"));

        horizontalLayoutFee13->addWidget(customFee);

        horizontalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee13->addItem(horizontalSpacer_6);


        verticalLayoutFee8->addLayout(horizontalLayoutFee13);

        horizontalLayoutFee8 = new QHBoxLayout();
        horizontalLayoutFee8->setObjectName(QStringLiteral("horizontalLayoutFee8"));
        checkBoxMinimumFee = new QCheckBox(frameFeeSelection);
        checkBoxMinimumFee->setObjectName(QStringLiteral("checkBoxMinimumFee"));

        horizontalLayoutFee8->addWidget(checkBoxMinimumFee);

        labelMinFeeWarning = new QLabel(frameFeeSelection);
        labelMinFeeWarning->setObjectName(QStringLiteral("labelMinFeeWarning"));
        labelMinFeeWarning->setEnabled(true);
        labelMinFeeWarning->setMargin(5);

        horizontalLayoutFee8->addWidget(labelMinFeeWarning);

        horizontalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee8->addItem(horizontalSpacer_2);


        verticalLayoutFee8->addLayout(horizontalLayoutFee8);


        gridLayoutFee->addLayout(verticalLayoutFee8, 1, 1, 1, 1);

        verticalLayoutFee4 = new QVBoxLayout();
        verticalLayoutFee4->setObjectName(QStringLiteral("verticalLayoutFee4"));
        radioSmartFee = new QRadioButton(frameFeeSelection);
        groupFee = new QButtonGroup(DepositCoinsDialog);
        groupFee->setObjectName(QStringLiteral("groupFee"));
        groupFee->addButton(radioSmartFee);
        radioSmartFee->setObjectName(QStringLiteral("radioSmartFee"));
        radioSmartFee->setChecked(true);

        verticalLayoutFee4->addWidget(radioSmartFee);

        verticalSpacer_2 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee4->addItem(verticalSpacer_2);

        verticalLayoutFee4->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee4, 0, 0, 1, 1);

        verticalLayoutFee9 = new QVBoxLayout();
        verticalLayoutFee9->setObjectName(QStringLiteral("verticalLayoutFee9"));
        radioCustomFee = new QRadioButton(frameFeeSelection);
        groupFee->addButton(radioCustomFee);
        radioCustomFee->setObjectName(QStringLiteral("radioCustomFee"));

        verticalLayoutFee9->addWidget(radioCustomFee);

        verticalSpacer_6 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee9->addItem(verticalSpacer_6);

        verticalLayoutFee9->setStretch(1, 1);

        gridLayoutFee->addLayout(verticalLayoutFee9, 1, 0, 1, 1);

        verticalLayoutFee3 = new QVBoxLayout();
        verticalLayoutFee3->setSpacing(6);
        verticalLayoutFee3->setObjectName(QStringLiteral("verticalLayoutFee3"));
        verticalLayoutFee3->setContentsMargins(-1, 2, -1, -1);
        horizontalLayoutFee12 = new QHBoxLayout();
        horizontalLayoutFee12->setObjectName(QStringLiteral("horizontalLayoutFee12"));
        labelSmartFee = new QLabel(frameFeeSelection);
        labelSmartFee->setObjectName(QStringLiteral("labelSmartFee"));
        labelSmartFee->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee);

        labelFeeEstimation = new QLabel(frameFeeSelection);
        labelFeeEstimation->setObjectName(QStringLiteral("labelFeeEstimation"));

        horizontalLayoutFee12->addWidget(labelFeeEstimation);

        labelSmartFee2 = new QLabel(frameFeeSelection);
        labelSmartFee2->setObjectName(QStringLiteral("labelSmartFee2"));
        labelSmartFee2->setMargin(2);

        horizontalLayoutFee12->addWidget(labelSmartFee2);

        horizontalSpacer_5 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee12->addItem(horizontalSpacer_5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee12);

        horizontalLayoutFee9 = new QHBoxLayout();
        horizontalLayoutFee9->setObjectName(QStringLiteral("horizontalLayoutFee9"));
        verticalLayoutFee6 = new QVBoxLayout();
        verticalLayoutFee6->setObjectName(QStringLiteral("verticalLayoutFee6"));
        labelSmartFee3 = new QLabel(frameFeeSelection);
        labelSmartFee3->setObjectName(QStringLiteral("labelSmartFee3"));
        labelSmartFee3->setMargin(2);

        verticalLayoutFee6->addWidget(labelSmartFee3);

        verticalSpacer_3 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee6->addItem(verticalSpacer_3);


        horizontalLayoutFee9->addLayout(verticalLayoutFee6);

        verticalLayoutFee5 = new QVBoxLayout();
        verticalLayoutFee5->setObjectName(QStringLiteral("verticalLayoutFee5"));
        verticalLayoutFee5->setContentsMargins(-1, -1, 30, -1);
        sliderSmartFee = new QSlider(frameFeeSelection);
        sliderSmartFee->setObjectName(QStringLiteral("sliderSmartFee"));
        sliderSmartFee->setMinimum(0);
        sliderSmartFee->setMaximum(24);
        sliderSmartFee->setPageStep(1);
        sliderSmartFee->setValue(0);
        sliderSmartFee->setOrientation(Qt::Horizontal);
        sliderSmartFee->setInvertedAppearance(false);
        sliderSmartFee->setInvertedControls(false);
        sliderSmartFee->setTickPosition(QSlider::NoTicks);

        verticalLayoutFee5->addWidget(sliderSmartFee);

        horizontalLayoutFee10 = new QHBoxLayout();
        horizontalLayoutFee10->setObjectName(QStringLiteral("horizontalLayoutFee10"));
        labelSmartFeeNormal = new QLabel(frameFeeSelection);
        labelSmartFeeNormal->setObjectName(QStringLiteral("labelSmartFeeNormal"));

        horizontalLayoutFee10->addWidget(labelSmartFeeNormal);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee10->addItem(horizontalSpacer_3);

        labelSmartFeeFast = new QLabel(frameFeeSelection);
        labelSmartFeeFast->setObjectName(QStringLiteral("labelSmartFeeFast"));

        horizontalLayoutFee10->addWidget(labelSmartFeeFast);


        verticalLayoutFee5->addLayout(horizontalLayoutFee10);


        horizontalLayoutFee9->addLayout(verticalLayoutFee5);


        verticalLayoutFee3->addLayout(horizontalLayoutFee9);

        verticalSpacer_4 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee3->addItem(verticalSpacer_4);

        verticalLayoutFee3->setStretch(2, 1);

        gridLayoutFee->addLayout(verticalLayoutFee3, 0, 1, 1, 1);


        verticalLayoutFee12->addLayout(gridLayoutFee);

        horizontalLayoutFee5 = new QHBoxLayout();
        horizontalLayoutFee5->setSpacing(8);
        horizontalLayoutFee5->setObjectName(QStringLiteral("horizontalLayoutFee5"));
        horizontalLayoutFee5->setContentsMargins(-1, -1, -1, 4);
        checkBoxFreeTx = new QCheckBox(frameFeeSelection);
        checkBoxFreeTx->setObjectName(QStringLiteral("checkBoxFreeTx"));

        horizontalLayoutFee5->addWidget(checkBoxFreeTx);

        labelFreeTx = new QLabel(frameFeeSelection);
        labelFreeTx->setObjectName(QStringLiteral("labelFreeTx"));
        labelFreeTx->setMargin(5);

        horizontalLayoutFee5->addWidget(labelFreeTx);

        horizontalSpacerFee5 = new QSpacerItem(1, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee5->addItem(horizontalSpacerFee5);


        verticalLayoutFee12->addLayout(horizontalLayoutFee5);

        verticalSpacerFee2 = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee12->addItem(verticalSpacerFee2);


        verticalLayoutFee2->addWidget(frameFeeSelection);

        verticalSpacerFee = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutFee2->addItem(verticalSpacerFee);


        verticalLayoutFee1->addLayout(verticalLayoutFee2);


        verticalLayout->addWidget(frameFee);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sendButton = new QPushButton(DepositCoinsDialog);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setMinimumSize(QSize(150, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon);
        sendButton->setAutoDefault(false);

        horizontalLayout->addWidget(sendButton);

        clearButton = new QPushButton(DepositCoinsDialog);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy5);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon1);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        addButton = new QPushButton(DepositCoinsDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon2);
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(DepositCoinsDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);

        horizontalLayout_2->addWidget(label);

        labelBalance = new QLabel(DepositCoinsDialog);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        sizePolicy6.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy6);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("123.456 SUQA"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(DepositCoinsDialog);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(DepositCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *DepositCoinsDialog)
    {
        DepositCoinsDialog->setWindowTitle(QApplication::translate("DepositCoinsDialog", "Deposit Coins", 0));
        labelCoinControlFeatures->setText(QApplication::translate("DepositCoinsDialog", "Coin Control Features", 0));
        pushButtonCoinControl->setText(QApplication::translate("DepositCoinsDialog", "Inputs...", 0));
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("DepositCoinsDialog", "automatically selected", 0));
        labelCoinControlInsuffFunds->setText(QApplication::translate("DepositCoinsDialog", "Insufficient funds!", 0));
        labelCoinControlQuantityText->setText(QApplication::translate("DepositCoinsDialog", "Quantity:", 0));
        labelCoinControlBytesText->setText(QApplication::translate("DepositCoinsDialog", "Bytes:", 0));
        labelCoinControlAmountText->setText(QApplication::translate("DepositCoinsDialog", "Amount:", 0));
        labelCoinControlPriorityText->setText(QApplication::translate("DepositCoinsDialog", "Priority:", 0));
        labelCoinControlFeeText->setText(QApplication::translate("DepositCoinsDialog", "Fee:", 0));
        labelCoinControlLowOutputText->setText(QApplication::translate("DepositCoinsDialog", "Dust:", 0));
        labelCoinControlAfterFeeText->setText(QApplication::translate("DepositCoinsDialog", "After Fee:", 0));
        labelCoinControlChangeText->setText(QApplication::translate("DepositCoinsDialog", "Change:", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxCoinControlChange->setToolTip(QApplication::translate("DepositCoinsDialog", "If this is activated, but the change address is empty or invalid, change will be sent to a newly generated address.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxCoinControlChange->setText(QApplication::translate("DepositCoinsDialog", "Custom change address", 0));
        labelCoinControlChangeLabel->setText(QString());
        labelFeeHeadline->setText(QApplication::translate("DepositCoinsDialog", "Transaction Fee:", 0));
        labelFeeMinimized->setText(QString());
        buttonChooseFee->setText(QApplication::translate("DepositCoinsDialog", "Choose...", 0));
#ifndef QT_NO_TOOLTIP
        buttonMinimizeFee->setToolTip(QApplication::translate("DepositCoinsDialog", "collapse fee-settings", 0));
#endif // QT_NO_TOOLTIP
        buttonMinimizeFee->setText(QApplication::translate("DepositCoinsDialog", "Hide", 0));
#ifndef QT_NO_TOOLTIP
        radioCustomPerKilobyte->setToolTip(QApplication::translate("DepositCoinsDialog", "If the custom fee is set to 1000 satoshis and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 satoshis in fee, while \"total at least\" pays 1000 satoshis. For transactions bigger than a kilobyte both pay by kilobyte.", 0));
#endif // QT_NO_TOOLTIP
        radioCustomPerKilobyte->setText(QApplication::translate("DepositCoinsDialog", "per kilobyte", 0));
#ifndef QT_NO_TOOLTIP
        radioCustomAtLeast->setToolTip(QApplication::translate("DepositCoinsDialog", "If the custom fee is set to 1000 satoshis and the transaction is only 250 bytes, then \"per kilobyte\" only pays 250 satoshis in fee, while \"total at least\" pays 1000 satoshis. For transactions bigger than a kilobyte both pay by kilobyte.", 0));
#endif // QT_NO_TOOLTIP
        radioCustomAtLeast->setText(QApplication::translate("DepositCoinsDialog", "total at least", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxMinimumFee->setToolTip(QApplication::translate("DepositCoinsDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks. But be aware that this can end up in a never confirming transaction once there is more demand for bitcoin transactions than the network can process.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxMinimumFee->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelMinFeeWarning->setToolTip(QApplication::translate("DepositCoinsDialog", "Paying only the minimum fee is just fine as long as there is less transaction volume than space in the blocks. But be aware that this can end up in a never confirming transaction once there is more demand for bitcoin transactions than the network can process.", 0));
#endif // QT_NO_TOOLTIP
        labelMinFeeWarning->setText(QApplication::translate("DepositCoinsDialog", "(read the tooltip)", 0));
        radioSmartFee->setText(QApplication::translate("DepositCoinsDialog", "Recommended:", 0));
        radioCustomFee->setText(QApplication::translate("DepositCoinsDialog", "Custom:", 0));
        labelSmartFee->setText(QString());
        labelFeeEstimation->setText(QString());
        labelSmartFee2->setText(QApplication::translate("DepositCoinsDialog", "(Smart fee not initialized yet. This usually takes a few blocks...)", 0));
        labelSmartFee3->setText(QApplication::translate("DepositCoinsDialog", "Confirmation time:", 0));
        labelSmartFeeNormal->setText(QApplication::translate("DepositCoinsDialog", "normal", 0));
        labelSmartFeeFast->setText(QApplication::translate("DepositCoinsDialog", "fast", 0));
        checkBoxFreeTx->setText(QApplication::translate("DepositCoinsDialog", "Send as zero-fee transaction if possible", 0));
        labelFreeTx->setText(QApplication::translate("DepositCoinsDialog", "(confirmation may take longer)", 0));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("DepositCoinsDialog", "Confirm the send action", 0));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("DepositCoinsDialog", "E&ARN", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("DepositCoinsDialog", "Clear all fields of the form.", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("DepositCoinsDialog", "Clear &All", 0));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("DepositCoinsDialog", "Send to multiple recipients at once", 0));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("DepositCoinsDialog", "Add &Recipient", 0));
        label->setText(QApplication::translate("DepositCoinsDialog", "Balance:", 0));
    } // retranslateUi

};

namespace Ui {
    class DepositCoinsDialog: public Ui_DepositCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITCOINSDIALOG_H
