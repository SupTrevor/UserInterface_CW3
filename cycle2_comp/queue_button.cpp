
#include "queue_button.h"
#include <QDebug>


void TheButton::init(TheButtonInfo* i) {
    setIcon( *(i->icon) );
    info =  i;
}


void TheButton::clicked() {
    if (info->name == "folderButton")
    {
        emit jumpTo2(info);
        qDebug() << "clicked folderButton" <<endl;
    }
    else
    {
        emit jumpTo(info);
        qDebug() << "clicked scrollAreaButton" <<endl;
    }
}

//void TheButton::pressed() {
//    emit jumpTo2(info);
//}

//void TheButton::test(TheButtonInfo *) {
//    emit clicked();
//}

//TheButton * TheButtonInfo::getButton() {
//    return this->button;
//}

//TheButton* TheButton::getNext(TheButton *button, std::vector<TheButton*> buttons) {

//}
