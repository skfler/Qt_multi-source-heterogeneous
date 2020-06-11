#ifndef ZHUJIEMIAN_H
#define ZHUJIEMIAN_H
#include <QMainWindow>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QTimer>




class Mpshipin;

namespace Ui {
class zhujiemian;
}


class zhujiemian : public QMainWindow
{
    Q_OBJECT

public:
    explicit zhujiemian(QWidget *parent = nullptr);
    ~zhujiemian();
    //QString label_2;
    void Paint();
    static int sptime;
    static QStringList datalist_2;
    static QStringList datalist_3;
    static QStringList datalist_4;
    static QStringList datalist_5;
    static QStringList datalist_6;
    static QStringList datalist_7;
    static QStringList datalist_8;
    static QStringList datalist_9;
    static QStringList datalist_10;



private:
    Ui::zhujiemian *ui;
    Mpshipin *wow;
    QMediaPlayer * mediaPlayer_1;//QVideoWidget
    QMediaPlayer * mediaPlayer_2;
    QMediaPlayer * mediaPlayer_3;
    QTimer * timer;

protected:
    void changeEvent(QEvent *e);
    bool eventFilter(QObject *watched, QEvent *e);
    void paintOnWidget_1(QWidget *w);
    void paintOnWidget_2(QWidget *u);
    void paintOnWidget_3(QWidget *v);



signals:
    void newpaper(QString);


public slots:
    //反馈
    //void fankui(qint64 data);
    //播放
    void play();
    //播放状态
    void mediaStateChanged(QMediaPlayer::State state);
    //改变播放位置
    void positionChanged(qint64 position);
    //获取播放位置，设置到media
    void setPosition(int position1);
    //播放长度
    void durationChanged(qint64 position);
    //播放异常
    void handleError();

    void on_toolButton_clicked();


private slots:
    void on_horizontalSlider_sliderMoved(int position);

    void tishi(QString);

};

#endif // ZHUJIEMIAN_H
