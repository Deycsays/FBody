#include "login.h"
#include "ui_login.h"
#include "fbmodel.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_buttonBox_accepted()
{
    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    if (!FBModel::getInstance().isLoginPasswordCorrect(login, password))
    {
        QMessageBox::warning(0, "Error", "Login incorrect!", QString(), QString(), QString(), 0, 0);
    }
    else
    {
        QMessageBox::information(0, "Error", "Login correct!", QString(), QString(), QString(), 0, 0);
    }
}
