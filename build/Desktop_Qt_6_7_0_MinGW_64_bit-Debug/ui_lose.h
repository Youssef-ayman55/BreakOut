/********************************************************************************
** Form generated from reading UI file 'lose.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSE_H
#define UI_LOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lose
{
public:
    QLabel *title_2;
    QPushButton *back_2;
    QPushButton *back;
    QLabel *title_3;

    void setupUi(QWidget *lose)
    {
        if (lose->objectName().isEmpty())
            lose->setObjectName("lose");
        lose->resize(1200, 800);
        QPalette palette;
        QBrush brush(QColor(3, 6, 55, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        lose->setPalette(palette);
        title_2 = new QLabel(lose);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(114, 45, 1012, 311));
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
        back_2 = new QPushButton(lose);
        back_2->setObjectName("back_2");
        back_2->setGeometry(QRect(400, 590, 421, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setBold(false);
        font1.setItalic(false);
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
        back = new QPushButton(lose);
        back->setObjectName("back");
        back->setGeometry(QRect(400, 450, 421, 81));
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
        title_3 = new QLabel(lose);
        title_3->setObjectName("title_3");
        title_3->setGeometry(QRect(110, 50, 1012, 311));
        QPalette palette2;
        QBrush brush2(QColor(76, 255, 183, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        title_3->setPalette(palette2);
        title_3->setFont(font);
        title_3->setTextFormat(Qt::AutoText);
        title_3->setAlignment(Qt::AlignCenter);

        retranslateUi(lose);

        QMetaObject::connectSlotsByName(lose);
    } // setupUi

    void retranslateUi(QWidget *lose)
    {
        lose->setWindowTitle(QCoreApplication::translate("lose", "Form", nullptr));
        title_2->setText(QCoreApplication::translate("lose", "You LOSE!", nullptr));
        back_2->setText(QCoreApplication::translate("lose", "Level Select", nullptr));
        back->setText(QCoreApplication::translate("lose", "Try Again", nullptr));
        title_3->setText(QCoreApplication::translate("lose", "YOU LOSE!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lose: public Ui_lose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSE_H
