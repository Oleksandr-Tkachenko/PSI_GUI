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

class Ui_Form
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

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMinimumSize(QSize(1024, 768));
        Form->setMaximumSize(QSize(1024, 768));
        backButton = new QPushButton(Form);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 10, 64, 64));
        backButton->setMinimumSize(QSize(64, 64));
        backButton->setMaximumSize(QSize(64, 64));
        backButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/resources/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(64, 64));
        backButton->setFlat(false);
        windowLabel = new QLabel(Form);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));
        windowLabel->setGeometry(QRect(70, 10, 881, 61));
        QFont font;
        font.setPointSize(18);
        windowLabel->setFont(font);
        windowLabel->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(Form);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(510, 270, 501, 481));
        startButton = new QPushButton(Form);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(950, 10, 64, 64));
        startButton->setMinimumSize(QSize(64, 64));
        startButton->setMaximumSize(QSize(64, 64));
        startButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/resources/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon1);
        startButton->setIconSize(QSize(64, 64));
        startButton->setFlat(false);
        lineEditPathA = new QLineEdit(Form);
        lineEditPathA->setObjectName(QString::fromUtf8("lineEditPathA"));
        lineEditPathA->setGeometry(QRect(10, 290, 411, 31));
        labelPathA = new QLabel(Form);
        labelPathA->setObjectName(QString::fromUtf8("labelPathA"));
        labelPathA->setGeometry(QRect(20, 270, 381, 20));
        labelPathB = new QLabel(Form);
        labelPathB->setObjectName(QString::fromUtf8("labelPathB"));
        labelPathB->setGeometry(QRect(20, 330, 381, 20));
        lineEditPathB = new QLineEdit(Form);
        lineEditPathB->setObjectName(QString::fromUtf8("lineEditPathB"));
        lineEditPathB->setGeometry(QRect(10, 350, 411, 31));
        browserPathAButton = new QPushButton(Form);
        browserPathAButton->setObjectName(QString::fromUtf8("browserPathAButton"));
        browserPathAButton->setGeometry(QRect(450, 290, 30, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/resources/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        browserPathAButton->setIcon(icon2);
        browserPathBButton = new QPushButton(Form);
        browserPathBButton->setObjectName(QString::fromUtf8("browserPathBButton"));
        browserPathBButton->setGeometry(QRect(450, 350, 30, 30));
        browserPathBButton->setIcon(icon2);
        browserPathResultButton = new QPushButton(Form);
        browserPathResultButton->setObjectName(QString::fromUtf8("browserPathResultButton"));
        browserPathResultButton->setGeometry(QRect(450, 410, 30, 30));
        browserPathResultButton->setIcon(icon2);
        labelPathResult = new QLabel(Form);
        labelPathResult->setObjectName(QString::fromUtf8("labelPathResult"));
        labelPathResult->setGeometry(QRect(20, 390, 381, 20));
        lineEditPathResult = new QLineEdit(Form);
        lineEditPathResult->setObjectName(QString::fromUtf8("lineEditPathResult"));
        lineEditPathResult->setGeometry(QRect(10, 410, 411, 31));
        labelBackButton = new QLabel(Form);
        labelBackButton->setObjectName(QString::fromUtf8("labelBackButton"));
        labelBackButton->setGeometry(QRect(10, 70, 61, 20));
        labelBackButton->setAlignment(Qt::AlignCenter);
        labelStartButton = new QLabel(Form);
        labelStartButton->setObjectName(QString::fromUtf8("labelStartButton"));
        labelStartButton->setGeometry(QRect(950, 70, 61, 20));
        labelStartButton->setAlignment(Qt::AlignCenter);
        checkBoxOutput = new QCheckBox(Form);
        checkBoxOutput->setObjectName(QString::fromUtf8("checkBoxOutput"));
        checkBoxOutput->setGeometry(QRect(890, 240, 121, 25));
        checkBoxOutput->setChecked(true);
        lineEditElementSize = new QLineEdit(Form);
        lineEditElementSize->setObjectName(QString::fromUtf8("lineEditElementSize"));
        lineEditElementSize->setGeometry(QRect(10, 610, 181, 30));
        labelElementSize = new QLabel(Form);
        labelElementSize->setObjectName(QString::fromUtf8("labelElementSize"));
        labelElementSize->setGeometry(QRect(10, 590, 181, 20));
        labelElementSize->setAlignment(Qt::AlignCenter);
        labelReadBufferSize = new QLabel(Form);
        labelReadBufferSize->setObjectName(QString::fromUtf8("labelReadBufferSize"));
        labelReadBufferSize->setGeometry(QRect(240, 590, 181, 20));
        labelReadBufferSize->setAlignment(Qt::AlignCenter);
        lineEditReadBufferSize = new QLineEdit(Form);
        lineEditReadBufferSize->setObjectName(QString::fromUtf8("lineEditReadBufferSize"));
        lineEditReadBufferSize->setGeometry(QRect(240, 610, 181, 30));
        lineEditWriteBufferSize = new QLineEdit(Form);
        lineEditWriteBufferSize->setObjectName(QString::fromUtf8("lineEditWriteBufferSize"));
        lineEditWriteBufferSize->setGeometry(QRect(240, 680, 181, 30));
        labelWriteBufferSize = new QLabel(Form);
        labelWriteBufferSize->setObjectName(QString::fromUtf8("labelWriteBufferSize"));
        labelWriteBufferSize->setGeometry(QRect(240, 660, 181, 20));
        labelWriteBufferSize->setAlignment(Qt::AlignCenter);
        labelThreads = new QLabel(Form);
        labelThreads->setObjectName(QString::fromUtf8("labelThreads"));
        labelThreads->setGeometry(QRect(10, 100, 61, 20));
        labelThreads->setAlignment(Qt::AlignCenter);
        lineEditThreads = new QLineEdit(Form);
        lineEditThreads->setObjectName(QString::fromUtf8("lineEditThreads"));
        lineEditThreads->setGeometry(QRect(10, 120, 61, 30));
        lineEditNumberOfBuckets = new QLineEdit(Form);
        lineEditNumberOfBuckets->setObjectName(QString::fromUtf8("lineEditNumberOfBuckets"));
        lineEditNumberOfBuckets->setGeometry(QRect(90, 120, 151, 30));
        labelNumberOfBuckets = new QLabel(Form);
        labelNumberOfBuckets->setObjectName(QString::fromUtf8("labelNumberOfBuckets"));
        labelNumberOfBuckets->setGeometry(QRect(90, 100, 151, 20));
        labelNumberOfBuckets->setAlignment(Qt::AlignCenter);
        lineEditQueueBufferSize = new QLineEdit(Form);
        lineEditQueueBufferSize->setObjectName(QString::fromUtf8("lineEditQueueBufferSize"));
        lineEditQueueBufferSize->setGeometry(QRect(10, 680, 181, 30));
        labelQueueBufferSize = new QLabel(Form);
        labelQueueBufferSize->setObjectName(QString::fromUtf8("labelQueueBufferSize"));
        labelQueueBufferSize->setGeometry(QRect(10, 660, 181, 20));
        labelQueueBufferSize->setAlignment(Qt::AlignCenter);
        lineEditPathBuckets = new QLineEdit(Form);
        lineEditPathBuckets->setObjectName(QString::fromUtf8("lineEditPathBuckets"));
        lineEditPathBuckets->setGeometry(QRect(10, 530, 411, 31));
        labelPathBuckets = new QLabel(Form);
        labelPathBuckets->setObjectName(QString::fromUtf8("labelPathBuckets"));
        labelPathBuckets->setGeometry(QRect(20, 510, 381, 20));
        browserPathBucketsButton = new QPushButton(Form);
        browserPathBucketsButton->setObjectName(QString::fromUtf8("browserPathBucketsButton"));
        browserPathBucketsButton->setGeometry(QRect(450, 530, 30, 30));
        browserPathBucketsButton->setIcon(icon2);
        lineEditHashSeed1 = new QLineEdit(Form);
        lineEditHashSeed1->setObjectName(QString::fromUtf8("lineEditHashSeed1"));
        lineEditHashSeed1->setGeometry(QRect(10, 190, 311, 30));
        lineEditHashSeed1->setMaxLength(32);
        labelSeed1 = new QLabel(Form);
        labelSeed1->setObjectName(QString::fromUtf8("labelSeed1"));
        labelSeed1->setGeometry(QRect(10, 170, 311, 20));
        labelSeed1->setAlignment(Qt::AlignCenter);
        lineEditHashSeed2 = new QLineEdit(Form);
        lineEditHashSeed2->setObjectName(QString::fromUtf8("lineEditHashSeed2"));
        lineEditHashSeed2->setGeometry(QRect(350, 190, 311, 30));
        lineEditHashSeed2->setMaxLength(32);
        labelSeed2 = new QLabel(Form);
        labelSeed2->setObjectName(QString::fromUtf8("labelSeed2"));
        labelSeed2->setGeometry(QRect(350, 170, 311, 20));
        labelSeed2->setAlignment(Qt::AlignCenter);
        lineEditHashSeed3 = new QLineEdit(Form);
        lineEditHashSeed3->setObjectName(QString::fromUtf8("lineEditHashSeed3"));
        lineEditHashSeed3->setGeometry(QRect(690, 190, 311, 30));
        lineEditHashSeed3->setMaxLength(32);
        labelSeed3 = new QLabel(Form);
        labelSeed3->setObjectName(QString::fromUtf8("labelSeed3"));
        labelSeed3->setGeometry(QRect(690, 170, 311, 20));
        labelSeed3->setAlignment(Qt::AlignCenter);
        lineEditTableSizeMultiplier = new QLineEdit(Form);
        lineEditTableSizeMultiplier->setObjectName(QString::fromUtf8("lineEditTableSizeMultiplier"));
        lineEditTableSizeMultiplier->setGeometry(QRect(260, 120, 141, 30));
        labelTableSizeMultiplier = new QLabel(Form);
        labelTableSizeMultiplier->setObjectName(QString::fromUtf8("labelTableSizeMultiplier"));
        labelTableSizeMultiplier->setGeometry(QRect(260, 100, 141, 20));
        labelTableSizeMultiplier->setAlignment(Qt::AlignCenter);
        lineEditRecursiveDeepnessLimit = new QLineEdit(Form);
        lineEditRecursiveDeepnessLimit->setObjectName(QString::fromUtf8("lineEditRecursiveDeepnessLimit"));
        lineEditRecursiveDeepnessLimit->setGeometry(QRect(620, 120, 111, 30));
        labelRecursiveDeepnessLimit = new QLabel(Form);
        labelRecursiveDeepnessLimit->setObjectName(QString::fromUtf8("labelRecursiveDeepnessLimit"));
        labelRecursiveDeepnessLimit->setGeometry(QRect(620, 100, 111, 20));
        labelRecursiveDeepnessLimit->setAlignment(Qt::AlignCenter);
        lineEditIP = new QLineEdit(Form);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        lineEditIP->setGeometry(QRect(870, 120, 131, 30));
        labelIP = new QLabel(Form);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));
        labelIP->setGeometry(QRect(870, 100, 131, 20));
        labelIP->setAlignment(Qt::AlignCenter);
        lineEditPathResultB = new QLineEdit(Form);
        lineEditPathResultB->setObjectName(QString::fromUtf8("lineEditPathResultB"));
        lineEditPathResultB->setGeometry(QRect(10, 470, 411, 31));
        labelPathResultB = new QLabel(Form);
        labelPathResultB->setObjectName(QString::fromUtf8("labelPathResultB"));
        labelPathResultB->setGeometry(QRect(20, 450, 381, 20));
        browserPathResultButtonB = new QPushButton(Form);
        browserPathResultButtonB->setObjectName(QString::fromUtf8("browserPathResultButtonB"));
        browserPathResultButtonB->setGeometry(QRect(450, 470, 30, 30));
        browserPathResultButtonB->setIcon(icon2);
        lineEditPort = new QLineEdit(Form);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setGeometry(QRect(790, 120, 71, 30));
        labelPort = new QLabel(Form);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setGeometry(QRect(790, 100, 71, 20));
        labelPort->setAlignment(Qt::AlignCenter);
        lineEditTableSize = new QLineEdit(Form);
        lineEditTableSize->setObjectName(QString::fromUtf8("lineEditTableSize"));
        lineEditTableSize->setGeometry(QRect(420, 120, 181, 30));
        labelTableSize = new QLabel(Form);
        labelTableSize->setObjectName(QString::fromUtf8("labelTableSize"));
        labelTableSize->setGeometry(QRect(420, 100, 181, 20));
        labelTableSize->setAlignment(Qt::AlignCenter);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        backButton->setText(QString());
        windowLabel->setText(QString());
        startButton->setText(QString());
        labelPathA->setText(QApplication::translate("Form", "Path A", 0, QApplication::UnicodeUTF8));
        labelPathB->setText(QApplication::translate("Form", "Path B", 0, QApplication::UnicodeUTF8));
        browserPathAButton->setText(QString());
        browserPathBButton->setText(QString());
        browserPathResultButton->setText(QString());
        labelPathResult->setText(QApplication::translate("Form", "Path result", 0, QApplication::UnicodeUTF8));
        labelBackButton->setText(QApplication::translate("Form", "Back", 0, QApplication::UnicodeUTF8));
        labelStartButton->setText(QApplication::translate("Form", "Start", 0, QApplication::UnicodeUTF8));
        checkBoxOutput->setText(QApplication::translate("Form", "Show output", 0, QApplication::UnicodeUTF8));
        lineEditElementSize->setText(QApplication::translate("Form", "16", 0, QApplication::UnicodeUTF8));
        labelElementSize->setText(QApplication::translate("Form", "Element size", 0, QApplication::UnicodeUTF8));
        labelReadBufferSize->setText(QApplication::translate("Form", "Read buffer size", 0, QApplication::UnicodeUTF8));
        lineEditReadBufferSize->setText(QApplication::translate("Form", "100000", 0, QApplication::UnicodeUTF8));
        lineEditWriteBufferSize->setText(QApplication::translate("Form", "50000", 0, QApplication::UnicodeUTF8));
        labelWriteBufferSize->setText(QApplication::translate("Form", "Write buffer size", 0, QApplication::UnicodeUTF8));
        labelThreads->setText(QApplication::translate("Form", "Threads", 0, QApplication::UnicodeUTF8));
        lineEditThreads->setText(QApplication::translate("Form", "4", 0, QApplication::UnicodeUTF8));
        lineEditNumberOfBuckets->setText(QString());
        lineEditNumberOfBuckets->setPlaceholderText(QApplication::translate("Form", "Divisor of elem. #", 0, QApplication::UnicodeUTF8));
        labelNumberOfBuckets->setText(QApplication::translate("Form", "Number of buckets", 0, QApplication::UnicodeUTF8));
        lineEditQueueBufferSize->setText(QApplication::translate("Form", "100000", 0, QApplication::UnicodeUTF8));
        labelQueueBufferSize->setText(QApplication::translate("Form", "Queue buffer size", 0, QApplication::UnicodeUTF8));
        labelPathBuckets->setText(QApplication::translate("Form", "Path buckets", 0, QApplication::UnicodeUTF8));
        browserPathBucketsButton->setText(QString());
        lineEditHashSeed1->setText(QApplication::translate("Form", "77777777777777777777777777777777", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed1->setPlaceholderText(QApplication::translate("Form", "16-Byte", 0, QApplication::UnicodeUTF8));
        labelSeed1->setText(QApplication::translate("Form", "Hash seed #1", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed2->setText(QApplication::translate("Form", "0123456789ABCDEF0123456789ABCDEF", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed2->setPlaceholderText(QApplication::translate("Form", "16-Byte", 0, QApplication::UnicodeUTF8));
        labelSeed2->setText(QApplication::translate("Form", "Hash seed #2", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed3->setText(QApplication::translate("Form", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", 0, QApplication::UnicodeUTF8));
        lineEditHashSeed3->setPlaceholderText(QApplication::translate("Form", "16-Byte", 0, QApplication::UnicodeUTF8));
        labelSeed3->setText(QApplication::translate("Form", "Hash seed #3", 0, QApplication::UnicodeUTF8));
        lineEditTableSizeMultiplier->setText(QApplication::translate("Form", "1.2", 0, QApplication::UnicodeUTF8));
        labelTableSizeMultiplier->setText(QApplication::translate("Form", "Table size multiplier", 0, QApplication::UnicodeUTF8));
        lineEditRecursiveDeepnessLimit->setText(QApplication::translate("Form", "2000", 0, QApplication::UnicodeUTF8));
        labelRecursiveDeepnessLimit->setText(QApplication::translate("Form", "Deepness limit", 0, QApplication::UnicodeUTF8));
        lineEditIP->setText(QString());
        labelIP->setText(QApplication::translate("Form", "IP", 0, QApplication::UnicodeUTF8));
        labelPathResultB->setText(QApplication::translate("Form", "Path result B", 0, QApplication::UnicodeUTF8));
        browserPathResultButtonB->setText(QString());
        lineEditPort->setText(QString());
        labelPort->setText(QApplication::translate("Form", "Port", 0, QApplication::UnicodeUTF8));
        lineEditTableSize->setText(QString());
        lineEditTableSize->setPlaceholderText(QApplication::translate("Form", "Stronger then multiplier", 0, QApplication::UnicodeUTF8));
        labelTableSize->setText(QApplication::translate("Form", "Table size", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
