#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QMessageBox>
#include <QPainter>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::paintEvent(QPaintEvent *)
{
    QPainter huatu(this);
    QPixmap pix(":/Image/北建大.png");
    pix = pix.scaled(250,58,Qt::KeepAspectRatio, Qt::SmoothTransformation);
    huatu.drawPixmap(48,25,250,58,pix);

}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_toolButton_clicked()
{
    QString name = ui->login_name->text();
    QString password = ui->login_password->text();

    if (name.compare("admin") == 0 && password.compare("peiking1") == 0 )
    {
        p_t = new zhujiemian();
        p_t->show();
        this->hide();
    }
    else

        if (name == "")
        {
            QMessageBox::information(this,"提示","请输入用户名！");
            ui->login_name->setFocus();
        }
        else
            if(password == ""){
                QMessageBox::information(this,"提示","请输入密码！");
                ui->login_password->setFocus();
            }
            else
            {
                QMessageBox::warning(this,"错误提示","用户名或密码错误");
                ui->login_password->clear();
                ui->login_password->setFocus();
            }


}

void Dialog::on_toolButton_2_clicked()
{
    close();
}
