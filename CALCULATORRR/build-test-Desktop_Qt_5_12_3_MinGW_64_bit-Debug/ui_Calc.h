/********************************************************************************
** Form generated from reading UI file 'Calc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *numButton9;
    QPushButton *calcButton;
    QPushButton *numButton0;
    QPushButton *numButton4;
    QPushButton *numButton2;
    QPushButton *numButton3;
    QPushButton *numButton8;
    QPushButton *numButton7;
    QPushButton *numButton5;
    QPushButton *numButton6;
    QPushButton *numButton1;
    QPushButton *resetButton;
    QPushButton *actionButtonAdd;
    QPushButton *actionButtonSub;
    QPushButton *actionButtonMult;
    QPushButton *actionButtonDiv;
    QLineEdit *output;
    QPushButton *numButton10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(179, 269);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color: #5D8AA8; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
"QLineEdit {\n"
" background-color: Black; border: 1px solid gray;\n"
"	color: #FFD800;}\n"
"QPushButton:pressed {\n"
"    background-color: #FE6F5E; border: 1px solid gray;\n"
"	border-radius: 0px;\n"
"	padding: 5px;\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        numButton9 = new QPushButton(centralWidget);
        numButton9->setObjectName(QString::fromUtf8("numButton9"));
        numButton9->setGeometry(QRect(90, 100, 41, 41));
        numButton9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        calcButton = new QPushButton(centralWidget);
        calcButton->setObjectName(QString::fromUtf8("calcButton"));
        calcButton->setGeometry(QRect(130, 180, 41, 81));
        calcButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton0 = new QPushButton(centralWidget);
        numButton0->setObjectName(QString::fromUtf8("numButton0"));
        numButton0->setGeometry(QRect(10, 220, 81, 41));
        numButton0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton4 = new QPushButton(centralWidget);
        numButton4->setObjectName(QString::fromUtf8("numButton4"));
        numButton4->setGeometry(QRect(10, 140, 41, 41));
        numButton4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton2 = new QPushButton(centralWidget);
        numButton2->setObjectName(QString::fromUtf8("numButton2"));
        numButton2->setGeometry(QRect(50, 180, 41, 41));
        numButton2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton3 = new QPushButton(centralWidget);
        numButton3->setObjectName(QString::fromUtf8("numButton3"));
        numButton3->setGeometry(QRect(90, 180, 41, 41));
        numButton3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton8 = new QPushButton(centralWidget);
        numButton8->setObjectName(QString::fromUtf8("numButton8"));
        numButton8->setGeometry(QRect(50, 100, 41, 41));
        numButton8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton7 = new QPushButton(centralWidget);
        numButton7->setObjectName(QString::fromUtf8("numButton7"));
        numButton7->setGeometry(QRect(10, 100, 41, 41));
        numButton7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton5 = new QPushButton(centralWidget);
        numButton5->setObjectName(QString::fromUtf8("numButton5"));
        numButton5->setGeometry(QRect(50, 140, 41, 41));
        numButton5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton6 = new QPushButton(centralWidget);
        numButton6->setObjectName(QString::fromUtf8("numButton6"));
        numButton6->setGeometry(QRect(90, 140, 41, 41));
        numButton6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        numButton1 = new QPushButton(centralWidget);
        numButton1->setObjectName(QString::fromUtf8("numButton1"));
        numButton1->setGeometry(QRect(10, 180, 41, 41));
        numButton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(125,125,125);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setGeometry(QRect(130, 99, 41, 81));
        resetButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        actionButtonAdd = new QPushButton(centralWidget);
        actionButtonAdd->setObjectName(QString::fromUtf8("actionButtonAdd"));
        actionButtonAdd->setGeometry(QRect(10, 60, 41, 41));
        actionButtonAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0,255,0);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        actionButtonSub = new QPushButton(centralWidget);
        actionButtonSub->setObjectName(QString::fromUtf8("actionButtonSub"));
        actionButtonSub->setGeometry(QRect(130, 60, 41, 41));
        actionButtonSub->setLayoutDirection(Qt::LeftToRight);
        actionButtonSub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0,255,0);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        actionButtonMult = new QPushButton(centralWidget);
        actionButtonMult->setObjectName(QString::fromUtf8("actionButtonMult"));
        actionButtonMult->setGeometry(QRect(90, 60, 41, 41));
        actionButtonMult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0,255,0);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        actionButtonDiv = new QPushButton(centralWidget);
        actionButtonDiv->setObjectName(QString::fromUtf8("actionButtonDiv"));
        actionButtonDiv->setGeometry(QRect(50, 60, 41, 41));
        actionButtonDiv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0,255,0);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        output = new QLineEdit(centralWidget);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(9, 9, 161, 41));
        output->setLayoutDirection(Qt::LeftToRight);
        output->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        output->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        output->setReadOnly(true);
        numButton10 = new QPushButton(centralWidget);
        numButton10->setObjectName(QString::fromUtf8("numButton10"));
        numButton10->setGeometry(QRect(90, 220, 41, 41));
        numButton10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0, 255, 0);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        numButton9->setText(QApplication::translate("MainWindow", "9", nullptr));
        calcButton->setText(QApplication::translate("MainWindow", "=", nullptr));
        numButton0->setText(QApplication::translate("MainWindow", "0", nullptr));
        numButton4->setText(QApplication::translate("MainWindow", "4", nullptr));
        numButton2->setText(QApplication::translate("MainWindow", "2", nullptr));
        numButton3->setText(QApplication::translate("MainWindow", "3", nullptr));
        numButton8->setText(QApplication::translate("MainWindow", "8", nullptr));
        numButton7->setText(QApplication::translate("MainWindow", "7", nullptr));
        numButton5->setText(QApplication::translate("MainWindow", "5", nullptr));
        numButton6->setText(QApplication::translate("MainWindow", "6", nullptr));
        numButton1->setText(QApplication::translate("MainWindow", "1", nullptr));
        resetButton->setText(QApplication::translate("MainWindow", "C", nullptr));
        actionButtonAdd->setText(QApplication::translate("MainWindow", "+", nullptr));
        actionButtonSub->setText(QApplication::translate("MainWindow", "-", nullptr));
        actionButtonMult->setText(QApplication::translate("MainWindow", "*", nullptr));
        actionButtonDiv->setText(QApplication::translate("MainWindow", "/", nullptr));
        output->setText(QString());
        numButton10->setText(QApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
