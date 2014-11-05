#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSystemTrayIcon>
#include "login.h"

QSystemTrayIcon *trayIcon = NULL;


void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
        break;
    case QSystemTrayIcon::DoubleClick:
        if (this->isHidden())
        {
            this->show();
        }
        else
        {
            this->hide();
        }
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    default:
        break;
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    trayIcon = new QSystemTrayIcon(this);
    QIcon icon(PATH_TO_RES + "icon.png");
    trayIcon->setIcon(icon);
    trayIcon->show();
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
}


Login * loginForm = NULL;
void MainWindow::on_pushButton_2_clicked()
{
    if (loginForm != NULL)
    {
        loginForm->close();
        delete loginForm;
        loginForm = NULL;
    }
    loginForm = new Login(this);
    loginForm->exec();
    //    loginForm->show();
    //
}

void MainWindow::on_pushButton_3_clicked()
{
    //    ui->graphicsView->scene()->itemAt(50,50);
    QGraphicsScene* scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
//    ui->graphicsView->scene()->addText("bogotobogo.com", QFont("Arial", 5));
    scene->itemAt(50,50,)
}
