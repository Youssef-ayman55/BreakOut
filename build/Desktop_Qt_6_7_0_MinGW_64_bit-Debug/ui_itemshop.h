/********************************************************************************
** Form generated from reading UI file 'itemshop.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSHOP_H
#define UI_ITEMSHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemShop
{
public:
    QLabel *title;
    QLabel *title_2;
    QGroupBox *featured;
    QGroupBox *fireball;
    QPushButton *sellf;
    QPushButton *addf;
    QLabel *fireimage;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *Hugeball;
    QLabel *label_3;
    QPushButton *sellH;
    QPushButton *addH;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *hugeballimage;
    QGroupBox *Weapons;
    QLabel *label_5;
    QPushButton *addW;
    QPushButton *sellW;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *weaponimage;
    QGroupBox *ExtendS;
    QLabel *label_6;
    QPushButton *sellS;
    QPushButton *addS;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *sliderimage;
    QLabel *label;
    QPushButton *backM;

    void setupUi(QWidget *ItemShop)
    {
        if (ItemShop->objectName().isEmpty())
            ItemShop->setObjectName("ItemShop");
        ItemShop->resize(1200, 800);
        QPalette palette;
        QBrush brush(QColor(3, 6, 55, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ItemShop->setPalette(palette);
        title = new QLabel(ItemShop);
        title->setObjectName("title");
        title->setGeometry(QRect(90, 15, 1012, 311));
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
        title_2 = new QLabel(ItemShop);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(94, 10, 1012, 311));
        QPalette palette2;
        QBrush brush2(QColor(255, 32, 78, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        title_2->setPalette(palette2);
        title_2->setFont(font);
        title_2->setTextFormat(Qt::AutoText);
        title_2->setAlignment(Qt::AlignCenter);
        featured = new QGroupBox(ItemShop);
        featured->setObjectName("featured");
        featured->setGeometry(QRect(20, 220, 1151, 441));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        featured->setPalette(palette3);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setPointSize(12);
        featured->setFont(font1);
        featured->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"border-width:5px;\n"
"border-color:white;\n"
"\n"
"}"));
        fireball = new QGroupBox(featured);
        fireball->setObjectName("fireball");
        fireball->setGeometry(QRect(30, 50, 250, 241));
        QPalette palette4;
        fireball->setPalette(palette4);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(10);
        fireball->setFont(font2);
        sellf = new QPushButton(fireball);
        sellf->setObjectName("sellf");
        sellf->setGeometry(QRect(180, 200, 61, 29));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Showcard Gothic")});
        sellf->setFont(font3);
        sellf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        addf = new QPushButton(fireball);
        addf->setObjectName("addf");
        addf->setGeometry(QRect(10, 200, 61, 29));
        addf->setFont(font3);
        addf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        fireimage = new QLabel(fireball);
        fireimage->setObjectName("fireimage");
        fireimage->setGeometry(QRect(70, 70, 131, 111));
        label_7 = new QLabel(fireball);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 200, 63, 20));
        label_8 = new QLabel(fireball);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 30, 63, 20));
        label_9 = new QLabel(fireball);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 0, 131, 20));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        label_9->setPalette(palette5);
        label_9->setFont(font2);
        Hugeball = new QGroupBox(featured);
        Hugeball->setObjectName("Hugeball");
        Hugeball->setGeometry(QRect(310, 50, 250, 241));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        Hugeball->setPalette(palette6);
        Hugeball->setFont(font2);
        label_3 = new QLabel(Hugeball);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 0, 131, 20));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        label_3->setPalette(palette7);
        label_3->setFont(font2);
        sellH = new QPushButton(Hugeball);
        sellH->setObjectName("sellH");
        sellH->setGeometry(QRect(180, 200, 61, 29));
        sellH->setFont(font3);
        sellH->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        addH = new QPushButton(Hugeball);
        addH->setObjectName("addH");
        addH->setGeometry(QRect(10, 200, 61, 29));
        addH->setFont(font3);
        addH->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        label_11 = new QLabel(Hugeball);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(80, 200, 63, 20));
        label_12 = new QLabel(Hugeball);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 30, 63, 20));
        hugeballimage = new QLabel(Hugeball);
        hugeballimage->setObjectName("hugeballimage");
        hugeballimage->setGeometry(QRect(70, 70, 131, 111));
        Weapons = new QGroupBox(featured);
        Weapons->setObjectName("Weapons");
        Weapons->setGeometry(QRect(590, 50, 250, 241));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        Weapons->setPalette(palette8);
        Weapons->setFont(font2);
        label_5 = new QLabel(Weapons);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 0, 101, 20));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        label_5->setPalette(palette9);
        label_5->setFont(font2);
        addW = new QPushButton(Weapons);
        addW->setObjectName("addW");
        addW->setGeometry(QRect(10, 200, 61, 29));
        addW->setFont(font3);
        addW->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        sellW = new QPushButton(Weapons);
        sellW->setObjectName("sellW");
        sellW->setGeometry(QRect(180, 200, 61, 29));
        sellW->setFont(font3);
        sellW->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        label_14 = new QLabel(Weapons);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 30, 63, 20));
        label_15 = new QLabel(Weapons);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(100, 200, 63, 20));
        weaponimage = new QLabel(Weapons);
        weaponimage->setObjectName("weaponimage");
        weaponimage->setGeometry(QRect(70, 70, 131, 111));
        ExtendS = new QGroupBox(featured);
        ExtendS->setObjectName("ExtendS");
        ExtendS->setGeometry(QRect(870, 50, 250, 241));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        ExtendS->setPalette(palette10);
        ExtendS->setFont(font2);
        label_6 = new QLabel(ExtendS);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 0, 141, 20));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        label_6->setPalette(palette11);
        label_6->setFont(font2);
        sellS = new QPushButton(ExtendS);
        sellS->setObjectName("sellS");
        sellS->setGeometry(QRect(180, 200, 61, 29));
        sellS->setFont(font3);
        sellS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        addS = new QPushButton(ExtendS);
        addS->setObjectName("addS");
        addS->setGeometry(QRect(10, 200, 61, 29));
        addS->setFont(font3);
        addS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #1e6649;\n"
"    border-style: solid;\n"
"    color: #4cffb7;\n"
"    border-width: 5px;\n"
"    border-radius: 20px;\n"
"    border-color: #4cffb7;\n"
"    font-size: 10px; /* Corrected from 'font: 48px' */\n"
"    padding: 6px;\n"
"    background-image: url(qrc:/image/Resources/plus.png); /* Path to your image */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
"QPushButton::pressed {\n"
"    background-color: #1abc9c; /* Background color when pressed */\n"
"}\n"
"\n"
""));
        label_17 = new QLabel(ExtendS);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(80, 200, 63, 20));
        label_18 = new QLabel(ExtendS);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 30, 63, 20));
        sliderimage = new QLabel(ExtendS);
        sliderimage->setObjectName("sliderimage");
        sliderimage->setGeometry(QRect(70, 70, 131, 111));
        label = new QLabel(ItemShop);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 220, 101, 20));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        label->setPalette(palette12);
        label->setFont(font1);
        backM = new QPushButton(ItemShop);
        backM->setObjectName("backM");
        backM->setGeometry(QRect(20, 670, 171, 81));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font4.setBold(false);
        font4.setItalic(false);
        backM->setFont(font4);
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
        backM->raise();
        label->raise();
        title->raise();
        title_2->raise();
        featured->raise();

        retranslateUi(ItemShop);

        QMetaObject::connectSlotsByName(ItemShop);
    } // setupUi

    void retranslateUi(QWidget *ItemShop)
    {
        ItemShop->setWindowTitle(QCoreApplication::translate("ItemShop", "Form", nullptr));
        title->setText(QCoreApplication::translate("ItemShop", "Item Shop", nullptr));
        title_2->setText(QCoreApplication::translate("ItemShop", "Item Shop", nullptr));
        featured->setTitle(QCoreApplication::translate("ItemShop", "Featured", nullptr));
        fireball->setTitle(QCoreApplication::translate("ItemShop", "Fire Ball", nullptr));
        sellf->setText(QCoreApplication::translate("ItemShop", "Sell", nullptr));
        addf->setText(QCoreApplication::translate("ItemShop", "Buy", nullptr));
        fireimage->setText(QString());
        label_7->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("ItemShop", "Fire Ball", nullptr));
        Hugeball->setTitle(QCoreApplication::translate("ItemShop", "Maximize Ball", nullptr));
        label_3->setText(QCoreApplication::translate("ItemShop", "Maximize Ball", nullptr));
        sellH->setText(QCoreApplication::translate("ItemShop", "Sell", nullptr));
        addH->setText(QCoreApplication::translate("ItemShop", "Buy", nullptr));
        label_11->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        hugeballimage->setText(QString());
        Weapons->setTitle(QCoreApplication::translate("ItemShop", "Weapons", nullptr));
        label_5->setText(QCoreApplication::translate("ItemShop", "Weapons", nullptr));
        addW->setText(QCoreApplication::translate("ItemShop", "Buy", nullptr));
        sellW->setText(QCoreApplication::translate("ItemShop", "Sell", nullptr));
        label_14->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        weaponimage->setText(QString());
        ExtendS->setTitle(QCoreApplication::translate("ItemShop", "Extend Slider", nullptr));
        label_6->setText(QCoreApplication::translate("ItemShop", "Extend Slider", nullptr));
        sellS->setText(QCoreApplication::translate("ItemShop", "Sell", nullptr));
        addS->setText(QCoreApplication::translate("ItemShop", "Buy", nullptr));
        label_17->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("ItemShop", "TextLabel", nullptr));
        sliderimage->setText(QString());
        label->setText(QCoreApplication::translate("ItemShop", "Featured", nullptr));
        backM->setText(QCoreApplication::translate("ItemShop", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemShop: public Ui_ItemShop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSHOP_H
