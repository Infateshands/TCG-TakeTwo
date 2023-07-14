#ifndef LOGINREGISTER_H
#define LOGINREGISTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginRegister; }
QT_END_NAMESPACE

class LoginRegister : public QMainWindow
{
    Q_OBJECT

public:
    LoginRegister(QWidget *parent = nullptr);
    ~LoginRegister();

private slots:
    void on_loginButton_clicked();

private:
    Ui::LoginRegister *ui;
};
#endif // LOGINREGISTER_H
