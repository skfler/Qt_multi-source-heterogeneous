#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "zhujiemian.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void paintEvent(QPaintEvent *);


private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();


private:
    Ui::Dialog *ui;
    zhujiemian *p_t;



};
#endif // DIALOG_H
