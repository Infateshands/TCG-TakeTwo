#include "loginregister.h"
#include "./ui_loginregister.h"
#include "userhome.h"

LoginRegister::LoginRegister(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginRegister)
{
    ui->setupUi(this);
}

LoginRegister::~LoginRegister()
{
    delete ui;
}


void LoginRegister::on_loginButton_clicked()
{
    UserHome* userHome = new class UserHome;
    userHome->show();
    close();
}

