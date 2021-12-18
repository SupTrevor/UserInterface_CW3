/********************************************************************************
** Form generated from reading UI file 'video_library.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_LIBRARY_H
#define UI_VIDEO_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_video_library
{
public:
    QAction *actionLog_In;
    QAction *actionInvite;
    QAction *actionExport_File;
    QAction *actionDraft;
    QAction *actionVolume_Expand;
    QWidget *centralWidget;
    QVideoWidget *player_widget;
    QTextBrowser *textBrowser;
    QPushButton *EditBut;
    QLabel *title;
    QSlider *horizontalSlider;
    QWidget *widget_4;
    QPushButton *backwardButton;
    QPushButton *pauseButton;
    QPushButton *forwardButton;
    QPushButton *speedButton;
    QDial *dial;
    QPushButton *playButton;
    QWidget *widget;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QTextBrowser *textBrowser_2;
    QGraphicsView *graphicsView;
    QPushButton *mark1;
    QPushButton *mark2;
    QWidget *widget_5;
    QVideoWidget *flash_widget;
    QLabel *label_4;
    QPushButton *Flash_jump_btn;
    QWidget *user_widget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *user_layout;
    QScrollArea *scrollArea;
    QWidget *folderWidget;
    QScrollArea *Folder_Scroll;
    QWidget *scrollAreaWidgetContents_5;
    QWidget *widget_6;
    QPushButton *pushButton_12;
    QLabel *label_7;
    QPushButton *pushButton_13;
    QFrame *line_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *Label_Area_2;
    QWidget *scrollAreaWidgetContents_6;
    QPushButton *Cycling_Btn_3;
    QLabel *labels_title_3;
    QPushButton *Drone_Btn_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidget;
    QLabel *queue;
    QMenuBar *menuBar;
    QMenu *menuTomeo;
    QMenu *menuUpload;
    QMenu *menuHelp;
    QMenu *menuVoice_Asstant;
    QMenu *menuDisability;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *video_library)
    {
        if (video_library->objectName().isEmpty())
            video_library->setObjectName(QStringLiteral("video_library"));
        video_library->resize(1280, 820);
        video_library->setMinimumSize(QSize(1280, 820));
        video_library->setStyleSheet(QLatin1String("background-color: rgb(31, 31, 31);\n"
"color: rgb(255, 255, 255);"));
        actionLog_In = new QAction(video_library);
        actionLog_In->setObjectName(QStringLiteral("actionLog_In"));
        actionInvite = new QAction(video_library);
        actionInvite->setObjectName(QStringLiteral("actionInvite"));
        actionExport_File = new QAction(video_library);
        actionExport_File->setObjectName(QStringLiteral("actionExport_File"));
        actionDraft = new QAction(video_library);
        actionDraft->setObjectName(QStringLiteral("actionDraft"));
        actionVolume_Expand = new QAction(video_library);
        actionVolume_Expand->setObjectName(QStringLiteral("actionVolume_Expand"));
        centralWidget = new QWidget(video_library);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        player_widget = new QVideoWidget(centralWidget);
        player_widget->setObjectName(QStringLiteral("player_widget"));
        player_widget->setGeometry(QRect(270, 50, 651, 621));
        player_widget->setFocusPolicy(Qt::NoFocus);
        player_widget->setStyleSheet(QStringLiteral("background-color: rgb(97, 72, 89);"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 250, 101));
        textBrowser->setStyleSheet(QLatin1String("border-radius:5px;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 10pt \"Calibri\";"));
        EditBut = new QPushButton(centralWidget);
        EditBut->setObjectName(QStringLiteral("EditBut"));
        EditBut->setGeometry(QRect(180, 115, 71, 31));
        EditBut->setStyleSheet(QLatin1String("border-radius:5px;\n"
"background-color:rgb(153, 153, 153);\n"
"font: 10pt \"Calibri\";\n"
"color: rgb(255, 255, 255);"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(520, 0, 211, 41));
        title->setStyleSheet(QLatin1String("font: 14pt \"Calibri\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(26, 26, 26);"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(280, 680, 631, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(270, 700, 651, 40));
        widget_4->setStyleSheet(QLatin1String("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        backwardButton = new QPushButton(widget_4);
        backwardButton->setObjectName(QStringLiteral("backwardButton"));
        backwardButton->setGeometry(QRect(120, 10, 93, 28));
        backwardButton->setStyleSheet(QLatin1String("font: 10pt \"Calibri\";\n"
"color: rgb(35, 35, 35);"));
        pauseButton = new QPushButton(widget_4);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setGeometry(QRect(280, 10, 93, 28));
        pauseButton->setStyleSheet(QLatin1String("font: 10pt \"Calibri\";\n"
"color: rgb(52, 52, 52);"));
        forwardButton = new QPushButton(widget_4);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        forwardButton->setGeometry(QRect(360, 10, 93, 28));
        forwardButton->setStyleSheet(QLatin1String("font: 10pt \"Calibri\";\n"
"color: rgb(52, 52, 52);"));
        speedButton = new QPushButton(widget_4);
        speedButton->setObjectName(QStringLiteral("speedButton"));
        speedButton->setGeometry(QRect(450, 10, 93, 28));
        speedButton->setStyleSheet(QLatin1String("font: 10pt \"Calibri\";\n"
"color: rgb(67, 67, 67);"));
        dial = new QDial(widget_4);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(30, -10, 50, 64));
        playButton = new QPushButton(widget_4);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(200, 10, 91, 31));
        playButton->setStyleSheet(QLatin1String("font: 10pt \"Calibri\";\n"
"color: rgb(52, 52, 52);"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 150, 251, 91));
        widget->setStyleSheet(QLatin1String("border-radius:5px;\n"
"background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 121, 16));
        label_3->setStyleSheet(QLatin1String("font: 9pt \"Calibri\";\n"
"color: rgb(67, 67, 67);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 41, 51));
        pushButton->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 4);\n"
"border-image: url(:/ski.png);\n"
"gridline-color: rgb(255, 0, 4);"));
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(130, 40, 60, 40));
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/drone4.png);"));
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(70, 34, 50, 41));
        pushButton_9->setStyleSheet(QStringLiteral("border-image: url(:/cycling1.png);"));
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 250, 251, 91));
        textBrowser_2->setStyleSheet(QLatin1String("border-radius:5px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(130, 130, 130);\n"
"font: 10pt \"Calibri\";"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 350, 251, 141));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/map1.png);"));
        mark1 = new QPushButton(centralWidget);
        mark1->setObjectName(QStringLiteral("mark1"));
        mark1->setGeometry(QRect(200, 430, 28, 28));
        mark1->setStyleSheet(QLatin1String("background-color: rgba(255, 0, 4, 100);\n"
"color:rgb(255, 33, 159)"));
        mark2 = new QPushButton(centralWidget);
        mark2->setObjectName(QStringLiteral("mark2"));
        mark2->setGeometry(QRect(70, 420, 28, 28));
        mark2->setStyleSheet(QLatin1String("background-color: rgba(255, 0, 4, 100);\n"
"color:rgb(255, 33, 159)"));
        widget_5 = new QWidget(centralWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(10, 500, 251, 251));
        widget_5->setStyleSheet(QLatin1String("border-radius:5px;\n"
"background-color: rgb(72, 76, 97);"));
        flash_widget = new QVideoWidget(widget_5);
        flash_widget->setObjectName(QStringLiteral("flash_widget"));
        flash_widget->setGeometry(QRect(0, 40, 251, 171));
        flash_widget->setFocusPolicy(Qt::NoFocus);
        flash_widget->setStyleSheet(QStringLiteral("background-color: rgb(72, 76, 97);"));
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 131, 31));
        label_4->setStyleSheet(QStringLiteral("font: 12pt \"Arial\";"));
        Flash_jump_btn = new QPushButton(widget_5);
        Flash_jump_btn->setObjectName(QStringLiteral("Flash_jump_btn"));
        Flash_jump_btn->setGeometry(QRect(132, 220, 111, 28));
        Flash_jump_btn->setStyleSheet(QLatin1String("background-color:rgb(153, 153, 153);\n"
"font: 10pt \"Calibri\";\n"
"color: rgb(255, 255, 255);\n"
""));
        user_widget = new QWidget(centralWidget);
        user_widget->setObjectName(QStringLiteral("user_widget"));
        user_widget->setGeometry(QRect(930, 50, 81, 701));
        user_widget->setStyleSheet(QLatin1String("border-radius:10px;\n"
"background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget_2 = new QWidget(user_widget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(-1, -1, 81, 221));
        user_layout = new QVBoxLayout(verticalLayoutWidget_2);
        user_layout->setSpacing(0);
        user_layout->setContentsMargins(11, 11, 11, 11);
        user_layout->setObjectName(QStringLiteral("user_layout"));
        user_layout->setSizeConstraint(QLayout::SetNoConstraint);
        user_layout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(1020, 630, 250, 121));
        scrollArea->setStyleSheet(QStringLiteral("background-color: rgb(72, 76, 97);"));
        scrollArea->setWidgetResizable(true);
        folderWidget = new QWidget();
        folderWidget->setObjectName(QStringLiteral("folderWidget"));
        folderWidget->setGeometry(QRect(0, 0, 248, 119));
        scrollArea->setWidget(folderWidget);
        Folder_Scroll = new QScrollArea(centralWidget);
        Folder_Scroll->setObjectName(QStringLiteral("Folder_Scroll"));
        Folder_Scroll->setGeometry(QRect(1020, 570, 250, 61));
        Folder_Scroll->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Folder_Scroll->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 248, 59));
        widget_6 = new QWidget(scrollAreaWidgetContents_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(0, 0, 250, 61));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(72, 76, 97);"));
        pushButton_12 = new QPushButton(widget_6);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 10, 30, 30));
        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 10, 81, 30));
        label_7->setStyleSheet(QLatin1String("color: rgb(233, 233, 233);\n"
"font: 14pt \"Arial Black\";"));
        pushButton_13 = new QPushButton(widget_6);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(200, 10, 40, 30));
        line_3 = new QFrame(widget_6);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 40, 221, 20));
        line_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Folder_Scroll->setWidget(scrollAreaWidgetContents_5);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1020, 470, 251, 89));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Label_Area_2 = new QScrollArea(verticalLayoutWidget);
        Label_Area_2->setObjectName(QStringLiteral("Label_Area_2"));
        Label_Area_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Label_Area_2->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 247, 85));
        Cycling_Btn_3 = new QPushButton(scrollAreaWidgetContents_6);
        Cycling_Btn_3->setObjectName(QStringLiteral("Cycling_Btn_3"));
        Cycling_Btn_3->setGeometry(QRect(10, 40, 71, 28));
        Cycling_Btn_3->setStyleSheet(QLatin1String("font: 10pt \"Calibri\";\n"
"color: rgb(52, 52, 52);"));
        labels_title_3 = new QLabel(scrollAreaWidgetContents_6);
        labels_title_3->setObjectName(QStringLiteral("labels_title_3"));
        labels_title_3->setGeometry(QRect(10, 10, 72, 15));
        labels_title_3->setStyleSheet(QLatin1String("font: 12pt \"Arial\";\n"
"color: rgb(34, 34, 34);"));
        Drone_Btn_3 = new QPushButton(scrollAreaWidgetContents_6);
        Drone_Btn_3->setObjectName(QStringLiteral("Drone_Btn_3"));
        Drone_Btn_3->setGeometry(QRect(90, 40, 71, 28));
        Drone_Btn_3->setStyleSheet(QLatin1String("font: 10pt \"Calibri\";\n"
"color: rgb(52, 52, 52);"));
        Label_Area_2->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_2->addWidget(Label_Area_2);

        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(1030, 80, 231, 371));
        scrollArea_2->setStyleSheet(QStringLiteral("background-color: rgb(72, 76, 97);"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName(QStringLiteral("scrollAreaWidget"));
        scrollAreaWidget->setGeometry(QRect(0, 0, 229, 369));
        scrollArea_2->setWidget(scrollAreaWidget);
        queue = new QLabel(centralWidget);
        queue->setObjectName(QStringLiteral("queue"));
        queue->setGeometry(QRect(1030, 55, 231, 21));
        video_library->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(video_library);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 17));
        menuTomeo = new QMenu(menuBar);
        menuTomeo->setObjectName(QStringLiteral("menuTomeo"));
        menuUpload = new QMenu(menuBar);
        menuUpload->setObjectName(QStringLiteral("menuUpload"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuVoice_Asstant = new QMenu(menuBar);
        menuVoice_Asstant->setObjectName(QStringLiteral("menuVoice_Asstant"));
        menuDisability = new QMenu(menuBar);
        menuDisability->setObjectName(QStringLiteral("menuDisability"));
        video_library->setMenuBar(menuBar);
        mainToolBar = new QToolBar(video_library);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        video_library->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(video_library);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        video_library->setStatusBar(statusBar);

        menuBar->addAction(menuTomeo->menuAction());
        menuBar->addAction(menuUpload->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuVoice_Asstant->menuAction());
        menuBar->addAction(menuDisability->menuAction());
        menuTomeo->addAction(actionLog_In);
        menuTomeo->addAction(actionInvite);
        menuUpload->addAction(actionExport_File);
        menuUpload->addAction(actionDraft);
        menuDisability->addAction(actionVolume_Expand);

        retranslateUi(video_library);

        QMetaObject::connectSlotsByName(video_library);
    } // setupUi

    void retranslateUi(QMainWindow *video_library)
    {
        video_library->setWindowTitle(QApplication::translate("video_library", "video_library", Q_NULLPTR));
        actionLog_In->setText(QApplication::translate("video_library", "Log In", Q_NULLPTR));
        actionInvite->setText(QApplication::translate("video_library", "Invite", Q_NULLPTR));
        actionExport_File->setText(QApplication::translate("video_library", "Export File", Q_NULLPTR));
        actionDraft->setText(QApplication::translate("video_library", "Draft", Q_NULLPTR));
        actionVolume_Expand->setText(QApplication::translate("video_library", "Volume Expand", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("video_library", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">This project describes</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Journey To the West</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; color:#ffffff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent"
                        ":0px;\"><span style=\" font-family:'SimSun'; color:#ffffff;\">______________________</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Mount Five Fingers</span></p></body></html>", Q_NULLPTR));
        EditBut->setText(QApplication::translate("video_library", "Edit", Q_NULLPTR));
        title->setText(QApplication::translate("video_library", "Title of current video", Q_NULLPTR));
        backwardButton->setText(QApplication::translate("video_library", "Backwards", Q_NULLPTR));
        pauseButton->setText(QApplication::translate("video_library", "Pause", Q_NULLPTR));
        forwardButton->setText(QApplication::translate("video_library", "Forwards", Q_NULLPTR));
        speedButton->setText(QApplication::translate("video_library", "Speed", Q_NULLPTR));
        playButton->setText(QApplication::translate("video_library", "Play", Q_NULLPTR));
        label_3->setText(QApplication::translate("video_library", "Achievements:", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        textBrowser_2->setHtml(QApplication::translate("video_library", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Uptil now,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">You have uploaded 10 videos,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">visited 8 places,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><spa"
                        "n style=\" font-size:11pt;\">the highest altitude you arrived are 8000 feet.</span></p></body></html>", Q_NULLPTR));
        mark1->setText(QApplication::translate("video_library", "*", Q_NULLPTR));
        mark2->setText(QApplication::translate("video_library", "*", Q_NULLPTR));
        label_4->setText(QApplication::translate("video_library", "Flash player:", Q_NULLPTR));
        Flash_jump_btn->setText(QApplication::translate("video_library", "Jump To this", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("video_library", "<", Q_NULLPTR));
        label_7->setText(QApplication::translate("video_library", "Home", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("video_library", "new", Q_NULLPTR));
        Cycling_Btn_3->setText(QApplication::translate("video_library", "Cycling", Q_NULLPTR));
        labels_title_3->setText(QApplication::translate("video_library", "Labels:", Q_NULLPTR));
        Drone_Btn_3->setText(QApplication::translate("video_library", "Drone", Q_NULLPTR));
        queue->setText(QApplication::translate("video_library", "TextLabel", Q_NULLPTR));
        menuTomeo->setTitle(QApplication::translate("video_library", "Tomeo", Q_NULLPTR));
        menuUpload->setTitle(QApplication::translate("video_library", "Upload", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("video_library", "Help", Q_NULLPTR));
        menuVoice_Asstant->setTitle(QApplication::translate("video_library", "Voice Asstant", Q_NULLPTR));
        menuDisability->setTitle(QApplication::translate("video_library", "Disability", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class video_library: public Ui_video_library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_LIBRARY_H
