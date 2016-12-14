/********************************************************************************
** Form generated from reading UI file 'subwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWINDOW_H
#define UI_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PSITool
{
public:
    QPushButton *backButton;
    QLabel *windowLabel;
    QTextBrowser *textBrowser;
    QPushButton *startButton;
    QLineEdit *lineEditPathA;
    QLabel *labelPathA;
    QLabel *labelPathB;
    QLineEdit *lineEditPathB;
    QPushButton *browserPathAButton;
    QPushButton *browserPathBButton;
    QPushButton *browserPathResultButton;
    QLabel *labelPathResult;
    QLineEdit *lineEditPathResult;
    QLabel *labelBackButton;
    QLabel *labelStartButton;
    QCheckBox *checkBoxOutput;
    QLineEdit *lineEditElementSize;
    QLabel *labelElementSize;
    QLabel *labelReadBufferSize;
    QLineEdit *lineEditReadBufferSize;
    QLineEdit *lineEditWriteBufferSize;
    QLabel *labelWriteBufferSize;
    QLabel *labelThreads;
    QLineEdit *lineEditThreads;
    QLineEdit *lineEditNumberOfBuckets;
    QLabel *labelNumberOfBuckets;
    QLineEdit *lineEditQueueBufferSize;
    QLabel *labelQueueBufferSize;
    QLineEdit *lineEditPathBuckets;
    QLabel *labelPathBuckets;
    QPushButton *browserPathBucketsButton;
    QLineEdit *lineEditHashSeed1;
    QLabel *labelSeed1;
    QLineEdit *lineEditHashSeed2;
    QLabel *labelSeed2;
    QLineEdit *lineEditHashSeed3;
    QLabel *labelSeed3;
    QLineEdit *lineEditTableSizeMultiplier;
    QLabel *labelTableSizeMultiplier;
    QLineEdit *lineEditRecursiveDeepnessLimit;
    QLabel *labelRecursiveDeepnessLimit;
    QLineEdit *lineEditIP;
    QLabel *labelIP;
    QLineEdit *lineEditPathResultB;
    QLabel *labelPathResultB;
    QPushButton *browserPathResultButtonB;
    QLineEdit *lineEditPort;
    QLabel *labelPort;
    QLineEdit *lineEditTableSize;
    QLabel *labelTableSize;
    QCheckBox *checkBoxReduction;

    void setupUi(QWidget *PSITool)
    {
        if (PSITool->objectName().isEmpty())
            PSITool->setObjectName(QString::fromUtf8("PSITool"));
        PSITool->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PSITool->sizePolicy().hasHeightForWidth());
        PSITool->setSizePolicy(sizePolicy);
        PSITool->setMinimumSize(QSize(1024, 768));
        PSITool->setMaximumSize(QSize(1024, 768));
        PSITool->setFocusPolicy(Qt::StrongFocus);
        backButton = new QPushButton(PSITool);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 10, 64, 64));
        backButton->setMinimumSize(QSize(64, 64));
        backButton->setMaximumSize(QSize(64, 64));
        backButton->setFocusPolicy(Qt::ClickFocus);
        backButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/resources/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(64, 64));
        backButton->setFlat(false);
        windowLabel = new QLabel(PSITool);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));
        windowLabel->setGeometry(QRect(70, 0, 881, 61));
        QFont font;
        font.setPointSize(18);
        windowLabel->setFont(font);
        windowLabel->setFocusPolicy(Qt::ClickFocus);
        windowLabel->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(PSITool);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(510, 270, 501, 481));
        textBrowser->setFocusPolicy(Qt::ClickFocus);
        startButton = new QPushButton(PSITool);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(950, 10, 64, 64));
        startButton->setMinimumSize(QSize(64, 64));
        startButton->setMaximumSize(QSize(64, 64));
        startButton->setFocusPolicy(Qt::ClickFocus);
        startButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/resources/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);
        startButton->setIconSize(QSize(64, 64));
        startButton->setFlat(false);
        lineEditPathA = new QLineEdit(PSITool);
        lineEditPathA->setObjectName(QString::fromUtf8("lineEditPathA"));
        lineEditPathA->setGeometry(QRect(10, 250, 411, 31));
        lineEditPathA->setFocusPolicy(Qt::ClickFocus);
        labelPathA = new QLabel(PSITool);
        labelPathA->setObjectName(QString::fromUtf8("labelPathA"));
        labelPathA->setGeometry(QRect(20, 230, 381, 20));
        labelPathA->setFocusPolicy(Qt::ClickFocus);
        labelPathB = new QLabel(PSITool);
        labelPathB->setObjectName(QString::fromUtf8("labelPathB"));
        labelPathB->setGeometry(QRect(20, 290, 381, 20));
        labelPathB->setFocusPolicy(Qt::ClickFocus);
        lineEditPathB = new QLineEdit(PSITool);
        lineEditPathB->setObjectName(QString::fromUtf8("lineEditPathB"));
        lineEditPathB->setGeometry(QRect(10, 310, 411, 31));
        lineEditPathB->setFocusPolicy(Qt::ClickFocus);
        browserPathAButton = new QPushButton(PSITool);
        browserPathAButton->setObjectName(QString::fromUtf8("browserPathAButton"));
        browserPathAButton->setGeometry(QRect(450, 250, 30, 30));
        browserPathAButton->setFocusPolicy(Qt::ClickFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/resources/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        browserPathAButton->setIcon(icon2);
        browserPathBButton = new QPushButton(PSITool);
        browserPathBButton->setObjectName(QString::fromUtf8("browserPathBButton"));
        browserPathBButton->setGeometry(QRect(450, 310, 30, 30));
        browserPathBButton->setFocusPolicy(Qt::ClickFocus);
        browserPathBButton->setIcon(icon2);
        browserPathResultButton = new QPushButton(PSITool);
        browserPathResultButton->setObjectName(QString::fromUtf8("browserPathResultButton"));
        browserPathResultButton->setGeometry(QRect(450, 370, 30, 30));
        browserPathResultButton->setFocusPolicy(Qt::ClickFocus);
        browserPathResultButton->setIcon(icon2);
        labelPathResult = new QLabel(PSITool);
        labelPathResult->setObjectName(QString::fromUtf8("labelPathResult"));
        labelPathResult->setGeometry(QRect(20, 350, 381, 20));
        labelPathResult->setFocusPolicy(Qt::ClickFocus);
        lineEditPathResult = new QLineEdit(PSITool);
        lineEditPathResult->setObjectName(QString::fromUtf8("lineEditPathResult"));
        lineEditPathResult->setGeometry(QRect(10, 370, 411, 31));
        lineEditPathResult->setFocusPolicy(Qt::ClickFocus);
        labelBackButton = new QLabel(PSITool);
        labelBackButton->setObjectName(QString::fromUtf8("labelBackButton"));
        labelBackButton->setGeometry(QRect(10, 70, 61, 20));
        labelBackButton->setFocusPolicy(Qt::ClickFocus);
        labelBackButton->setAlignment(Qt::AlignCenter);
        labelStartButton = new QLabel(PSITool);
        labelStartButton->setObjectName(QString::fromUtf8("labelStartButton"));
        labelStartButton->setGeometry(QRect(950, 70, 61, 20));
        labelStartButton->setFocusPolicy(Qt::ClickFocus);
        labelStartButton->setAlignment(Qt::AlignCenter);
        checkBoxOutput = new QCheckBox(PSITool);
        checkBoxOutput->setObjectName(QString::fromUtf8("checkBoxOutput"));
        checkBoxOutput->setGeometry(QRect(890, 240, 121, 25));
        checkBoxOutput->setFocusPolicy(Qt::ClickFocus);
        checkBoxOutput->setChecked(true);
        lineEditElementSize = new QLineEdit(PSITool);
        lineEditElementSize->setObjectName(QString::fromUtf8("lineEditElementSize"));
        lineEditElementSize->setGeometry(QRect(10, 610, 181, 30));
        lineEditElementSize->setFocusPolicy(Qt::ClickFocus);
        labelElementSize = new QLabel(PSITool);
        labelElementSize->setObjectName(QString::fromUtf8("labelElementSize"));
        labelElementSize->setGeometry(QRect(10, 590, 181, 20));
        labelElementSize->setFocusPolicy(Qt::ClickFocus);
        labelElementSize->setAlignment(Qt::AlignCenter);
        labelReadBufferSize = new QLabel(PSITool);
        labelReadBufferSize->setObjectName(QString::fromUtf8("labelReadBufferSize"));
        labelReadBufferSize->setGeometry(QRect(240, 590, 181, 20));
        labelReadBufferSize->setFocusPolicy(Qt::ClickFocus);
        labelReadBufferSize->setAlignment(Qt::AlignCenter);
        lineEditReadBufferSize = new QLineEdit(PSITool);
        lineEditReadBufferSize->setObjectName(QString::fromUtf8("lineEditReadBufferSize"));
        lineEditReadBufferSize->setGeometry(QRect(240, 610, 181, 30));
        lineEditReadBufferSize->setFocusPolicy(Qt::ClickFocus);
        lineEditWriteBufferSize = new QLineEdit(PSITool);
        lineEditWriteBufferSize->setObjectName(QString::fromUtf8("lineEditWriteBufferSize"));
        lineEditWriteBufferSize->setGeometry(QRect(240, 680, 181, 30));
        lineEditWriteBufferSize->setFocusPolicy(Qt::ClickFocus);
        labelWriteBufferSize = new QLabel(PSITool);
        labelWriteBufferSize->setObjectName(QString::fromUtf8("labelWriteBufferSize"));
        labelWriteBufferSize->setGeometry(QRect(240, 660, 181, 20));
        labelWriteBufferSize->setFocusPolicy(Qt::ClickFocus);
        labelWriteBufferSize->setAlignment(Qt::AlignCenter);
        labelThreads = new QLabel(PSITool);
        labelThreads->setObjectName(QString::fromUtf8("labelThreads"));
        labelThreads->setGeometry(QRect(10, 100, 61, 20));
        labelThreads->setFocusPolicy(Qt::ClickFocus);
        labelThreads->setAlignment(Qt::AlignCenter);
        lineEditThreads = new QLineEdit(PSITool);
        lineEditThreads->setObjectName(QString::fromUtf8("lineEditThreads"));
        lineEditThreads->setGeometry(QRect(10, 120, 61, 30));
        lineEditThreads->setFocusPolicy(Qt::ClickFocus);
        lineEditNumberOfBuckets = new QLineEdit(PSITool);
        lineEditNumberOfBuckets->setObjectName(QString::fromUtf8("lineEditNumberOfBuckets"));
        lineEditNumberOfBuckets->setGeometry(QRect(90, 120, 151, 30));
        lineEditNumberOfBuckets->setFocusPolicy(Qt::ClickFocus);
        labelNumberOfBuckets = new QLabel(PSITool);
        labelNumberOfBuckets->setObjectName(QString::fromUtf8("labelNumberOfBuckets"));
        labelNumberOfBuckets->setGeometry(QRect(90, 100, 151, 20));
        labelNumberOfBuckets->setFocusPolicy(Qt::ClickFocus);
        labelNumberOfBuckets->setAlignment(Qt::AlignCenter);
        lineEditQueueBufferSize = new QLineEdit(PSITool);
        lineEditQueueBufferSize->setObjectName(QString::fromUtf8("lineEditQueueBufferSize"));
        lineEditQueueBufferSize->setGeometry(QRect(10, 680, 181, 30));
        lineEditQueueBufferSize->setFocusPolicy(Qt::ClickFocus);
        labelQueueBufferSize = new QLabel(PSITool);
        labelQueueBufferSize->setObjectName(QString::fromUtf8("labelQueueBufferSize"));
        labelQueueBufferSize->setGeometry(QRect(10, 660, 181, 20));
        labelQueueBufferSize->setFocusPolicy(Qt::ClickFocus);
        labelQueueBufferSize->setAlignment(Qt::AlignCenter);
        lineEditPathBuckets = new QLineEdit(PSITool);
        lineEditPathBuckets->setObjectName(QString::fromUtf8("lineEditPathBuckets"));
        lineEditPathBuckets->setGeometry(QRect(10, 490, 411, 31));
        lineEditPathBuckets->setFocusPolicy(Qt::ClickFocus);
        labelPathBuckets = new QLabel(PSITool);
        labelPathBuckets->setObjectName(QString::fromUtf8("labelPathBuckets"));
        labelPathBuckets->setGeometry(QRect(20, 470, 381, 20));
        labelPathBuckets->setFocusPolicy(Qt::ClickFocus);
        browserPathBucketsButton = new QPushButton(PSITool);
        browserPathBucketsButton->setObjectName(QString::fromUtf8("browserPathBucketsButton"));
        browserPathBucketsButton->setGeometry(QRect(450, 490, 30, 30));
        browserPathBucketsButton->setFocusPolicy(Qt::ClickFocus);
        browserPathBucketsButton->setIcon(icon2);
        lineEditHashSeed1 = new QLineEdit(PSITool);
        lineEditHashSeed1->setObjectName(QString::fromUtf8("lineEditHashSeed1"));
        lineEditHashSeed1->setGeometry(QRect(10, 190, 311, 30));
        lineEditHashSeed1->setFocusPolicy(Qt::ClickFocus);
        lineEditHashSeed1->setMaxLength(32);
        labelSeed1 = new QLabel(PSITool);
        labelSeed1->setObjectName(QString::fromUtf8("labelSeed1"));
        labelSeed1->setGeometry(QRect(10, 170, 311, 20));
        labelSeed1->setFocusPolicy(Qt::ClickFocus);
        labelSeed1->setAlignment(Qt::AlignCenter);
        lineEditHashSeed2 = new QLineEdit(PSITool);
        lineEditHashSeed2->setObjectName(QString::fromUtf8("lineEditHashSeed2"));
        lineEditHashSeed2->setGeometry(QRect(350, 190, 311, 30));
        lineEditHashSeed2->setFocusPolicy(Qt::ClickFocus);
        lineEditHashSeed2->setMaxLength(32);
        labelSeed2 = new QLabel(PSITool);
        labelSeed2->setObjectName(QString::fromUtf8("labelSeed2"));
        labelSeed2->setGeometry(QRect(350, 170, 311, 20));
        labelSeed2->setFocusPolicy(Qt::ClickFocus);
        labelSeed2->setAlignment(Qt::AlignCenter);
        lineEditHashSeed3 = new QLineEdit(PSITool);
        lineEditHashSeed3->setObjectName(QString::fromUtf8("lineEditHashSeed3"));
        lineEditHashSeed3->setGeometry(QRect(690, 190, 311, 30));
        lineEditHashSeed3->setFocusPolicy(Qt::ClickFocus);
        lineEditHashSeed3->setMaxLength(32);
        labelSeed3 = new QLabel(PSITool);
        labelSeed3->setObjectName(QString::fromUtf8("labelSeed3"));
        labelSeed3->setGeometry(QRect(690, 170, 311, 20));
        labelSeed3->setFocusPolicy(Qt::ClickFocus);
        labelSeed3->setAlignment(Qt::AlignCenter);
        lineEditTableSizeMultiplier = new QLineEdit(PSITool);
        lineEditTableSizeMultiplier->setObjectName(QString::fromUtf8("lineEditTableSizeMultiplier"));
        lineEditTableSizeMultiplier->setGeometry(QRect(260, 120, 141, 30));
        lineEditTableSizeMultiplier->setFocusPolicy(Qt::ClickFocus);
        labelTableSizeMultiplier = new QLabel(PSITool);
        labelTableSizeMultiplier->setObjectName(QString::fromUtf8("labelTableSizeMultiplier"));
        labelTableSizeMultiplier->setGeometry(QRect(260, 100, 141, 20));
        labelTableSizeMultiplier->setFocusPolicy(Qt::ClickFocus);
        labelTableSizeMultiplier->setAlignment(Qt::AlignCenter);
        lineEditRecursiveDeepnessLimit = new QLineEdit(PSITool);
        lineEditRecursiveDeepnessLimit->setObjectName(QString::fromUtf8("lineEditRecursiveDeepnessLimit"));
        lineEditRecursiveDeepnessLimit->setGeometry(QRect(620, 120, 111, 30));
        lineEditRecursiveDeepnessLimit->setFocusPolicy(Qt::ClickFocus);
        labelRecursiveDeepnessLimit = new QLabel(PSITool);
        labelRecursiveDeepnessLimit->setObjectName(QString::fromUtf8("labelRecursiveDeepnessLimit"));
        labelRecursiveDeepnessLimit->setGeometry(QRect(620, 100, 111, 20));
        labelRecursiveDeepnessLimit->setFocusPolicy(Qt::ClickFocus);
        labelRecursiveDeepnessLimit->setAlignment(Qt::AlignCenter);
        lineEditIP = new QLineEdit(PSITool);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        lineEditIP->setGeometry(QRect(870, 120, 131, 30));
        lineEditIP->setFocusPolicy(Qt::ClickFocus);
        labelIP = new QLabel(PSITool);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));
        labelIP->setGeometry(QRect(870, 100, 131, 20));
        labelIP->setFocusPolicy(Qt::ClickFocus);
        labelIP->setAlignment(Qt::AlignCenter);
        lineEditPathResultB = new QLineEdit(PSITool);
        lineEditPathResultB->setObjectName(QString::fromUtf8("lineEditPathResultB"));
        lineEditPathResultB->setGeometry(QRect(10, 430, 411, 31));
        lineEditPathResultB->setFocusPolicy(Qt::ClickFocus);
        labelPathResultB = new QLabel(PSITool);
        labelPathResultB->setObjectName(QString::fromUtf8("labelPathResultB"));
        labelPathResultB->setGeometry(QRect(20, 410, 381, 20));
        labelPathResultB->setFocusPolicy(Qt::ClickFocus);
        browserPathResultButtonB = new QPushButton(PSITool);
        browserPathResultButtonB->setObjectName(QString::fromUtf8("browserPathResultButtonB"));
        browserPathResultButtonB->setGeometry(QRect(450, 430, 30, 30));
        browserPathResultButtonB->setFocusPolicy(Qt::ClickFocus);
        browserPathResultButtonB->setIcon(icon2);
        lineEditPort = new QLineEdit(PSITool);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setGeometry(QRect(790, 120, 71, 30));
        lineEditPort->setFocusPolicy(Qt::ClickFocus);
        labelPort = new QLabel(PSITool);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setGeometry(QRect(790, 100, 71, 20));
        labelPort->setFocusPolicy(Qt::ClickFocus);
        labelPort->setAlignment(Qt::AlignCenter);
        lineEditTableSize = new QLineEdit(PSITool);
        lineEditTableSize->setObjectName(QString::fromUtf8("lineEditTableSize"));
        lineEditTableSize->setGeometry(QRect(420, 120, 181, 30));
        lineEditTableSize->setFocusPolicy(Qt::ClickFocus);
        labelTableSize = new QLabel(PSITool);
        labelTableSize->setObjectName(QString::fromUtf8("labelTableSize"));
        labelTableSize->setGeometry(QRect(420, 100, 181, 20));
        labelTableSize->setFocusPolicy(Qt::ClickFocus);
        labelTableSize->setAlignment(Qt::AlignCenter);
        checkBoxReduction = new QCheckBox(PSITool);
        checkBoxReduction->setObjectName(QString::fromUtf8("checkBoxReduction"));
        checkBoxReduction->setEnabled(true);
        checkBoxReduction->setGeometry(QRect(10, 550, 83, 18));
        checkBoxReduction->setFocusPolicy(Qt::ClickFocus);

        retranslateUi(PSITool);

        QMetaObject::connectSlotsByName(PSITool);
    } // setupUi

    void retranslateUi(QWidget *PSITool)
    {
        PSITool->setWindowTitle(QApplication::translate("PSITool", "PSI Tool", 0, QApplication::UnicodeUTF8));
        backButton->setText(QString());
        windowLabel->setText(QString());
        startButton->setText(QString());
        labelPathA->setText(QApplication::translate("PSITool", "Path A", 0, QApplication::UnicodeUTF8));
        labelPathB->setText(QApplication::translate("PSITool", "Path B", 0, QApplication::UnicodeUTF8));
        browserPathAButton->setText(QString());
        browserPathBButton->setText(QString());
        browserPathResultButton->setText(QString());
        labelPathResult->setText(QApplication::translate("PSITool", "Path result", 0, QApplication::UnicodeUTF8));
        labelBackButton->setText(QApplication::translate("PSITool", "Back", 0, QApplication::UnicodeUTF8));
        labelStartButton->setText(QApplication::translate("PSITool", "Start", 0, QApplication::UnicodeUTF8));
        checkBoxOutput->setText(QApplication::translate("PSITool", "Show output", 0, QApplication::UnicodeUTF8));
        lineEditElementSize->setText(QApplication::translate("PSITool", "16", 0, QApplication::UnicodeUTF8));
        labelElementSize->setText(QApplication::translate("PSITool", "Element size", 0, QApplication::UnicodeUTF8));
        labelReadBufferSize->setText(QApplication::translate("PSITool", "Read buffer size", 0, QApplication::UnicodeUTF8));
        lineEditReadBufferSize->setText(QApplication::translate("PSITool", "100000", 0, QApplication::UnicodeUTF8));
        lineEditWriteBufferSize->setText(QApplication::translate("PSITool", "50000", 0, QApplication::UnicodeUTF8));
        labelWriteBufferSize->setText(QApplication::translate("PSITool", "Write buffer size", 0, QApplication::UnicodeUTF8));
        labelThreads->setText(QApplication::translate("PSITool", "Threads", 0, QApplication::UnicodeUTF8));
        lineEditThreads->setText(QApplication::translate("PSITool", "4", 0, QApplication::UnicodeUTF8));
        lineEditNumberOfBuckets->setText(QApplication::translate("PSITool", "1000", 0, QApplication::UnicodeUTF8));
        lineEditNumberOfBuckets->setPlaceholderText(QApplication::translate("PSITool", "Divisor of elem. #", 0, QApplication::UnicodeUTF8));
        labelNumberOfBuckets->setText(QApplication::translate("PSITool", "Number of buckets", 0, QApplication::UnicodeUTF8));
        lineEditQueueBufferSize->setText(QApplication::translate("PSITool", "1000", 0, QApplication::UnicodeUTF8));
        labelQueueBufferSize->setText(QApplication::translate("PSITool", "Queue buffer size", 0, QApplication::UnicodeUTF8));
        labelPathBuckets->setText(QApplication::translate("PSITool", "Path buckets", 0, QApplication::UnicodeUTF8));
        browserPathBucketsButton->setText(QString());
        lineEditHashSeed1->setText(QApplication::translate("PSITool", "77777777777777777777777777777777", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed1->setPlaceholderText(QApplication::translate("PSITool", "16-Byte", 0, QApplication::UnicodeUTF8));
        labelSeed1->setText(QApplication::translate("PSITool", "Hash seed #1", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed2->setText(QApplication::translate("PSITool", "0123456789ABCDEF0123456789ABCDEF", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed2->setPlaceholderText(QApplication::translate("PSITool", "16-Byte", 0, QApplication::UnicodeUTF8));
        labelSeed2->setText(QApplication::translate("PSITool", "Hash seed #2", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed3->setText(QApplication::translate("PSITool", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed3->setPlaceholderText(QApplication::translate("PSITool", "16-Byte", 0, QApplication::UnicodeUTF8));
        labelSeed3->setText(QApplication::translate("PSITool", "Hash seed #3", 0, QApplication::UnicodeUTF8));
        lineEditTableSizeMultiplier->setText(QApplication::translate("PSITool", "1.2", 0, QApplication::UnicodeUTF8));
        labelTableSizeMultiplier->setText(QApplication::translate("PSITool", "Table size multiplier", 0, QApplication::UnicodeUTF8));
        lineEditRecursiveDeepnessLimit->setText(QApplication::translate("PSITool", "2000", 0, QApplication::UnicodeUTF8));
        labelRecursiveDeepnessLimit->setText(QApplication::translate("PSITool", "Deepness limit", 0, QApplication::UnicodeUTF8));
        lineEditIP->setText(QApplication::translate("PSITool", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        labelIP->setText(QApplication::translate("PSITool", "IP", 0, QApplication::UnicodeUTF8));
        labelPathResultB->setText(QApplication::translate("PSITool", "Path result B", 0, QApplication::UnicodeUTF8));
        browserPathResultButtonB->setText(QString());
        lineEditPort->setText(QApplication::translate("PSITool", "7777", 0, QApplication::UnicodeUTF8));
        labelPort->setText(QApplication::translate("PSITool", "Port", 0, QApplication::UnicodeUTF8));
        lineEditTableSize->setText(QApplication::translate("PSITool", "1200", 0, QApplication::UnicodeUTF8));
        lineEditTableSize->setPlaceholderText(QApplication::translate("PSITool", "Stronger then multiplier", 0, QApplication::UnicodeUTF8));
        labelTableSize->setText(QApplication::translate("PSITool", "Table size", 0, QApplication::UnicodeUTF8));
        checkBoxReduction->setText(QApplication::translate("PSITool", "Reduction", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PSITool: public Ui_PSITool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
