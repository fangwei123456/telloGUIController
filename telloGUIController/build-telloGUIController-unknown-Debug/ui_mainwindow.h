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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
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
    QLabel *telloVgxLabel;
    QProgressBar *telloVgx;
    QLabel *telloVgyLabel;
    QProgressBar *telloVgy;
    QLabel *telloVgzLabel;
    QProgressBar *telloVgz;
    QWidget *formLayoutWidget_3;
    QFormLayout *aFormLayout;
    QLabel *telloAgyLabel;
    QLabel *telloAgzLabel;
    QLabel *telloAgxLabel;
    QSlider *telloAgx;
    QSlider *telloAgy;
    QSlider *telloAgz;
    QWidget *formLayoutWidget_4;
    QFormLayout *degreeFormLayout;
    QLabel *telloPitchLabel;
    QLabel *telloRollLabel;
    QSlider *telloRoll;
    QLabel *telloYawLabel;
    QSlider *telloYaw;
    QSlider *telloPitch;
    QLCDNumber *telloPitchV;
    QLCDNumber *telloRollV;
    QLCDNumber *telloYawV;
    QTextBrowser *orderTextBrowser;
    QTextBrowser *replyTextBrowser;
    QTextBrowser *keyboardTextBrowser;
    QLabel *orderLabel;
    QLabel *replyLabel;
    QLCDNumber *telloAgxV;
    QLCDNumber *telloAgyV;
    QLCDNumber *telloAgzV;
    QWidget *formLayoutWidget_5;
    QFormLayout *sensitivityFormLayout;
    QLabel *moveSensitivityLabel;
    QProgressBar *moveSensitivity;
    QLabel *rotateSensitivityLabel;
    QProgressBar *rotateSensitivity;
    QLabel *moveSpeedLabel;
    QProgressBar *moveSpeed;
    QWidget *formLayoutWidget_6;
    QFormLayout *heightFormLayout;
    QLabel *telloHLabel;
    QProgressBar *telloH;
    QLabel *telloBaroLabel;
    QProgressBar *telloBaro;
    QLabel *telloTofLabel;
    QProgressBar *telloTof;
    QLineEdit *commandLineEdit;
    QComboBox *controlModeComboBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1229, 813);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        connectTelloButton = new QPushButton(centralWidget);
        connectTelloButton->setObjectName(QStringLiteral("connectTelloButton"));
        connectTelloButton->setGeometry(QRect(890, 10, 121, 41));
        openCameraButton = new QPushButton(centralWidget);
        openCameraButton->setObjectName(QStringLiteral("openCameraButton"));
        openCameraButton->setGeometry(QRect(890, 70, 121, 41));
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
        formLayoutWidget_2->setGeometry(QRect(20, 130, 301, 101));
        vFormLayout = new QFormLayout(formLayoutWidget_2);
        vFormLayout->setSpacing(6);
        vFormLayout->setContentsMargins(11, 11, 11, 11);
        vFormLayout->setObjectName(QStringLiteral("vFormLayout"));
        vFormLayout->setContentsMargins(0, 0, 0, 0);
        telloVgxLabel = new QLabel(formLayoutWidget_2);
        telloVgxLabel->setObjectName(QStringLiteral("telloVgxLabel"));
        telloVgxLabel->setFont(font);

        vFormLayout->setWidget(0, QFormLayout::LabelRole, telloVgxLabel);

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

        formLayoutWidget_3 = new QWidget(centralWidget);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(460, 280, 291, 126));
        aFormLayout = new QFormLayout(formLayoutWidget_3);
        aFormLayout->setSpacing(6);
        aFormLayout->setContentsMargins(11, 11, 11, 11);
        aFormLayout->setObjectName(QStringLiteral("aFormLayout"));
        aFormLayout->setContentsMargins(0, 0, 0, 0);
        telloAgyLabel = new QLabel(formLayoutWidget_3);
        telloAgyLabel->setObjectName(QStringLiteral("telloAgyLabel"));
        telloAgyLabel->setFont(font);

        aFormLayout->setWidget(1, QFormLayout::LabelRole, telloAgyLabel);

        telloAgzLabel = new QLabel(formLayoutWidget_3);
        telloAgzLabel->setObjectName(QStringLiteral("telloAgzLabel"));
        telloAgzLabel->setFont(font);

        aFormLayout->setWidget(2, QFormLayout::LabelRole, telloAgzLabel);

        telloAgxLabel = new QLabel(formLayoutWidget_3);
        telloAgxLabel->setObjectName(QStringLiteral("telloAgxLabel"));
        telloAgxLabel->setFont(font);

        aFormLayout->setWidget(0, QFormLayout::LabelRole, telloAgxLabel);

        telloAgx = new QSlider(formLayoutWidget_3);
        telloAgx->setObjectName(QStringLiteral("telloAgx"));
        telloAgx->setEnabled(false);
        telloAgx->setMinimum(-1500);
        telloAgx->setMaximum(1500);
        telloAgx->setOrientation(Qt::Horizontal);
        telloAgx->setTickPosition(QSlider::TicksAbove);
        telloAgx->setTickInterval(200);

        aFormLayout->setWidget(0, QFormLayout::FieldRole, telloAgx);

        telloAgy = new QSlider(formLayoutWidget_3);
        telloAgy->setObjectName(QStringLiteral("telloAgy"));
        telloAgy->setEnabled(false);
        telloAgy->setMinimum(-1500);
        telloAgy->setMaximum(1500);
        telloAgy->setOrientation(Qt::Horizontal);
        telloAgy->setTickPosition(QSlider::TicksAbove);
        telloAgy->setTickInterval(200);

        aFormLayout->setWidget(1, QFormLayout::FieldRole, telloAgy);

        telloAgz = new QSlider(formLayoutWidget_3);
        telloAgz->setObjectName(QStringLiteral("telloAgz"));
        telloAgz->setEnabled(false);
        telloAgz->setMinimum(-1500);
        telloAgz->setMaximum(1500);
        telloAgz->setOrientation(Qt::Horizontal);
        telloAgz->setTickPosition(QSlider::TicksAbove);
        telloAgz->setTickInterval(200);

        aFormLayout->setWidget(2, QFormLayout::FieldRole, telloAgz);

        formLayoutWidget_4 = new QWidget(centralWidget);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(20, 280, 301, 131));
        degreeFormLayout = new QFormLayout(formLayoutWidget_4);
        degreeFormLayout->setSpacing(6);
        degreeFormLayout->setContentsMargins(11, 11, 11, 11);
        degreeFormLayout->setObjectName(QStringLiteral("degreeFormLayout"));
        degreeFormLayout->setContentsMargins(0, 0, 0, 0);
        telloPitchLabel = new QLabel(formLayoutWidget_4);
        telloPitchLabel->setObjectName(QStringLiteral("telloPitchLabel"));
        telloPitchLabel->setFont(font);

        degreeFormLayout->setWidget(0, QFormLayout::LabelRole, telloPitchLabel);

        telloRollLabel = new QLabel(formLayoutWidget_4);
        telloRollLabel->setObjectName(QStringLiteral("telloRollLabel"));
        telloRollLabel->setFont(font);

        degreeFormLayout->setWidget(1, QFormLayout::LabelRole, telloRollLabel);

        telloRoll = new QSlider(formLayoutWidget_4);
        telloRoll->setObjectName(QStringLiteral("telloRoll"));
        telloRoll->setEnabled(false);
        telloRoll->setMinimum(-180);
        telloRoll->setMaximum(180);
        telloRoll->setOrientation(Qt::Horizontal);
        telloRoll->setTickPosition(QSlider::TicksAbove);
        telloRoll->setTickInterval(10);

        degreeFormLayout->setWidget(1, QFormLayout::FieldRole, telloRoll);

        telloYawLabel = new QLabel(formLayoutWidget_4);
        telloYawLabel->setObjectName(QStringLiteral("telloYawLabel"));
        telloYawLabel->setFont(font);

        degreeFormLayout->setWidget(2, QFormLayout::LabelRole, telloYawLabel);

        telloYaw = new QSlider(formLayoutWidget_4);
        telloYaw->setObjectName(QStringLiteral("telloYaw"));
        telloYaw->setEnabled(false);
        telloYaw->setMinimum(-180);
        telloYaw->setMaximum(180);
        telloYaw->setOrientation(Qt::Horizontal);
        telloYaw->setTickPosition(QSlider::TicksAbove);

        degreeFormLayout->setWidget(2, QFormLayout::FieldRole, telloYaw);

        telloPitch = new QSlider(formLayoutWidget_4);
        telloPitch->setObjectName(QStringLiteral("telloPitch"));
        telloPitch->setEnabled(false);
        telloPitch->setMinimum(-90);
        telloPitch->setMaximum(90);
        telloPitch->setOrientation(Qt::Horizontal);
        telloPitch->setTickPosition(QSlider::TicksAbove);
        telloPitch->setTickInterval(5);

        degreeFormLayout->setWidget(0, QFormLayout::FieldRole, telloPitch);

        telloPitchV = new QLCDNumber(centralWidget);
        telloPitchV->setObjectName(QStringLiteral("telloPitchV"));
        telloPitchV->setGeometry(QRect(330, 280, 101, 41));
        telloPitchV->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        telloRollV = new QLCDNumber(centralWidget);
        telloRollV->setObjectName(QStringLiteral("telloRollV"));
        telloRollV->setGeometry(QRect(330, 320, 101, 41));
        telloRollV->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        telloYawV = new QLCDNumber(centralWidget);
        telloYawV->setObjectName(QStringLiteral("telloYawV"));
        telloYawV->setGeometry(QRect(330, 360, 101, 41));
        telloYawV->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        orderTextBrowser = new QTextBrowser(centralWidget);
        orderTextBrowser->setObjectName(QStringLiteral("orderTextBrowser"));
        orderTextBrowser->setEnabled(true);
        orderTextBrowser->setGeometry(QRect(460, 440, 191, 351));
        replyTextBrowser = new QTextBrowser(centralWidget);
        replyTextBrowser->setObjectName(QStringLiteral("replyTextBrowser"));
        replyTextBrowser->setGeometry(QRect(660, 440, 121, 351));
        keyboardTextBrowser = new QTextBrowser(centralWidget);
        keyboardTextBrowser->setObjectName(QStringLiteral("keyboardTextBrowser"));
        keyboardTextBrowser->setGeometry(QRect(10, 440, 431, 351));
        orderLabel = new QLabel(centralWidget);
        orderLabel->setObjectName(QStringLiteral("orderLabel"));
        orderLabel->setGeometry(QRect(460, 410, 71, 27));
        orderLabel->setFont(font);
        replyLabel = new QLabel(centralWidget);
        replyLabel->setObjectName(QStringLiteral("replyLabel"));
        replyLabel->setGeometry(QRect(660, 410, 61, 27));
        replyLabel->setFont(font);
        telloAgxV = new QLCDNumber(centralWidget);
        telloAgxV->setObjectName(QStringLiteral("telloAgxV"));
        telloAgxV->setGeometry(QRect(760, 280, 101, 41));
        telloAgxV->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        telloAgyV = new QLCDNumber(centralWidget);
        telloAgyV->setObjectName(QStringLiteral("telloAgyV"));
        telloAgyV->setGeometry(QRect(760, 320, 101, 41));
        telloAgyV->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        telloAgzV = new QLCDNumber(centralWidget);
        telloAgzV->setObjectName(QStringLiteral("telloAgzV"));
        telloAgzV->setGeometry(QRect(760, 360, 101, 41));
        telloAgzV->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        formLayoutWidget_5 = new QWidget(centralWidget);
        formLayoutWidget_5->setObjectName(QStringLiteral("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(330, 130, 531, 98));
        sensitivityFormLayout = new QFormLayout(formLayoutWidget_5);
        sensitivityFormLayout->setSpacing(6);
        sensitivityFormLayout->setContentsMargins(11, 11, 11, 11);
        sensitivityFormLayout->setObjectName(QStringLiteral("sensitivityFormLayout"));
        sensitivityFormLayout->setContentsMargins(0, 0, 0, 0);
        moveSensitivityLabel = new QLabel(formLayoutWidget_5);
        moveSensitivityLabel->setObjectName(QStringLiteral("moveSensitivityLabel"));
        moveSensitivityLabel->setFont(font);

        sensitivityFormLayout->setWidget(0, QFormLayout::LabelRole, moveSensitivityLabel);

        moveSensitivity = new QProgressBar(formLayoutWidget_5);
        moveSensitivity->setObjectName(QStringLiteral("moveSensitivity"));
        moveSensitivity->setMinimum(-1);
        moveSensitivity->setMaximum(400);
        moveSensitivity->setValue(20);
        moveSensitivity->setOrientation(Qt::Horizontal);

        sensitivityFormLayout->setWidget(0, QFormLayout::FieldRole, moveSensitivity);

        rotateSensitivityLabel = new QLabel(formLayoutWidget_5);
        rotateSensitivityLabel->setObjectName(QStringLiteral("rotateSensitivityLabel"));
        rotateSensitivityLabel->setFont(font);

        sensitivityFormLayout->setWidget(1, QFormLayout::LabelRole, rotateSensitivityLabel);

        rotateSensitivity = new QProgressBar(formLayoutWidget_5);
        rotateSensitivity->setObjectName(QStringLiteral("rotateSensitivity"));
        rotateSensitivity->setMinimum(-1);
        rotateSensitivity->setMaximum(400);
        rotateSensitivity->setValue(1);
        rotateSensitivity->setOrientation(Qt::Horizontal);

        sensitivityFormLayout->setWidget(1, QFormLayout::FieldRole, rotateSensitivity);

        moveSpeedLabel = new QLabel(formLayoutWidget_5);
        moveSpeedLabel->setObjectName(QStringLiteral("moveSpeedLabel"));
        moveSpeedLabel->setFont(font);

        sensitivityFormLayout->setWidget(2, QFormLayout::LabelRole, moveSpeedLabel);

        moveSpeed = new QProgressBar(formLayoutWidget_5);
        moveSpeed->setObjectName(QStringLiteral("moveSpeed"));
        moveSpeed->setEnabled(true);
        moveSpeed->setStyleSheet(QStringLiteral(""));
        moveSpeed->setMinimum(10);
        moveSpeed->setMaximum(100);
        moveSpeed->setValue(10);
        moveSpeed->setOrientation(Qt::Horizontal);

        sensitivityFormLayout->setWidget(2, QFormLayout::FieldRole, moveSpeed);

        formLayoutWidget_6 = new QWidget(centralWidget);
        formLayoutWidget_6->setObjectName(QStringLiteral("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(330, 20, 531, 101));
        heightFormLayout = new QFormLayout(formLayoutWidget_6);
        heightFormLayout->setSpacing(6);
        heightFormLayout->setContentsMargins(11, 11, 11, 11);
        heightFormLayout->setObjectName(QStringLiteral("heightFormLayout"));
        heightFormLayout->setContentsMargins(0, 0, 0, 0);
        telloHLabel = new QLabel(formLayoutWidget_6);
        telloHLabel->setObjectName(QStringLiteral("telloHLabel"));
        telloHLabel->setFont(font);

        heightFormLayout->setWidget(0, QFormLayout::LabelRole, telloHLabel);

        telloH = new QProgressBar(formLayoutWidget_6);
        telloH->setObjectName(QStringLiteral("telloH"));
        telloH->setMaximum(30);
        telloH->setValue(24);
        telloH->setOrientation(Qt::Horizontal);

        heightFormLayout->setWidget(0, QFormLayout::FieldRole, telloH);

        telloBaroLabel = new QLabel(formLayoutWidget_6);
        telloBaroLabel->setObjectName(QStringLiteral("telloBaroLabel"));
        telloBaroLabel->setFont(font);

        heightFormLayout->setWidget(1, QFormLayout::LabelRole, telloBaroLabel);

        telloBaro = new QProgressBar(formLayoutWidget_6);
        telloBaro->setObjectName(QStringLiteral("telloBaro"));
        telloBaro->setMinimum(-100);
        telloBaro->setMaximum(0);
        telloBaro->setValue(-50);
        telloBaro->setOrientation(Qt::Horizontal);

        heightFormLayout->setWidget(1, QFormLayout::FieldRole, telloBaro);

        telloTofLabel = new QLabel(formLayoutWidget_6);
        telloTofLabel->setObjectName(QStringLiteral("telloTofLabel"));
        telloTofLabel->setFont(font);

        heightFormLayout->setWidget(2, QFormLayout::LabelRole, telloTofLabel);

        telloTof = new QProgressBar(formLayoutWidget_6);
        telloTof->setObjectName(QStringLiteral("telloTof"));
        telloTof->setMinimum(-1);
        telloTof->setMaximum(400);
        telloTof->setValue(24);
        telloTof->setOrientation(Qt::Horizontal);

        heightFormLayout->setWidget(2, QFormLayout::FieldRole, telloTof);

        commandLineEdit = new QLineEdit(centralWidget);
        commandLineEdit->setObjectName(QStringLiteral("commandLineEdit"));
        commandLineEdit->setEnabled(false);
        commandLineEdit->setGeometry(QRect(510, 250, 331, 31));
        QFont font1;
        font1.setPointSize(14);
        commandLineEdit->setFont(font1);
        controlModeComboBox = new QComboBox(centralWidget);
        controlModeComboBox->setObjectName(QStringLiteral("controlModeComboBox"));
        controlModeComboBox->setGeometry(QRect(320, 250, 181, 31));
        controlModeComboBox->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        connectTelloButton->setText(QApplication::translate("MainWindow", "connect", 0));
        openCameraButton->setText(QApplication::translate("MainWindow", "openCamera", 0));
        telloBatLabel->setText(QApplication::translate("MainWindow", "Bat", 0));
        telloWIFILabel->setText(QApplication::translate("MainWindow", "WIFI", 0));
        telloVgxLabel->setText(QApplication::translate("MainWindow", "Vgx", 0));
        telloVgx->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloVgyLabel->setText(QApplication::translate("MainWindow", "Vgy", 0));
        telloVgy->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloVgzLabel->setText(QApplication::translate("MainWindow", "Vgz", 0));
        telloVgz->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloAgyLabel->setText(QApplication::translate("MainWindow", "Agy", 0));
        telloAgzLabel->setText(QApplication::translate("MainWindow", "Agz", 0));
        telloAgxLabel->setText(QApplication::translate("MainWindow", "Agx", 0));
        telloPitchLabel->setText(QApplication::translate("MainWindow", "Pitch", 0));
        telloRollLabel->setText(QApplication::translate("MainWindow", "Roll", 0));
        telloYawLabel->setText(QApplication::translate("MainWindow", "Yaw", 0));
        orderTextBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        replyTextBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        keyboardTextBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F1   connect to tello and start command mode   </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">F2   stop tello's engine, EMERGENCY </span>           </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F3   open video stream                         </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "F4   off video stream                          </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F5   takeoff                                   </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F6   land                                      </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">W    up                                        </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">S    down                                      </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A    left                                      </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\">D    right                                     </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\221    forward                                   </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\342\206\223    back                                      </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Q    ccw, \342\206\272                                    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">E    cw, \342\206\273                                     </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1    decrease move distance                    </p>\n"
"<p "
                        "style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2    increase move distance                    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3    decrease rotate degree                    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">4    increase rotate degree  </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5    decrease move speed </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">6    increase move speed </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Y    set speed                  </p></body></html>", 0));
        orderLabel->setText(QApplication::translate("MainWindow", "Order", 0));
        replyLabel->setText(QApplication::translate("MainWindow", "Reply", 0));
        moveSensitivityLabel->setText(QApplication::translate("MainWindow", "Move Sensitivity", 0));
        moveSensitivity->setFormat(QApplication::translate("MainWindow", "%v", 0));
        rotateSensitivityLabel->setText(QApplication::translate("MainWindow", "Rotate Sensitivity", 0));
        rotateSensitivity->setFormat(QApplication::translate("MainWindow", "%v", 0));
        moveSpeedLabel->setText(QApplication::translate("MainWindow", "Move Speed", 0));
        moveSpeed->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloHLabel->setText(QApplication::translate("MainWindow", "Height(Relative)", 0));
        telloH->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloBaroLabel->setText(QApplication::translate("MainWindow", "Height(Baro)", 0));
        telloBaro->setFormat(QApplication::translate("MainWindow", "%v", 0));
        telloTofLabel->setText(QApplication::translate("MainWindow", "Height(Tof)", 0));
        telloTof->setFormat(QApplication::translate("MainWindow", "%v", 0));
        commandLineEdit->setText(QApplication::translate("MainWindow", "command", 0));
        controlModeComboBox->clear();
        controlModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "keyboard control", 0)
         << QApplication::translate("MainWindow", "input command", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
