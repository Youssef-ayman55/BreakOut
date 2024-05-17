/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QLabel *title;
    QLabel *title_2;
    QPushButton *backM;
    QSlider *bgslider;
    QGroupBox *groupBox;
    QPushButton *bgvolume;
    QGroupBox *groupBox_2;
    QSlider *effects;
    QPushButton *back_3;

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName("settings");
        settings->resize(1200, 800);
        QPalette palette;
        QBrush brush(QColor(3, 6, 55, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        settings->setPalette(palette);
        title = new QLabel(settings);
        title->setObjectName("title");
        title->setGeometry(QRect(94, 10, 1012, 311));
        QPalette palette1;
        QBrush brush1(QColor(76, 255, 183, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        title->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(64);
        title->setFont(font);
        title->setTextFormat(Qt::AutoText);
        title->setAlignment(Qt::AlignCenter);
        title_2 = new QLabel(settings);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(90, 15, 1012, 311));
        QPalette palette2;
        QBrush brush2(QColor(255, 32, 78, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        title_2->setPalette(palette2);
        title_2->setFont(font);
        title_2->setTextFormat(Qt::AutoText);
        title_2->setAlignment(Qt::AlignCenter);
        backM = new QPushButton(settings);
        backM->setObjectName("backM");
        backM->setGeometry(QRect(20, 670, 171, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setBold(false);
        font1.setItalic(false);
        backM->setFont(font1);
        backM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bgslider = new QSlider(settings);
        bgslider->setObjectName("bgslider");
        bgslider->setGeometry(QRect(510, 330, 330, 70));
        bgslider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #bbb;\n"
"    background: white;\n"
"    height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #4cffb7; /* Color before the handle */\n"
"    border: 1px solid #4cffb7;\n"
"    height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: white; /* Color after the handle */\n"
"    border: 1px solid #4cffb7;\n"
"    height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #ff204e;\n"
"    border: 1px solid #ff204e;\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 9px;\n"
"    margin: -5px 0; /* handle is placed by default in the center of the groove */\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: #ff204e; /* Same as handle color on hover */\n"
"    border: 1px solid #ff204e;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"    background: #ff204e; /* Same as handle"
                        " color on press */\n"
"    border: 1px solid #ff204e;\n"
"}\n"
""));
        bgslider->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(settings);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(350, 310, 521, 101));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        groupBox->setPalette(palette3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(12);
        groupBox->setFont(font2);
        bgvolume = new QPushButton(groupBox);
        bgvolume->setObjectName("bgvolume");
        bgvolume->setGeometry(QRect(40, 30, 71, 61));
        bgvolume->setFont(font1);
        bgvolume->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color: white;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: rgb(255, 32, 78);\n"
"    font: 48px;\n"
"    padding: 6px;\n"
"	 qproperty-iconSize: 32px 32px;\n"
"}\n"
"QPushButton::icon {\n"
"    color: #4cffb7; /* Color of the icon, if it supports coloring */\n"
"\n"
"}"));
        bgvolume->setIconSize(QSize(32, 32));
        groupBox_2 = new QGroupBox(settings);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(350, 450, 521, 101));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        groupBox_2->setPalette(palette4);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Showcard Gothic")});
        groupBox_2->setFont(font3);
        effects = new QSlider(groupBox_2);
        effects->setObjectName("effects");
        effects->setGeometry(QRect(160, 20, 330, 70));
        effects->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #bbb;\n"
"    background: white;\n"
"    height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #4cffb7; /* Color before the handle */\n"
"    border: 1px solid #4cffb7;\n"
"    height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: white; /* Color after the handle */\n"
"    border: 1px solid #4cffb7;\n"
"    height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #ff204e;\n"
"    border: 1px solid #ff204e;\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border-radius: 9px;\n"
"    margin: -5px 0; /* handle is placed by default in the center of the groove */\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: #ff204e; /* Same as handle color on hover */\n"
"    border: 1px solid #ff204e;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:pressed {\n"
"    background: #ff204e; /* Same as handle"
                        " color on press */\n"
"    border: 1px solid #ff204e;\n"
"}\n"
""));
        effects->setOrientation(Qt::Horizontal);
        back_3 = new QPushButton(groupBox_2);
        back_3->setObjectName("back_3");
        back_3->setGeometry(QRect(40, 30, 71, 61));
        back_3->setFont(font1);
        back_3->setStyleSheet(QString::fromUtf8(" background-color: rgb(93, 14, 65);\n"
"    border-style: solid;\n"
"    color: rgb(255, 32, 78);\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: rgb(255, 32, 78);\n"
"    font: 48px;\n"
"    padding: 6px;\n"
""));
        groupBox_2->raise();
        groupBox->raise();
        title->raise();
        title_2->raise();
        backM->raise();
        bgslider->raise();

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Form", nullptr));
        title->setText(QCoreApplication::translate("settings", "SETTINGS", nullptr));
        title_2->setText(QCoreApplication::translate("settings", "SETTINGS", nullptr));
        backM->setText(QCoreApplication::translate("settings", "Back", nullptr));
        groupBox->setTitle(QCoreApplication::translate("settings", "Background Music", nullptr));
        bgvolume->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("settings", "Sound Effects", nullptr));
        back_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
