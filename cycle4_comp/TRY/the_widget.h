#ifndef THE_WIDGET_H
#define THE_WIDGET_H

#include <QApplication>
#include <QMediaPlayer>
#include "the_button.h"
#include <vector>
#include <string>
#include <QVBoxLayout>

class TheWidget : public QWidget {
    Q_OBJECT

public:
    TheWidget(QWidget *widget) : QWidget(widget) {
        // init();
    }
    TheWidget() : QWidget(NULL) {
        // init();
    }

    QVBoxLayout *thisLayout;

    void getInfoIn (std::string loc);
    void setContent(std::vector<TheButton*>* b, std::vector<TheButtonInfo>* i);

    std::vector<TheButtonInfo>* videos;
    std::vector<TheButton*>* buttons;

    void init();

//private:


//signals:


public slots:
   // void addinQueue(TheButtonInfo *info);
    void loadList(std::string name);
    // void test(TheButtonInfo *info);
};

#endif // THE_WIDGET_H
