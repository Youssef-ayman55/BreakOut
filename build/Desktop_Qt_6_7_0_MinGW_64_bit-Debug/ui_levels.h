/********************************************************************************
** Form generated from reading UI file 'levels.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELS_H
#define UI_LEVELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_levels
{
public:
    QPushButton *level1;
    QPushButton *level2;
    QPushButton *level3;
    QPushButton *level4;
    QPushButton *level5;
    QLabel *title_2;
    QLabel *title_3;
    QPushButton *back;

    void setupUi(QWidget *levels)
    {
        if (levels->objectName().isEmpty())
            levels->setObjectName("levels");
        levels->resize(1200, 800);
        QPalette palette;
        QBrush brush(QColor(3, 6, 55, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        levels->setPalette(palette);
        level1 = new QPushButton(levels);
        level1->setObjectName("level1");
        level1->setGeometry(QRect(269, 270, 662, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setBold(false);
        font.setItalic(false);
        level1->setFont(font);
        level1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color:  rgb(255, 32, 78);;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color:  rgb(255, 32, 78);;\n"
"    font-size: 48px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px; \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: rgb(160, 21, 62); /* Background color when pressed */\n"
"}\n"
"\n"
""));
        level2 = new QPushButton(levels);
        level2->setObjectName("level2");
        level2->setGeometry(QRect(269, 370, 662, 81));
        level2->setFont(font);
        level2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color:  rgb(255, 32, 78);;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color:  rgb(255, 32, 78);;\n"
"    font-size: 48px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px; \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: rgb(160, 21, 62); /* Background color when pressed */\n"
"}\n"
"\n"
""));
        level3 = new QPushButton(levels);
        level3->setObjectName("level3");
        level3->setGeometry(QRect(269, 470, 662, 81));
        level3->setFont(font);
        level3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color:  rgb(255, 32, 78);;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color:  rgb(255, 32, 78);;\n"
"    font-size: 48px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px; \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: rgb(160, 21, 62); /* Background color when pressed */\n"
"}\n"
"\n"
""));
        level4 = new QPushButton(levels);
        level4->setObjectName("level4");
        level4->setGeometry(QRect(269, 570, 662, 81));
        level4->setFont(font);
        level4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color:  rgb(255, 32, 78);;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color:  rgb(255, 32, 78);;\n"
"    font-size: 48px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px; \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: rgb(160, 21, 62); /* Background color when pressed */\n"
"}\n"
"\n"
""));
        level5 = new QPushButton(levels);
        level5->setObjectName("level5");
        level5->setGeometry(QRect(269, 670, 662, 81));
        level5->setFont(font);
        level5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color:  rgb(255, 32, 78);;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color:  rgb(255, 32, 78);;\n"
"    font-size: 48px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px; \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: rgb(160, 21, 62); /* Background color when pressed */\n"
"}\n"
"\n"
""));
        title_2 = new QLabel(levels);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(94, 0, 1012, 311));
        QPalette palette1;
        QBrush brush1(QColor(255, 32, 78, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        title_2->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setPointSize(64);
        title_2->setFont(font1);
        title_2->setTextFormat(Qt::AutoText);
        title_2->setAlignment(Qt::AlignCenter);
        title_3 = new QLabel(levels);
        title_3->setObjectName("title_3");
        title_3->setGeometry(QRect(90, 5, 1012, 311));
        QPalette palette2;
        QBrush brush2(QColor(76, 255, 183, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        title_3->setPalette(palette2);
        title_3->setFont(font1);
        title_3->setTextFormat(Qt::AutoText);
        title_3->setAlignment(Qt::AlignCenter);
        back = new QPushButton(levels);
        back->setObjectName("back");
        back->setGeometry(QRect(20, 670, 171, 81));
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color:  rgb(255, 32, 78);;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color:  rgb(255, 32, 78);;\n"
"    font-size: 48px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px; \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: rgb(160, 21, 62); /* Background color when pressed */\n"
"}\n"
"\n"
""));
        title_2->raise();
        title_3->raise();
        level2->raise();
        level3->raise();
        level4->raise();
        level5->raise();
        back->raise();
        level1->raise();

        retranslateUi(levels);

        QMetaObject::connectSlotsByName(levels);
    } // setupUi

    void retranslateUi(QWidget *levels)
    {
        levels->setWindowTitle(QCoreApplication::translate("levels", "Form", nullptr));
        level1->setText(QCoreApplication::translate("levels", "Level 1", nullptr));
        level2->setText(QCoreApplication::translate("levels", "Level 2", nullptr));
        level3->setText(QCoreApplication::translate("levels", "Level 3", nullptr));
        level4->setText(QCoreApplication::translate("levels", "Level 4", nullptr));
        level5->setText(QCoreApplication::translate("levels", "Level 5", nullptr));
        title_2->setText(QCoreApplication::translate("levels", "CHOOSE LEVEL", nullptr));
        title_3->setText(QCoreApplication::translate("levels", "CHOOSE LEVEL", nullptr));
        back->setText(QCoreApplication::translate("levels", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class levels: public Ui_levels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELS_H
