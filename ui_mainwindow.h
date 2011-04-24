/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 15. Feb 01:52:07 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frameContainerBody;
    QHBoxLayout *horizontalLayout;
    QFrame *frameNav;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QFrame *frameInfo;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameInfoA;
    QVBoxLayout *verticalLayout_InfoA;
    QFrame *frameInfoB;
    QVBoxLayout *verticalLayout_InfoB;
    QFrame *frameInfoC;
    QVBoxLayout *verticalLayout_InfoC;
    QFrame *frameInfoD;
    QVBoxLayout *verticalLayout_InfoD;
    QFrame *frameInfoE;
    QVBoxLayout *verticalLayout_InfoE;
    QFrame *frameFiller;
    QFrame *frameContainerFooter;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frameFooter;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(755, 530);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"\n"
"#MainWindow {\n"
"background: black;\n"
"\n"
"}\n"
"\n"
"\n"
"#frameNav{\n"
"border: 1px solid gray;\n"
"border-radius: 4px;\n"
"\n"
"}\n"
"#frameFooter{\n"
"border: 1px solid gray;\n"
"border-radius: 4px;\n"
"background: black;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"font-family: \"Arial\";\n"
"font-weight: bold;\n"
"color: white;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frameContainerBody = new QFrame(centralWidget);
        frameContainerBody->setObjectName(QString::fromUtf8("frameContainerBody"));
        frameContainerBody->setFrameShape(QFrame::NoFrame);
        frameContainerBody->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameContainerBody);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frameNav = new QFrame(frameContainerBody);
        frameNav->setObjectName(QString::fromUtf8("frameNav"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameNav->sizePolicy().hasHeightForWidth());
        frameNav->setSizePolicy(sizePolicy);
        frameNav->setFrameShape(QFrame::Box);
        frameNav->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameNav);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textBrowser = new QTextBrowser(frameNav);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_3->addWidget(textBrowser);

        lineEdit = new QLineEdit(frameNav);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);


        horizontalLayout->addWidget(frameNav);

        frameInfo = new QFrame(frameContainerBody);
        frameInfo->setObjectName(QString::fromUtf8("frameInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameInfo->sizePolicy().hasHeightForWidth());
        frameInfo->setSizePolicy(sizePolicy1);
        frameInfo->setMinimumSize(QSize(100, 0));
        frameInfo->setStyleSheet(QString::fromUtf8("#frameInfoA {\n"
" border: 1px solid #3566ff;\n"
"}\n"
"#frameInfoB {\n"
" border: 1px solid #3566ff;\n"
"}"));
        frameInfo->setFrameShape(QFrame::NoFrame);
        frameInfo->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameInfo);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frameInfoA = new QFrame(frameInfo);
        frameInfoA->setObjectName(QString::fromUtf8("frameInfoA"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frameInfoA->sizePolicy().hasHeightForWidth());
        frameInfoA->setSizePolicy(sizePolicy2);
        frameInfoA->setMinimumSize(QSize(0, 44));
        frameInfoA->setFrameShape(QFrame::StyledPanel);
        frameInfoA->setFrameShadow(QFrame::Raised);
        verticalLayout_InfoA = new QVBoxLayout(frameInfoA);
        verticalLayout_InfoA->setSpacing(0);
        verticalLayout_InfoA->setContentsMargins(11, 11, 11, 11);
        verticalLayout_InfoA->setObjectName(QString::fromUtf8("verticalLayout_InfoA"));
        verticalLayout_InfoA->setContentsMargins(2, 2, 0, 0);

        verticalLayout_2->addWidget(frameInfoA);

        frameInfoB = new QFrame(frameInfo);
        frameInfoB->setObjectName(QString::fromUtf8("frameInfoB"));
        sizePolicy2.setHeightForWidth(frameInfoB->sizePolicy().hasHeightForWidth());
        frameInfoB->setSizePolicy(sizePolicy2);
        frameInfoB->setMinimumSize(QSize(0, 44));
        frameInfoB->setStyleSheet(QString::fromUtf8("#frameInfoA {\n"
" border: 1px solid #8f8f91;\n"
"}"));
        frameInfoB->setFrameShape(QFrame::StyledPanel);
        frameInfoB->setFrameShadow(QFrame::Raised);
        verticalLayout_InfoB = new QVBoxLayout(frameInfoB);
        verticalLayout_InfoB->setSpacing(0);
        verticalLayout_InfoB->setContentsMargins(11, 11, 11, 11);
        verticalLayout_InfoB->setObjectName(QString::fromUtf8("verticalLayout_InfoB"));
        verticalLayout_InfoB->setContentsMargins(2, 2, 0, 0);

        verticalLayout_2->addWidget(frameInfoB);

        frameInfoC = new QFrame(frameInfo);
        frameInfoC->setObjectName(QString::fromUtf8("frameInfoC"));
        sizePolicy2.setHeightForWidth(frameInfoC->sizePolicy().hasHeightForWidth());
        frameInfoC->setSizePolicy(sizePolicy2);
        frameInfoC->setMinimumSize(QSize(0, 44));
        frameInfoC->setStyleSheet(QString::fromUtf8("#frameInfoC {\n"
" border: 1px solid #3566ff;\n"
"}"));
        frameInfoC->setFrameShape(QFrame::StyledPanel);
        frameInfoC->setFrameShadow(QFrame::Raised);
        verticalLayout_InfoC = new QVBoxLayout(frameInfoC);
        verticalLayout_InfoC->setSpacing(0);
        verticalLayout_InfoC->setContentsMargins(11, 11, 11, 11);
        verticalLayout_InfoC->setObjectName(QString::fromUtf8("verticalLayout_InfoC"));
        verticalLayout_InfoC->setContentsMargins(2, 2, 0, 0);

        verticalLayout_2->addWidget(frameInfoC);

        frameInfoD = new QFrame(frameInfo);
        frameInfoD->setObjectName(QString::fromUtf8("frameInfoD"));
        sizePolicy2.setHeightForWidth(frameInfoD->sizePolicy().hasHeightForWidth());
        frameInfoD->setSizePolicy(sizePolicy2);
        frameInfoD->setMinimumSize(QSize(0, 44));
        frameInfoD->setStyleSheet(QString::fromUtf8("#frameInfoD {\n"
" border: 1px solid #3566ff;\n"
"}"));
        frameInfoD->setFrameShape(QFrame::StyledPanel);
        frameInfoD->setFrameShadow(QFrame::Raised);
        verticalLayout_InfoD = new QVBoxLayout(frameInfoD);
        verticalLayout_InfoD->setSpacing(0);
        verticalLayout_InfoD->setContentsMargins(11, 11, 11, 11);
        verticalLayout_InfoD->setObjectName(QString::fromUtf8("verticalLayout_InfoD"));
        verticalLayout_InfoD->setContentsMargins(2, 2, 0, 0);

        verticalLayout_2->addWidget(frameInfoD);

        frameInfoE = new QFrame(frameInfo);
        frameInfoE->setObjectName(QString::fromUtf8("frameInfoE"));
        sizePolicy2.setHeightForWidth(frameInfoE->sizePolicy().hasHeightForWidth());
        frameInfoE->setSizePolicy(sizePolicy2);
        frameInfoE->setMinimumSize(QSize(0, 44));
        frameInfoE->setStyleSheet(QString::fromUtf8("#frameInfoE {\n"
" border: 1px solid #3566ff;\n"
"}"));
        frameInfoE->setFrameShape(QFrame::StyledPanel);
        frameInfoE->setFrameShadow(QFrame::Raised);
        verticalLayout_InfoE = new QVBoxLayout(frameInfoE);
        verticalLayout_InfoE->setSpacing(0);
        verticalLayout_InfoE->setContentsMargins(11, 11, 11, 11);
        verticalLayout_InfoE->setObjectName(QString::fromUtf8("verticalLayout_InfoE"));
        verticalLayout_InfoE->setContentsMargins(2, 2, 0, 0);

        verticalLayout_2->addWidget(frameInfoE);

        frameFiller = new QFrame(frameInfo);
        frameFiller->setObjectName(QString::fromUtf8("frameFiller"));
        frameFiller->setStyleSheet(QString::fromUtf8("#frameFiller {\n"
" border: 1px solid gray;\n"
"}"));
        frameFiller->setFrameShape(QFrame::StyledPanel);
        frameFiller->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frameFiller);


        horizontalLayout->addWidget(frameInfo);


        verticalLayout->addWidget(frameContainerBody);

        frameContainerFooter = new QFrame(centralWidget);
        frameContainerFooter->setObjectName(QString::fromUtf8("frameContainerFooter"));
        sizePolicy2.setHeightForWidth(frameContainerFooter->sizePolicy().hasHeightForWidth());
        frameContainerFooter->setSizePolicy(sizePolicy2);
        frameContainerFooter->setMinimumSize(QSize(0, 40));
        frameContainerFooter->setFrameShape(QFrame::NoFrame);
        frameContainerFooter->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frameContainerFooter);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frameFooter = new QFrame(frameContainerFooter);
        frameFooter->setObjectName(QString::fromUtf8("frameFooter"));
        frameFooter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"         border: 2px solid #8f8f91;\n"
"         border-radius: 6px;\n"
"         background-color: black;\n"
"         min-width: 80px;\n"
"     }\n"
"\n"
"     QPushButton:pressed {\n"
"         background-color :gray;\n"
"     }\n"
"\n"
"     QPushButton:flat {\n"
"         border: none; /* no border for a flat push button */\n"
"     }\n"
"\n"
"     QPushButton:default {\n"
"         border-color: navy; /* make the \n"
"}"));
        frameFooter->setFrameShape(QFrame::Box);
        frameFooter->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameFooter);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(frameFooter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(frameFooter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frameFooter);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(frameFooter);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(frameFooter);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);


        horizontalLayout_2->addWidget(frameFooter);


        verticalLayout->addWidget(frameContainerFooter);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "iNav", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "1. Nav", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "2. Route", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "3. Data", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "4. Signal ", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "5. Database", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
