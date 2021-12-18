#include "invite.h"
#include "ui_invite.h"

Invite::Invite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Invite)
{
    ui->setupUi(this);
//    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(team()));
}

Invite::~Invite()
{
    delete ui;
}

