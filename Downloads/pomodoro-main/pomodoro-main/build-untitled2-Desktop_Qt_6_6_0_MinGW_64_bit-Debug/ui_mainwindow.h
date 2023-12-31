/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *spinBox;
    QSlider *horizontalSlider_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *pomo_min;
    QSpacerItem *horizontalSpacer_3;
    QLCDNumber *pomo_sec;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *break_min;
    QSpacerItem *horizontalSpacer_4;
    QLCDNumber *break_sec;
    QHBoxLayout *horizontalLayout;
    QPushButton *pomoTimer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        verticalLayout_2->addWidget(spinBox);

        horizontalSlider_2 = new QSlider(widget);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName("spinBox_2");

        verticalLayout->addWidget(spinBox_2);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");

        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pomo_min = new QLCDNumber(widget);
        pomo_min->setObjectName("pomo_min");

        horizontalLayout_2->addWidget(pomo_min);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pomo_sec = new QLCDNumber(widget);
        pomo_sec->setObjectName("pomo_sec");

        horizontalLayout_2->addWidget(pomo_sec);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        line_2 = new QFrame(widget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        break_min = new QLCDNumber(widget);
        break_min->setObjectName("break_min");

        horizontalLayout_2->addWidget(break_min);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        break_sec = new QLCDNumber(widget);
        break_sec->setObjectName("break_sec");
        break_sec->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(break_sec);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pomoTimer = new QPushButton(centralwidget);
        pomoTimer->setObjectName("pomoTimer");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pomoTimer->sizePolicy().hasHeightForWidth());
        pomoTimer->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pomoTimer);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setScaledContents(false);
        label->setWordWrap(false);

        horizontalLayout_4->addWidget(label);


        verticalLayout_4->addLayout(horizontalLayout_4);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        verticalLayout_4->addWidget(progressBar);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, spinBox_2, &QSpinBox::setValue);
        QObject::connect(spinBox_2, &QSpinBox::valueChanged, horizontalSlider, &QSlider::setValue);
        QObject::connect(spinBox, &QSpinBox::valueChanged, horizontalSlider_2, &QSlider::setValue);
        QObject::connect(horizontalSlider_2, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "focus", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "break", nullptr));
        pomoTimer->setText(QCoreApplication::translate("MainWindow", "Pomodoro", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
