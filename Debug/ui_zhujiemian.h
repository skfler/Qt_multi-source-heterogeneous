/********************************************************************************
** Form generated from reading UI file 'zhujiemian.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUJIEMIAN_H
#define UI_ZHUJIEMIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_zhujiemian
{
public:
    QAction *actionMulu;
    QAction *actionCloseMulu;
    QAction *actionExit;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVideoWidget *shipinone;
    QVideoWidget *shipintwo;
    QVideoWidget *shipinthree;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *toolButton;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_29;
    QLabel *label_curtime;
    QLabel *label_11;
    QLabel *label_sptime;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_15;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_9;
    QLabel *label_B;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_10;
    QLabel *label_L;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_12;
    QLabel *label_H;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_22;
    QLabel *label_speed;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer_28;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_Y;
    QSpacerItem *horizontalSpacer_24;
    QLabel *label_P;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_26;
    QLabel *label_16;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_18;
    QLabel *label_R;
    QHBoxLayout *horizontalLayout_4;
    QWidget *biao_1;
    QWidget *biao_2;
    QWidget *biao_3;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *zhujiemian)
    {
        if (zhujiemian->objectName().isEmpty())
            zhujiemian->setObjectName(QStringLiteral("zhujiemian"));
        zhujiemian->resize(1200, 800);
        zhujiemian->setMinimumSize(QSize(1200, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Image/\345\214\227\345\273\272\345\244\247icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        zhujiemian->setWindowIcon(icon);
        actionMulu = new QAction(zhujiemian);
        actionMulu->setObjectName(QStringLiteral("actionMulu"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Image/\346\226\207\344\273\266\345\244\271.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMulu->setIcon(icon1);
        actionCloseMulu = new QAction(zhujiemian);
        actionCloseMulu->setObjectName(QStringLiteral("actionCloseMulu"));
        actionExit = new QAction(zhujiemian);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Image/\351\200\200\345\207\272.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionHelp = new QAction(zhujiemian);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Image/\351\227\256\345\217\267.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        actionAbout = new QAction(zhujiemian);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Image/\345\205\263\344\272\216.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        centralwidget = new QWidget(zhujiemian);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        shipinone = new QVideoWidget(centralwidget);
        shipinone->setObjectName(QStringLiteral("shipinone"));
        shipinone->setMinimumSize(QSize(300, 250));
        shipinone->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(shipinone);

        shipintwo = new QVideoWidget(centralwidget);
        shipintwo->setObjectName(QStringLiteral("shipintwo"));
        shipintwo->setMinimumSize(QSize(300, 250));
        shipintwo->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(shipintwo);

        shipinthree = new QVideoWidget(centralwidget);
        shipinthree->setObjectName(QStringLiteral("shipinthree"));
        shipinthree->setMinimumSize(QSize(300, 250));
        shipinthree->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(shipinthree);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_2 = new QSpacerItem(160, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setMargin(0);

        horizontalLayout_12->addWidget(label_3);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_14);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setFont(font);

        horizontalLayout_11->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        horizontalLayout_13->addLayout(horizontalLayout_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_13);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        horizontalLayout_13->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(65, 65));
        toolButton->setMaximumSize(QSize(65, 65));
        toolButton->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton->setIconSize(QSize(65, 65));

        horizontalLayout_7->addWidget(toolButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximumSize(QSize(16777215, 30));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);

        verticalLayout->addWidget(horizontalSlider);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_29);

        label_curtime = new QLabel(centralwidget);
        label_curtime->setObjectName(QStringLiteral("label_curtime"));
        label_curtime->setMinimumSize(QSize(0, 20));
        label_curtime->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        font1.setPointSize(11);
        label_curtime->setFont(font1);

        horizontalLayout_6->addWidget(label_curtime);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 20));
        label_11->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Black"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_11->setFont(font2);

        horizontalLayout_6->addWidget(label_11);

        label_sptime = new QLabel(centralwidget);
        label_sptime->setObjectName(QStringLiteral("label_sptime"));
        label_sptime->setMinimumSize(QSize(0, 20));
        label_sptime->setMaximumSize(QSize(16777215, 20));
        label_sptime->setFont(font1);

        horizontalLayout_6->addWidget(label_sptime);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_30);

        horizontalSpacer_10 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_15 = new QSpacerItem(25, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 0, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_9->setFont(font3);
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_9, 0, 1, 1, 1);

        label_B = new QLabel(centralwidget);
        label_B->setObjectName(QStringLiteral("label_B"));
        label_B->setMinimumSize(QSize(110, 0));
        label_B->setMaximumSize(QSize(16777215, 15));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        label_B->setFont(font4);
        label_B->setFrameShape(QFrame::Panel);
        label_B->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(label_B, 0, 2, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMaximumSize(QSize(16777215, 15));
        label_13->setFont(font3);

        gridLayout->addWidget(label_13, 0, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(25, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 0, 4, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 1, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_10, 1, 1, 1, 1);

        label_L = new QLabel(centralwidget);
        label_L->setObjectName(QStringLiteral("label_L"));
        label_L->setMaximumSize(QSize(16777215, 15));
        label_L->setFont(font4);
        label_L->setFrameShape(QFrame::Panel);
        label_L->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(label_L, 1, 2, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMaximumSize(QSize(16777215, 15));
        label_14->setFont(font3);

        gridLayout->addWidget(label_14, 1, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 1, 4, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 2, 0, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font3);
        label_12->setFrameShape(QFrame::NoFrame);
        label_12->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_12, 2, 1, 1, 1);

        label_H = new QLabel(centralwidget);
        label_H->setObjectName(QStringLiteral("label_H"));
        label_H->setMaximumSize(QSize(16777215, 15));
        label_H->setFont(font4);
        label_H->setFrameShape(QFrame::Panel);
        label_H->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(label_H, 2, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setMaximumSize(QSize(16777215, 15));
        label_15->setFont(font3);

        gridLayout->addWidget(label_15, 2, 3, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_20, 2, 4, 1, 1);


        horizontalLayout_15->addLayout(gridLayout);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer_27 = new QSpacerItem(25, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_27);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font3);

        horizontalLayout_14->addWidget(label_22);

        label_speed = new QLabel(centralwidget);
        label_speed->setObjectName(QStringLiteral("label_speed"));
        label_speed->setMinimumSize(QSize(50, 0));
        label_speed->setMaximumSize(QSize(16777215, 15));
        label_speed->setFont(font4);
        label_speed->setFrameShape(QFrame::Panel);
        label_speed->setFrameShadow(QFrame::Sunken);

        horizontalLayout_14->addWidget(label_speed);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font3);

        horizontalLayout_14->addWidget(label_24);

        horizontalSpacer_28 = new QSpacerItem(25, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_28);


        horizontalLayout_15->addLayout(horizontalLayout_14);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setMaximumSize(QSize(16777215, 15));
        label_17->setFont(font3);

        gridLayout_2->addWidget(label_17, 0, 3, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(25, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_22, 0, 4, 1, 1);

        label_Y = new QLabel(centralwidget);
        label_Y->setObjectName(QStringLiteral("label_Y"));
        label_Y->setMaximumSize(QSize(16777215, 15));
        label_Y->setFont(font4);
        label_Y->setFrameShape(QFrame::Panel);
        label_Y->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(label_Y, 2, 2, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_24, 1, 4, 1, 1);

        label_P = new QLabel(centralwidget);
        label_P->setObjectName(QStringLiteral("label_P"));
        label_P->setMaximumSize(QSize(16777215, 15));
        label_P->setFont(font4);
        label_P->setFrameShape(QFrame::Panel);
        label_P->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(label_P, 1, 2, 1, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font3);
        label_20->setFrameShape(QFrame::NoFrame);
        label_20->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(label_20, 2, 1, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_26, 2, 4, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font3);
        label_16->setFrameShape(QFrame::NoFrame);
        label_16->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(label_16, 0, 1, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setMaximumSize(QSize(16777215, 15));
        label_19->setFont(font3);

        gridLayout_2->addWidget(label_19, 1, 3, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_25, 2, 0, 1, 1);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMaximumSize(QSize(16777215, 15));
        label_21->setFont(font3);

        gridLayout_2->addWidget(label_21, 2, 3, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(25, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_21, 0, 0, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_23, 1, 0, 1, 1);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font3);
        label_18->setFrameShape(QFrame::NoFrame);
        label_18->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(label_18, 1, 1, 1, 1);

        label_R = new QLabel(centralwidget);
        label_R->setObjectName(QStringLiteral("label_R"));
        label_R->setMinimumSize(QSize(110, 0));
        label_R->setMaximumSize(QSize(16777215, 15));
        label_R->setFont(font4);
        label_R->setFrameShape(QFrame::Panel);
        label_R->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(label_R, 0, 2, 1, 1);


        horizontalLayout_15->addLayout(gridLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        biao_1 = new QWidget(centralwidget);
        biao_1->setObjectName(QStringLiteral("biao_1"));
        biao_1->setMinimumSize(QSize(300, 270));
        biao_1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(biao_1);

        biao_2 = new QWidget(centralwidget);
        biao_2->setObjectName(QStringLiteral("biao_2"));
        biao_2->setMinimumSize(QSize(300, 270));
        biao_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(biao_2);

        biao_3 = new QWidget(centralwidget);
        biao_3->setObjectName(QStringLiteral("biao_3"));
        biao_3->setMinimumSize(QSize(300, 270));
        biao_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(biao_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\346\226\271\346\255\243\345\260\217\346\240\207\345\256\213\347\256\200\344\275\223"));
        font5.setPointSize(10);
        label_6->setFont(font5);

        horizontalLayout_9->addWidget(label_6);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));
        label_7->setFont(font5);

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));
        label_8->setFont(font5);

        horizontalLayout_2->addWidget(label_8);

        horizontalSpacer_9 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);


        horizontalLayout_10->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 31));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font6.setPointSize(10);
        label->setFont(font6);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(950, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        zhujiemian->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(zhujiemian);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        zhujiemian->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionMulu);
        menu->addSeparator();
        menu->addAction(actionCloseMulu);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionHelp);
        menu_2->addAction(actionAbout);

        retranslateUi(zhujiemian);

        QMetaObject::connectSlotsByName(zhujiemian);
    } // setupUi

    void retranslateUi(QMainWindow *zhujiemian)
    {
        zhujiemian->setWindowTitle(QApplication::translate("zhujiemian", "\346\227\240\344\272\272\346\234\272\345\220\214\346\255\245\346\225\260\346\215\256\346\237\245\347\234\213\347\263\273\347\273\237", Q_NULLPTR));
        actionMulu->setText(QApplication::translate("zhujiemian", "\351\200\211\346\213\251\347\233\256\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMulu->setToolTip(QApplication::translate("zhujiemian", "\351\200\211\346\213\251\344\270\200\346\254\241\351\243\236\350\241\214\344\272\247\347\224\237\347\232\204\346\226\207\344\273\266\347\233\256\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCloseMulu->setText(QApplication::translate("zhujiemian", "\345\205\263\351\227\255\347\233\256\345\275\225", Q_NULLPTR));
        actionExit->setText(QApplication::translate("zhujiemian", "\351\200\200\345\207\272", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("zhujiemian", "\344\275\277\347\224\250\345\270\256\345\212\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionHelp->setToolTip(QApplication::translate("zhujiemian", "\345\257\271\350\275\257\344\273\266\344\275\277\347\224\250\347\232\204\344\270\200\344\272\233\350\247\243\351\207\212", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("zhujiemian", "\345\205\263\344\272\216\350\275\257\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("zhujiemian", "\345\205\263\344\272\216\350\275\257\344\273\266\347\232\204\344\277\241\346\201\257", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("zhujiemian", "\345\217\257\350\247\201\345\205\211\345\233\276\345\203\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("zhujiemian", "\347\272\242\345\244\226\345\233\276\345\203\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("zhujiemian", "\346\277\200\345\205\211\345\233\276\345\203\217", Q_NULLPTR));
        toolButton->setText(QApplication::translate("zhujiemian", "\346\222\255\346\224\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        horizontalSlider->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_curtime->setText(QApplication::translate("zhujiemian", "00:00:00.000", Q_NULLPTR));
        label_11->setText(QApplication::translate("zhujiemian", "/", Q_NULLPTR));
        label_sptime->setText(QApplication::translate("zhujiemian", "00:00:00.000", Q_NULLPTR));
        label_9->setText(QApplication::translate("zhujiemian", "\347\272\254\345\272\246\357\274\210B\357\274\211", Q_NULLPTR));
        label_B->setText(QString());
        label_13->setText(QApplication::translate("zhujiemian", "\345\272\246\357\274\210\302\260\357\274\211", Q_NULLPTR));
        label_10->setText(QApplication::translate("zhujiemian", "\347\273\217\345\272\246\357\274\210L\357\274\211", Q_NULLPTR));
        label_L->setText(QString());
        label_14->setText(QApplication::translate("zhujiemian", "\345\272\246\357\274\210\302\260\357\274\211", Q_NULLPTR));
        label_12->setText(QApplication::translate("zhujiemian", "\351\253\230\347\250\213\357\274\210H\357\274\211", Q_NULLPTR));
        label_H->setText(QString());
        label_15->setText(QApplication::translate("zhujiemian", "\347\261\263\357\274\210M\357\274\211", Q_NULLPTR));
        label_22->setText(QApplication::translate("zhujiemian", "\351\200\237\345\272\246", Q_NULLPTR));
        label_speed->setText(QString());
        label_24->setText(QApplication::translate("zhujiemian", "M/s", Q_NULLPTR));
        label_17->setText(QApplication::translate("zhujiemian", "\345\272\246\357\274\210\302\260\357\274\211", Q_NULLPTR));
        label_Y->setText(QString());
        label_P->setText(QString());
        label_20->setText(QApplication::translate("zhujiemian", "\350\210\252\345\220\221\350\247\222\357\274\210Y\357\274\211", Q_NULLPTR));
        label_16->setText(QApplication::translate("zhujiemian", "\347\277\273\346\273\232\350\247\222\357\274\210R\357\274\211", Q_NULLPTR));
        label_19->setText(QApplication::translate("zhujiemian", "\345\272\246\357\274\210\302\260\357\274\211", Q_NULLPTR));
        label_21->setText(QApplication::translate("zhujiemian", "\345\272\246\357\274\210\302\260\357\274\211", Q_NULLPTR));
        label_18->setText(QApplication::translate("zhujiemian", "\344\277\257\344\273\260\350\247\222\357\274\210P\357\274\211", Q_NULLPTR));
        label_R->setText(QString());
        label_6->setText(QApplication::translate("zhujiemian", "\347\273\217\347\272\254\345\272\246", Q_NULLPTR));
        label_7->setText(QApplication::translate("zhujiemian", "\351\200\237\345\272\246", Q_NULLPTR));
        label_8->setText(QApplication::translate("zhujiemian", "\345\247\277\346\200\201", Q_NULLPTR));
        label->setText(QApplication::translate("zhujiemian", "\346\226\207\344\273\266\345\244\271\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        label_2->setText(QString());
        menu->setTitle(QApplication::translate("zhujiemian", "\346\211\223\345\274\200\351\243\236\350\241\214\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("zhujiemian", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class zhujiemian: public Ui_zhujiemian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUJIEMIAN_H
