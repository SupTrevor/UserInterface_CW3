#-------------------------------------------------
#
# Project created by QtCreator 2021-12-15T16:11:00
#
#-------------------------------------------------

QT       += core gui widgets multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TRY
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        video_library.cpp \
    the_player.cpp \
    dialog.cpp \
    login.cpp \
    invite.cpp \
    the_button.cpp \
    the_widget.cpp

HEADERS += \
        video_library.h \
    the_player.h \
    dialog.h \
    login.h \
    invite.h \
    the_button.h \
    the_widget.h \
    main.h

FORMS += \
        video_library.ui \
    dialog.ui \
    login.ui \
    invite.ui

RESOURCES += \
    resource.qrc

DISTFILES += \
    video_image1.png
