#ifndef USERHOME_H
#define USERHOME_H

#include <QMainWindow>

namespace Ui {
class UserHome;
}

class UserHome : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserHome(QWidget *parent = nullptr);
    ~UserHome();

private:
    Ui::UserHome *ui;
};

#endif // USERHOME_H
