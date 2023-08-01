#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::bot()
{
    int randomNum = rand();
    int resoult = (randomNum % 9) + 1;
    if (resoult == 1)
    {
        if ( ui->pushButton->text() == "")
        {
             ui->pushButton->setText("O");
        }
        else if (ui->pushButton->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 2)
    {
        if ( ui->pushButton_2->text() == "")
        {
             ui->pushButton_2->setText("O");
        }
        else if (ui->pushButton_2->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 3)
    {
        if ( ui->pushButton_3->text() == "")
        {
             ui->pushButton_3->setText("O");
        }
        else if (ui->pushButton_3->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 4)
    {
        if ( ui->pushButton_4->text() == "")
        {
             ui->pushButton_4->setText("O");
        }
        else if (ui->pushButton_4->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 5)
    {
        if ( ui->pushButton_5->text() == "")
        {
             ui->pushButton_5->setText("O");
        }
        else if (ui->pushButton_5->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 6)
    {
        if ( ui->pushButton_6->text() == "")
        {
             ui->pushButton_6->setText("O");
        }
        else if (ui->pushButton_6->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 7)
    {
        if ( ui->pushButton_7->text() == "")
        {
             ui->pushButton_7->setText("O");
        }
        else if (ui->pushButton_7->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 8)
    {
        if ( ui->pushButton_8->text() == "")
        {
             ui->pushButton_8->setText("O");
        }
        else if (ui->pushButton_8->text() == "X")
        {
             return bot();
        }
    }
    else if (resoult == 9)
    {
        if ( ui->pushButton_9->text() == "")
        {
             ui->pushButton_9->setText("O");
        }
        else if (ui->pushButton_9->text() == "X")
        {
             return bot();
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->pushButton->text() == "")
    {
        ui->pushButton->setText("X");
    }
    bot();
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->pushButton_2->text() == "")
    {
        ui->pushButton_2->setText("X");
    }
    bot();
}


void MainWindow::on_pushButton_3_clicked()
{
    if (ui->pushButton_3->text() == "")
    {
        ui->pushButton_3->setText("X");
    }
    bot();
}


void MainWindow::on_pushButton_4_clicked()
{
    if (ui->pushButton_4->text() == "")
    {
        ui->pushButton_4->setText("X");
    }
    bot();
}


void MainWindow::on_pushButton_5_clicked()
{
    if (ui->pushButton_5->text() == "")
    {
        ui->pushButton_5->setText("X");
    }
    bot();
}


void MainWindow::on_pushButton_6_clicked()
{
    if (ui->pushButton_6->text() == "")
    {
        ui->pushButton_6->setText("X");
    }
    bot();
}


void MainWindow::on_pushButton_7_clicked()
{
    if (ui->pushButton_7->text() == "")
    {
        ui->pushButton_7->setText("X");
    }
    bot();
}


void MainWindow::on_pushButton_8_clicked()
{
    if (ui->pushButton_8->text() == "")
    {
        ui->pushButton_8->setText("X");
    }
    bot();
}


void MainWindow::on_pushButton_9_clicked()
{
    if (ui->pushButton_9->text() == "")
    {
        ui->pushButton_9->setText("X");
    }
    bot();
}
