/********************************************************************************
** Form generated from reading UI file 'win.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_H
#define UI_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win
{
public:
    QLabel *title_2;
    QLabel *title_3;
    QPushButton *back;
    QPushButton *back_2;

    void setupUi(QWidget *win)
    {
        if (win->objectName().isEmpty())
            win->setObjectName("win");
        win->resize(1200, 800);
        QPalette palette;
        QBrush brush(QColor(3, 6, 55, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        win->setPalette(palette);
        title_2 = new QLabel(win);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(104, 25, 1012, 311));
        QPalette palette1;
        QBrush brush1(QColor(255, 32, 78, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        title_2->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(64);
        title_2->setFont(font);
        title_2->setTextFormat(Qt::AutoText);
        title_2->setAlignment(Qt::AlignCenter);
        title_3 = new QLabel(win);
        title_3->setObjectName("title_3");
        title_3->setGeometry(QRect(100, 30, 1012, 311));
        QPalette palette2;
        QBrush brush2(QColor(76, 255, 183, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        title_3->setPalette(palette2);
        title_3->setFont(font);
        title_3->setTextFormat(Qt::AutoText);
        title_3->setAlignment(Qt::AlignCenter);
        back = new QPushButton(win);
        back->setObjectName("back");
        back->setGeometry(QRect(390, 430, 421, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setBold(false);
        font1.setItalic(false);
        back->setFont(font1);
        back->setStyleSheet(QString::fromUtf8(" background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color: rgb(255, 32, 78);\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: rgb(255, 32, 78);\n"
"    font: 48px;\n"
"    padding: 6px;\n"
""));
        back_2 = new QPushButton(win);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(390, 570, 421, 81));
        back_2->setFont(font1);
        back_2->setStyleSheet(QString::fromUtf8(" background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color: rgb(255, 32, 78);\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: rgb(255, 32, 78);\n"
"    font: 48px;\n"
"    padding: 6px;\n"
""));

        retranslateUi(win);

        QMetaObject::connectSlotsByName(win);
    } // setupUi

    void retranslateUi(QWidget *win)
    {
        win->setWindowTitle(QCoreApplication::translate("win", "Form", nullptr));
        title_2->setText(QCoreApplication::translate("win", "YOU WIN!", nullptr));
        title_3->setText(QCoreApplication::translate("win", "YOU WIN!", nullptr));
        back->setText(QCoreApplication::translate("win", "Next Level", nullptr));
        back_2->setText(QCoreApplication::translate("win", "Level Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class win: public Ui_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_H
