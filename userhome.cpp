#include "userhome.h"
#include "ui_userhome.h"

UserHome::UserHome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserHome)
{
    ui->setupUi(this);
}

UserHome::~UserHome()
{
    delete ui;
}
