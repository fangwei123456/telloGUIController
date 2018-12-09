/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *connectTelloButton;
    QPushButton *openCameraButton;
    QWidget *formLayoutWidget;
    QFormLayout *basicalFormLayout;
    QLabel *telloBatLabel;
    QProgressBar *telloBat;
    QLabel *telloWIFILabel;
    QProgressBar *telloWIFI;
    QWidget *formLayoutWidget_2;
    QFormLayout *vFormLayout;
    QProgressBar *telloVgx;
    QLabel *telloVgyLabel;
    QProgressBar *telloVgy;
    QLabel *telloVgzLabel;
    QProgressBar *telloVgz;
    QLabel *telloVgxLabel;
    QWidget *formLayoutWidget_3;
    QFormLayout *aFormLayout;
    QProgressBar *telloAgx;
    QLabel *telloAgyLabel;
    QProgressBar *telloAgy;
    QLabel *telloAgzLabel;
    QProgressBar *telloAgz;
    QLabel *telloAgxLabel;
    QProgressBar *telloBaro;
    QLabel *telloBaroLabel;
    QProgressBar *telloH;
    QLCDNumber *telloTof;
    QLabel *telloTofLabel;
    QWidget *formLayoutWidget_4;
    QFormLayout *degreeFormLayout;
    QProgressBar *telloPitch;
    QLabel *telloRollLabel;
    QProgressBar *telloRoll;
    QLabel *telloYawLabel;
    QProgressBar *telloYaw;
    QLabel *telloPitchLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(997, 506);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        connectTelloButton = new QPushButton(centralWidget);
        connectTelloButton->setObjectName(QStringLiteral("connectTelloButton"));
        connectTelloButton->setGeometry(QRect(860, 10, 121, 41));
        openCameraButton = new QPushButton(centralWidget);
        openCameraButton->setObjectName(QStringLiteral("openCameraButton"));
        openCameraButton->setGeometry(QRect(860, 60, 121, 41));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 20, 301, 71));
        basicalFormLayout = new QFormLayout(formLayoutWidget);
        basicalFormLayout->setSpacing(6);
        basicalFormLayout->setContentsMargins(11, 11, 11, 11);
        basicalFormLayout->setObjectName(QStringLiteral("basicalFormLayout"));
        basicalFormLayout->setContentsMargins(0, 0, 0, 0);
        telloBatLabel = new QLabel(formLayoutWidget);
        telloBatLabel->setObjectName(QStringLiteral("telloBatLabel"));
        QFont font;
        font.setPointSize(18);
        telloBatLabel->setFont(font);

        basicalFormLayout->setWidget(0, QFormLayout::LabelRole, telloBatLabel);

        telloBat = new QProgressBar(formLayoutWidget);
        telloBat->setObjectName(QStringLiteral("telloBat"));
        telloBat->setStyleSheet(QStringLiteral(""));
        telloBat->setValue(24);

        basicalFormLayout->setWidget(0, QFormLayout::FieldRole, telloBat);

        telloWIFILabel = new QLabel(formLayoutWidget);
        telloWIFILabel->setObjectName(QStringLiteral("telloWIFILabel"));
        telloWIFILabel->setFont(font);

        basicalFormLayout->setWidget(1, QFormLayout::LabelRole, telloWIFILabel);

        telloWIFI = new QProgressBar(formLayoutWidget);
        telloWIFI->setObjectName(QStringLiteral("telloWIFI"));
        telloWIFI->setValue(24);

        basicalFormLayout->setWidget(1, QFormLayout::FieldRole, telloWIFI);

        formLayoutWidget_2 = new QWidget(centralWidget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(20, 130, 301, 121));
        vFormLayout = new QFormLayout(formLayoutWidget_2);
        vFormLayout->setSpacing(6);
        vFormLayout->setContentsMargins(11, 11, 11, 11);
        vFormLayout->setObjectName(QStringLiteral("vFormLayout"));
        vFormLayout->setContentsMargins(0, 0, 0, 0);
        telloVgx = new QProgressBar(formLayoutWidget_2);
        telloVgx->setObjectName(QStringLiteral("telloVgx"));
        telloVgx->setStyleSheet(QStringLiteral(""));
        telloVgx->setValue(24);

        vFormLayout->setWidget(0, QFormLayout::FieldRole, telloVgx);

        telloVgyLabel = new QLabel(formLayoutWidget_2);
        telloVgyLabel->setObjectName(QStringLiteral("telloVgyLabel"));
        telloVgyLabel->setFont(font);

        vFormLayout->setWidget(1, QFormLayout::LabelRole, telloVgyLabel);

        telloVgy = new QProgressBar(formLayoutWidget_2);
        telloVgy->setObjectName(QStringLiteral("telloVgy"));
        telloVgy->setValue(24);

        vFormLayout->setWidget(1, QFormLayout::FieldRole, telloVgy);

        telloVgzLabel = new QLabel(formLayoutWidget_2);
        telloVgzLabel->setObjectName(QStringLiteral("telloVgzLabel"));
        telloVgzLabel->setFont(font);

        vFormLayout->setWidget(2, QFormLayout::LabelRole, telloVgzLabel);

        telloVgz = new QProgressBar(formLayoutWidget_2);
        telloVgz->setObjectName(QStringLiteral("telloVgz"));
        telloVgz->setValue(24);

        vFormLayout->setWidget(2, QFormLayout::FieldRole, telloVgz);

        telloVgxLabel = new QLabel(formLayoutWidget_2);
        telloVgxLabel->setObjectName(QStringLiteral("telloVgxLabel"));
        telloVgxLabel->setFont(font);

        vFormLayout->setWidget(0, QFormLayout::LabelRole, telloVgxLabel);

        formLayoutWidget_3 = new QWidget(centralWidget);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(330, 130, 291, 126));
        aFormLayout = new QFormLayout(formLayoutWidget_3);
        aFormLayout->setSpacing(6);
        aFormLayout->setContentsMargins(11, 11, 11, 11);
        aFormLayout->setObjectName(QStringLiteral("aFormLayout"));
        aFormLayout->setContentsMargins(0, 0, 0, 0);
        telloAgx = new QProgressBar(formLayoutWidget_3);
        telloAgx->setObjectName(QStringLiteral("telloAgx"));
        telloAgx->setStyleSheet(QStringLiteral(""));
        telloAgx->setValue(24);

        aFormLayout->setWidget(0, QFormLayout::FieldRole, telloAgx);

        telloAgyLabel = new QLabel(formLayoutWidget_3);
        telloAgyLabel->setObjectName(QStringLiteral("telloAgyLabel"));
        telloAgyLabel->setFont(font);

        aFormLayout->setWidget(1, QFormLayout::LabelRole, telloAgyLabel);

        telloAgy = new QProgressBar(formLayoutWidget_3);
        telloAgy->setObjectName(QStringLiteral("telloAgy"));
        telloAgy->setValue(24);

        aFormLayout->setWidget(1, QFormLayout::FieldRole, telloAgy);

        telloAgzLabel = new QLabel(formLayoutWidget_3);
        telloAgzLabel->setObjectName(QStringLiteral("telloAgzLabel"));
        telloAgzLabel->setFont(font);

        aFormLayout->setWidget(2, QFormLayout::LabelRole, telloAgzLabel);

        telloAgz = new QProgressBar(formLayoutWidget_3);
        telloAgz->setObjectName(QStringLiteral("telloAgz"));
        telloAgz->setValue(24);

        aFormLayout->setWidget(2, QFormLayout::FieldRole, telloAgz);

        telloAgxLabel = new QLabel(formLayoutWidget_3);
        telloAgxLabel->setObjectName(QStringLiteral("telloAgxLabel"));
        telloAgxLabel->setFont(font);

        aFormLayout->setWidget(0, QFormLayout::LabelRole, telloAgxLabel);

        telloBaro = new QProgressBar(centralWidget);
        telloBaro->setObjectName(QStringLiteral("telloBaro"));
        telloBaro->setGeometry(QRect(780, 10, 21, 191));
        telloBaro->setValue(24);
        telloBaro->setOrientation(Qt::Vertical);
        telloBaroLabel = new QLabel(centralWidget);
        telloBaroLabel->setObjectName(QStringLiteral("telloBaroLabel"));
        telloBaroLabel->setGeometry(QRect(690, 10, 81, 51));
        telloBaroLabel->setFont(font);
        telloH = new QProgressBar(centralWidget);
        telloH->setObjectName(QStringLiteral("telloH"));
        telloH->setGeometry(QRect(810, 10, 21, 191));
        telloH->setValue(24);
        telloH->setOrientation(Qt::Vertical);
        telloTof = new QLCDNumber(centralWidget);
        telloTof->setObjectName(QStringLiteral("telloTof"));
        telloTof->setGeometry(QRect(120, 310, 131, 51));
        telloTof->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        telloTofLabel = new QLabel(centralWidget);
        telloTofLabel->setObjectName(QStringLiteral("telloTofLabel"));
        telloTofLabel->setGeometry(QRect(30, 310, 81, 51));
        telloTofLabel->setFont(font);
        formLayoutWidget_4 = new QWidget(centralWidget);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(330, 280, 291, 126));
        degreeFormLayout = new QFormLayout(formLayoutWidget_4);
        degreeFormLayout->setSpacing(6);
        degreeFormLayout->setContentsMargins(11, 11, 11, 11);
        degreeFormLayout->setObjectName(QStringLiteral("degreeFormLayout"));
        degreeFormLayout->setContentsMargins(0, 0, 0, 0);
        telloPitch = new QProgressBar(formLayoutWidget_4);
        telloPitch->setObjectName(QStringLiteral("telloPitch"));
        telloPitch->setStyleSheet(QStringLiteral(""));
        telloPitch->setMinimum(-180);
        telloPitch->setMaximum(180);
        telloPitch->setValue(24);

        degreeFormLayout->setWidget(0, QFormLayout::FieldRole, telloPitch);

        telloRollLabel = new QLabel(formLayoutWidget_4);
        telloRollLabel->setObjectName(QStringLiteral("telloRollLabel"));
        telloRollLabel->setFont(font);

        degreeFormLayout->setWidget(1, QFormLayout::LabelRole, telloRollLabel);

        telloRoll = new QProgressBar(formLayoutWidget_4);
        telloRoll->setObjectName(QStringLiteral("telloRoll"));
        telloRoll->setMinimum(-180);
        telloRoll->setMaximum(180);
        telloRoll->setValue(24);

        degreeFormLayout->setWidget(1, QFormLayout::FieldRole, telloRoll);

        telloYawLabel = new QLabel(formLayoutWidget_4);
        telloYawLabel->setObjectName(QStringLiteral("telloYawLabel"));
        telloYawLabel->setFont(font);

        degreeFormLayout->setWidget(2, QFormLayout::LabelRole, telloYawLabel);

        telloYaw = new QProgressBar(formLayoutWidget_4);
        telloYaw->setObjectName(QStringLiteral("telloYaw"));
        telloYaw->setMinimum(-180);
        telloYaw->setMaximum(180);
        telloYaw->setValue(24);

        degreeFormLayout->setWidget(2, QFormLayout::FieldRole, telloYaw);

        telloPitchLabel = new QLabel(formLayoutWidget_4);
        telloPitchLabel->setObjectName(QStringLiteral("telloPitchLabel"));
        telloPitchLabel->setFont(font);

        degreeFormLayout->setWidget(0, QFormLayout::LabelRole, telloPitchLabel);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        connectTelloButton->setText(QApplication::translate("MainWindow", "connect", 0));
        openCameraButton->setText(QApplication::translate("MainWindow", "openCamera", 0));
        telloBatLabel->setText(QApplication::translate("MainWindow", "bat", 0));
        telloWIFILabel->setText(QApplication::translate("MainWindow", "WIFI", 0));
        telloVgx->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloVgyLabel->setText(QApplication::translate("MainWindow", "Vgy", 0));
        telloVgy->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloVgzLabel->setText(QApplication::translate("MainWindow", "Vgz", 0));
        telloVgz->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloVgxLabel->setText(QApplication::translate("MainWindow", "Vgx", 0));
        telloAgx->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloAgyLabel->setText(QApplication::translate("MainWindow", "Agy", 0));
        telloAgy->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloAgzLabel->setText(QApplication::translate("MainWindow", "Agz", 0));
        telloAgz->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloAgxLabel->setText(QApplication::translate("MainWindow", "Agx", 0));
        telloBaro->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloBaroLabel->setText(QApplication::translate("MainWindow", "Height", 0));
        telloH->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloTofLabel->setText(QApplication::translate("MainWindow", "Tof", 0));
        telloPitch->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloRollLabel->setText(QApplication::translate("MainWindow", "roll", 0));
        telloRoll->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloYawLabel->setText(QApplication::translate("MainWindow", "yaw", 0));
        telloYaw->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloPitchLabel->setText(QApplication::translate("MainWindow", "pitch", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
