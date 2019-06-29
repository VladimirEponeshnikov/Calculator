/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *WorkWindow;
    QPushButton *buttoplus;
    QPushButton *buttondelit;
    QPushButton *buttonymnoz;
    QPushButton *buttonraznica;
    QPushButton *button9;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button5;
    QPushButton *button4;
    QPushButton *button6;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button1;
    QPushButton *button0;
    QPushButton *buttonpoint;
    QPushButton *buttondelete;
    QPushButton *buttonravno;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(236, 406);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        WorkWindow = new QLabel(centralWidget);
        WorkWindow->setObjectName(QString::fromUtf8("WorkWindow"));
        WorkWindow->setGeometry(QRect(0, 0, 236, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(19);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        WorkWindow->setFont(font);
        WorkWindow->setStyleSheet(QString::fromUtf8(" QLabel\n"
"{\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"background-color: white;\n"
""));
        buttoplus = new QPushButton(centralWidget);
        buttoplus->setObjectName(QString::fromUtf8("buttoplus"));
        buttoplus->setGeometry(QRect(-1, 110, 61, 61));
        buttoplus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0, 215, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        buttondelit = new QPushButton(centralWidget);
        buttondelit->setObjectName(QString::fromUtf8("buttondelit"));
        buttondelit->setGeometry(QRect(58, 110, 61, 61));
        buttondelit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0, 215, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        buttonymnoz = new QPushButton(centralWidget);
        buttonymnoz->setObjectName(QString::fromUtf8("buttonymnoz"));
        buttonymnoz->setGeometry(QRect(117, 110, 61, 61));
        buttonymnoz->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0, 215, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        buttonraznica = new QPushButton(centralWidget);
        buttonraznica->setObjectName(QString::fromUtf8("buttonraznica"));
        buttonraznica->setGeometry(QRect(176, 110, 61, 61));
        buttonraznica->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0, 215, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setGeometry(QRect(117, 169, 61, 61));
        button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setGeometry(QRect(-1, 169, 61, 61));
        button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setGeometry(QRect(58, 169, 61, 61));
        button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setGeometry(QRect(58, 228, 61, 61));
        button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setGeometry(QRect(-1, 228, 61, 61));
        button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setGeometry(QRect(117, 228, 61, 61));
        button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setGeometry(QRect(58, 287, 61, 61));
        button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setGeometry(QRect(117, 287, 61, 61));
        button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setGeometry(QRect(-1, 287, 61, 61));
        button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        button0 = new QPushButton(centralWidget);
        button0->setObjectName(QString::fromUtf8("button0"));
        button0->setGeometry(QRect(-1, 346, 120, 61));
        button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        buttonpoint = new QPushButton(centralWidget);
        buttonpoint->setObjectName(QString::fromUtf8("buttonpoint"));
        buttonpoint->setGeometry(QRect(117, 346, 61, 61));
        buttonpoint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(0, 215, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        buttondelete = new QPushButton(centralWidget);
        buttondelete->setObjectName(QString::fromUtf8("buttondelete"));
        buttondelete->setGeometry(QRect(176, 169, 61, 120));
        buttondelete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        buttonravno = new QPushButton(centralWidget);
        buttonravno->setObjectName(QString::fromUtf8("buttonravno"));
        buttonravno->setGeometry(QRect(176, 287, 61, 120));
        buttonravno->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        WorkWindow->setText(QApplication::translate("MainWindow", "0", nullptr));
        buttoplus->setText(QApplication::translate("MainWindow", "+", nullptr));
        buttondelit->setText(QApplication::translate("MainWindow", "/", nullptr));
        buttonymnoz->setText(QApplication::translate("MainWindow", "*", nullptr));
        buttonraznica->setText(QApplication::translate("MainWindow", "-", nullptr));
        button9->setText(QApplication::translate("MainWindow", "9", nullptr));
        button7->setText(QApplication::translate("MainWindow", "7", nullptr));
        button8->setText(QApplication::translate("MainWindow", "8", nullptr));
        button5->setText(QApplication::translate("MainWindow", "5", nullptr));
        button4->setText(QApplication::translate("MainWindow", "4", nullptr));
        button6->setText(QApplication::translate("MainWindow", "6", nullptr));
        button2->setText(QApplication::translate("MainWindow", "2", nullptr));
        button3->setText(QApplication::translate("MainWindow", "3", nullptr));
        button1->setText(QApplication::translate("MainWindow", "1", nullptr));
        button0->setText(QApplication::translate("MainWindow", "0", nullptr));
        buttonpoint->setText(QApplication::translate("MainWindow", ".", nullptr));
        buttondelete->setText(QApplication::translate("MainWindow", "AC", nullptr));
        buttonravno->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
