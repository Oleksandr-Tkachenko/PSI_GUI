/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PSI
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *OKButton;
    QStatusBar *statusbar;

    void setupUi(QWidget *PSI)
    {
        if (PSI->objectName().isEmpty())
            PSI->setObjectName(QString::fromUtf8("PSI"));
        PSI->resize(400, 65);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PSI->sizePolicy().hasHeightForWidth());
        PSI->setSizePolicy(sizePolicy);
        PSI->setMinimumSize(QSize(400, 65));
        PSI->setMaximumSize(QSize(400, 65));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/resources/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        PSI->setWindowIcon(icon);
        centralwidget = new QWidget(PSI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 391, 51));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 311, 31));
        OKButton = new QPushButton(centralwidget);
        OKButton->setObjectName(QString::fromUtf8("OKButton"));
        OKButton->setGeometry(QRect(340, 10, 41, 31));
        OKButton->setCheckable(true);
        statusbar = new QStatusBar(PSI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 25));

        retranslateUi(PSI);

        QMetaObject::connectSlotsByName(PSI);
    } // setupUi

    void retranslateUi(QWidget *PSI)
    {
        PSI->setWindowTitle(QApplication::translate("PSI", "PSI", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("PSI", "Intersection", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Cuckoo Hashing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Simple Hashing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Naive Hashing Server", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Naive Hashing Client", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Oblivious Transfer Server", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Oblivious Transfer Client", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Demonstrator Server", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PSI", "Demonstrator Client", 0, QApplication::UnicodeUTF8)
        );
        OKButton->setText(QApplication::translate("PSI", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PSI: public Ui_PSI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
