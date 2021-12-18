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
#include <QtWidgets/QFrame>
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
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_video_library
{
public:
    QWidget *centralWidget;
    QVideoWidget *player_widget;
    QTextBrowser *textBrowser;
    QPushButton *Edit_But;
    QScrollArea *Folder_Scroll;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QFrame *line;
    QScrollArea *scrollArea_2;
    QWidget *folderWidget;
    QLabel *title;
    QSlider *horizontalSlider;
    QWidget *widget_4;
    QPushButton *volumnButton;
    QPushButton *backwardButton;
    QPushButton *playButton;
    QPushButton *forwardButton;
    QPushButton *speedButton;
    QPushButton *pauseButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget;
    QLabel *queue;
    QWidget *widget;
    QMenuBar *menuBar;
    QMenu *menuTomeo;
    QMenu *menudfsd;
    QMenu *menuhjh;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *video_library)
    {
        if (video_library->objectName().isEmpty())
            video_library->setObjectName(QStringLiteral("video_library"));
        video_library->resize(1280, 820);
        video_library->setMinimumSize(QSize(1280, 820));
        video_library->setStyleSheet(QStringLiteral("background-color: rgb(165, 165, 165);"));
        centralWidget = new QWidget(video_library);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        player_widget = new QVideoWidget(centralWidget);
        player_widget->setObjectName(QStringLiteral("player_widget"));
        player_widget->setGeometry(QRect(280, 50, 711, 611));
        player_widget->setFocusPolicy(Qt::NoFocus);
        player_widget->setStyleSheet(QStringLiteral("background-color: rgb(237, 125, 49);"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 250, 130));
        textBrowser->setStyleSheet(QStringLiteral("background-color: rgb(69, 215, 255);"));
        Edit_But = new QPushButton(centralWidget);
        Edit_But->setObjectName(QStringLiteral("Edit_But"));
        Edit_But->setGeometry(QRect(170, 150, 90, 30));
        Folder_Scroll = new QScrollArea(centralWidget);
        Folder_Scroll->setObjectName(QStringLiteral("Folder_Scroll"));
        Folder_Scroll->setGeometry(QRect(10, 330, 250, 491));
        Folder_Scroll->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Folder_Scroll->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 248, 489));
        widget_2 = new QWidget(scrollAreaWidgetContents);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 251, 441));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(68, 114, 196);"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 30, 30));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 81, 30));
        label->setStyleSheet(QStringLiteral("color: rgb(233, 233, 233);"));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 10, 40, 30));
        line = new QFrame(widget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 221, 20));
        line->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        scrollArea_2 = new QScrollArea(widget_2);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 60, 221, 361));
        scrollArea_2->setWidgetResizable(true);
        folderWidget = new QWidget();
        folderWidget->setObjectName(QStringLiteral("folderWidget"));
        folderWidget->setGeometry(QRect(0, 0, 219, 359));
        scrollArea_2->setWidget(folderWidget);
        Folder_Scroll->setWidget(scrollAreaWidgetContents);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(530, 10, 181, 31));
        title->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Adobe Devanagari\";"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(290, 670, 711, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(270, 700, 731, 40));
        widget_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        volumnButton = new QPushButton(widget_4);
        volumnButton->setObjectName(QStringLiteral("volumnButton"));
        volumnButton->setGeometry(QRect(10, 10, 93, 28));
        backwardButton = new QPushButton(widget_4);
        backwardButton->setObjectName(QStringLiteral("backwardButton"));
        backwardButton->setGeometry(QRect(150, 10, 93, 28));
        playButton = new QPushButton(widget_4);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(260, 10, 93, 28));
        forwardButton = new QPushButton(widget_4);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        forwardButton->setGeometry(QRect(480, 10, 93, 28));
        speedButton = new QPushButton(widget_4);
        speedButton->setObjectName(QStringLiteral("speedButton"));
        speedButton->setGeometry(QRect(630, 10, 93, 28));
        pauseButton = new QPushButton(widget_4);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setGeometry(QRect(370, 10, 93, 28));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(1010, 20, 251, 761));
        scrollArea->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName(QStringLiteral("scrollAreaWidget"));
        scrollAreaWidget->setGeometry(QRect(0, 0, 249, 759));
        scrollArea->setWidget(scrollAreaWidget);
        queue = new QLabel(centralWidget);
        queue->setObjectName(QStringLiteral("queue"));
        queue->setGeometry(QRect(1030, 0, 131, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 190, 231, 121));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 0);"));
        video_library->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(video_library);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 17));
        menuTomeo = new QMenu(menuBar);
        menuTomeo->setObjectName(QStringLiteral("menuTomeo"));
        menudfsd = new QMenu(menuBar);
        menudfsd->setObjectName(QStringLiteral("menudfsd"));
        menuhjh = new QMenu(menuBar);
        menuhjh->setObjectName(QStringLiteral("menuhjh"));
        video_library->setMenuBar(menuBar);
        mainToolBar = new QToolBar(video_library);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        video_library->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(video_library);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        video_library->setStatusBar(statusBar);

        menuBar->addAction(menuTomeo->menuAction());
        menuBar->addAction(menudfsd->menuAction());
        menuBar->addAction(menuhjh->menuAction());

        retranslateUi(video_library);

        QMetaObject::connectSlotsByName(video_library);
    } // setupUi

    void retranslateUi(QMainWindow *video_library)
    {
        video_library->setWindowTitle(QApplication::translate("video_library", "video_library", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("video_library", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This project describes</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Journey To the West</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Lables: </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-"
                        "indent:0; text-indent:0px;\">______________________</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mount Five Fingers</p></body></html>", Q_NULLPTR));
        Edit_But->setText(QApplication::translate("video_library", "Edit", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("video_library", "<", Q_NULLPTR));
        label->setText(QApplication::translate("video_library", "Laborotory", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("video_library", "new", Q_NULLPTR));
        title->setText(QApplication::translate("video_library", "Title of current video", Q_NULLPTR));
        volumnButton->setText(QApplication::translate("video_library", "Volumn", Q_NULLPTR));
        backwardButton->setText(QApplication::translate("video_library", "Backwards", Q_NULLPTR));
        playButton->setText(QApplication::translate("video_library", "Play", Q_NULLPTR));
        forwardButton->setText(QApplication::translate("video_library", "Forwards", Q_NULLPTR));
        speedButton->setText(QApplication::translate("video_library", "Speed", Q_NULLPTR));
        pauseButton->setText(QApplication::translate("video_library", "Pause", Q_NULLPTR));
        queue->setText(QApplication::translate("video_library", "TextLabel", Q_NULLPTR));
        menuTomeo->setTitle(QApplication::translate("video_library", "Tomeo", Q_NULLPTR));
        menudfsd->setTitle(QApplication::translate("video_library", "dfsd", Q_NULLPTR));
        menuhjh->setTitle(QApplication::translate("video_library", "hjh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class video_library: public Ui_video_library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_LIBRARY_H
