#include "zhujiemian.h"
#include "ui_zhujiemian.h"
#include <QFileDialog>
#include <QFile>
#include <QTextCodec>
#include <QStatusBar>
#include <QDebug>
#include <QList>
#include <QMessageBox>
#include <QPainter>
#include <QTime>


int zhujiemian::sptime;
QStringList zhujiemian::datalist_2;
QStringList zhujiemian::datalist_3;
QStringList zhujiemian::datalist_4;
QStringList zhujiemian::datalist_5;
QStringList zhujiemian::datalist_6;
QStringList zhujiemian::datalist_7;
QStringList zhujiemian::datalist_8;
QStringList zhujiemian::datalist_9;
QStringList zhujiemian::datalist_10;

zhujiemian::zhujiemian(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zhujiemian)
{
    ui->setupUi(this);

    //创建mediaplayer
    mediaPlayer_1 = new QMediaPlayer(this);
    mediaPlayer_1->setVideoOutput(ui->shipinone);
    mediaPlayer_1->setVolume(50);
    mediaPlayer_2 = new QMediaPlayer(this);
    mediaPlayer_2->setVideoOutput(ui->shipintwo);
    mediaPlayer_2->setVolume(50);
    mediaPlayer_3 = new QMediaPlayer(this);
    mediaPlayer_3->setVideoOutput(ui->shipinthree);
    mediaPlayer_3->setVolume(50);


    //工具栏 点击打开文件目录的动作
    connect(ui->actionMulu,&QAction::triggered,[=](){
        if (mediaPlayer_1->state() == QMediaPlayer::PlayingState){
            timer->stop();
            mediaPlayer_1->pause();
            mediaPlayer_2->pause();
            mediaPlayer_3->pause();
        }
        //弹出对话框，选择文件夹目录
        QString mulu = "D:/Desktop/建电系毕业设计资料/毕设参考论文/20191228同源异构的数据格式v01";
        QDir Fmulu =QFileDialog::getExistingDirectory(this,"选择一个文件夹",mulu,QFileDialog::ShowDirsOnly);
        //在ui界面显示不带文件名的绝对路径（文件夹）
        if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)
            ui->label_2->setText(Fmulu.absolutePath());

        //获得目录内文件列表，只获得文件列表不获得文件夹列表
        QStringList strList = Fmulu.entryList(QDir::Files);
        //进行append添加操作，获得所有文件路径表
        QStringList strList_2;
        for(int i=0;i<strList.count();i++)
        {
            QString xy = strList.at(i);
            xy.insert(0,"/");//从字符串开始插入
            xy.insert(0,Fmulu.absolutePath());
            strList_2.append(xy);
        }

        //筛选信息格式
        //惯导文件路径表
        QStringList guandaoList;
        //视频文件路径表
        QStringList shipinList;
        QString houzhui;
        foreach(QFileInfo fi, strList_2)
        {
            //指定 houzhui 为后缀名
            houzhui = fi.suffix();
            //筛选获得惯导路径表和视频路径表
            if( houzhui == "txt" || houzhui == "dat")
                guandaoList.append(fi.absoluteFilePath());
            if (houzhui == "mp4")
                shipinList.append(fi.absoluteFilePath());
        }

        if (guandaoList.count() > 0)
        {
            //打开惯导文件
            QFile file(guandaoList.at(0));
            //设置编码格式，设置打开方式只读，以stream方式读取
            QTextCodec * codec = QTextCodec::codecForName("gbk");
            QTextCodec::setCodecForLocale(codec);
            file.open(QIODevice::ReadOnly);
            QTextStream ast(&file);//信息存入ast中
            QString yihang;
            QString check;
            QString shuchu;
            int ram;
            QStringList datalist_1;//1不是静态变量，每次定义自动赋值空的，不需clear
            datalist_2.clear();
            datalist_3.clear();
            datalist_4.clear();
            datalist_5.clear();
            datalist_6.clear();
            datalist_7.clear();
            datalist_8.clear();
            datalist_9.clear();
            datalist_10.clear();
            //读取各行各列数据，写入不同的QStringlist
            while (!ast.atEnd())//没读取到ast的末尾换行符时循环继续
            {
                yihang = ast.readLine();//读取一行字符串
                int lie = 0;
                for(int i=0;i<yihang.length();i++)//逐个检测字符
                {
                    check = yihang.mid(i,1);//mid函数从第i个字符取1个字符，0就是第一个，1是第二个
                    if(!(check == " "))//不是空格则为一列信息
                    {
                        ram = i;
                        while (!((check == " ") || (check == "")))//继续挨个读取字符直至读到空格或null
                        {
                            i++;
                            check = yihang.mid(i,1);
                        }
                        lie += 1;
                        if(lie == 1)
                        {
                            shuchu = yihang.mid(ram,i-ram);//从ram取i-ram个字符存入第一个表格
                            datalist_1.append(shuchu);
                        }
                        if(lie == 2)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_2.append(shuchu);
                        }
                        if(lie == 3)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_3.append(shuchu);
                        }
                        if(lie == 4)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_4.append(shuchu);
                        }
                        if(lie == 5)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_5.append(shuchu);
                        }
                        if(lie == 6)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_6.append(shuchu);
                        }
                        if(lie == 7)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_7.append(shuchu);
                        }
                        if(lie == 8)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_8.append(shuchu);
                        }
                        if(lie == 9)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_9.append(shuchu);
                        }
                        if(lie == 10)
                        {
                            shuchu = yihang.mid(ram,i-ram);
                            datalist_10.append(shuchu);
                        }
                    }
                    if(lie>9)
                        break;
                }

            }

            //显示视频时长
            int n = datalist_1.count() - 1;
            if(n>0){
                sptime = n*100;
                QTime time(0,0,0);
                time = time.addMSecs(sptime);//总毫秒数加到time上
                //以00:00:00.000显示
                ui->label_sptime->setText(time.toString("hh:mm:ss.zzz"));
            }

            file.close();
            if(guandaoList.count() > 1){
                emit newpaper("文件夹内惯导数据文件多于1个！");
            }

        }
        else{
            if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)//可忽略
                emit newpaper("惯导数据文件不存在！");
        }

        qDebug()<<shipinList;
        if (shipinList.count() > 0)
        {
            mediaPlayer_1->setMedia(QUrl::fromLocalFile(shipinList.at(0)));
            if (shipinList.count() > 1)
            {
                mediaPlayer_2->setMedia(QUrl::fromLocalFile(shipinList.at(1)));
                if(shipinList.count() > 2)
                {
                    mediaPlayer_3->setMedia(QUrl::fromLocalFile(shipinList.at(2)));
                    if(shipinList.count() > 3){
                        emit newpaper("文件夹内多于3个可选择的视频文件！");}
                }
                else if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)
                    emit newpaper("文件夹内缺少1个视频文件！");
            }
            else if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)
                emit newpaper("文件夹内缺少2个视频文件！");
        }
        else if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)
        {
            emit newpaper("文件夹内缺少3个视频文件！");
        }


        //读取惯导数据，调用绘图函数
        if(datalist_2.count() > 1 && datalist_3.count() > 1 && datalist_4.count() > 1)
        {
            paintOnWidget_1(ui->biao_1);//调用
            ui->label_B->setText(datalist_2.at(1));//将第一个纬度值显示在界面上
            ui->label_L->setText(datalist_3.at(1));
            ui->label_H->setText(datalist_4.at(1));
            if(datalist_5.count() > 1 && datalist_6.count() > 1 && datalist_7.count() > 1)
            {
                paintOnWidget_2(ui->biao_2);
                //求第一个速度
                double speed;
                QString sx = datalist_5.at(1);
                double sx1 = sx.toDouble();
                QString sy = datalist_6.at(1);
                double sy1 = sy.toDouble();
                QString sz = datalist_7.at(1);
                double sz1 = sz.toDouble();
                speed = sqrt(pow(sx1,2)+pow(sy1,2)+pow(sz1,2));//平方相加再开方
                QString keep = QString::number(speed,'f',3);//保留3位小数
                ui->label_speed->setText(keep);//显示第一个速度值
                if(datalist_8.count() > 1 && datalist_9.count() > 1 && datalist_10.count() > 1)
                {
                    paintOnWidget_3(ui->biao_3);
                    ui->label_R->setText(datalist_8.at(1));//显示第一个翻滚角值
                    ui->label_P->setText(datalist_9.at(1));
                    ui->label_Y->setText(datalist_10.at(1));
                }
                else if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)
                    emit newpaper("惯导数据不完整！");
            }
            else if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)
                emit newpaper("惯导数据不完整！");
        }
        else if(Fmulu.absolutePath().compare("D:/QTstudy/MpyDesign/Debug") != 0)
            emit newpaper("惯导数据不完整！");

    });

    //toolbutton自动提升
    ui->toolButton->setAutoRaise(true);
    //读取文件夹后 显示消息框，信号是newpaper
    connect(this,SIGNAL(newpaper(QString)),this,SLOT(tishi(QString)));


    //设置定时器
    timer =  new QTimer(this);
    connect(timer,&QTimer::timeout,[=](){
        double du = mediaPlayer_1->duration();
        double po = mediaPlayer_1->position();
        double k = po/du;//k为视频播放比例，0至1
        int num = k * sptime;//sptime是总毫秒数
        QTime time0(0,0,0);
        time0 = time0.addMSecs(num);
        ui->label_curtime->setText(time0.toString("hh:mm:ss.zzz"));
        int n = datalist_2.count() - 1;
        if(datalist_4.count()>1){
            ui->label_B->setText(datalist_2.at(k*n));//at内为int类型，将k*n向下取整
            ui->label_L->setText(datalist_3.at(k*n));
            ui->label_H->setText(datalist_4.at(k*n));
        }
        if(datalist_7.count()>1){
            double speed;
            QString sx = datalist_5.at(k*n);
            double sx1 = sx.toDouble();
            QString sy = datalist_6.at(k*n);
            double sy1 = sy.toDouble();
            QString sz = datalist_7.at(k*n);
            double sz1 = sz.toDouble();
            speed = sqrt(pow(sx1,2)+pow(sy1,2)+pow(sz1,2));
            QString keep = QString::number(speed,'f',3);
            ui->label_speed->setText(keep);
        }
        if(datalist_10.count()>1){
            ui->label_R->setText(datalist_8.at(k*n));
            ui->label_P->setText(datalist_9.at(k*n));
            ui->label_Y->setText(datalist_10.at(k*n));
        }
    });


    //设置播放属性
    //播放信号变化信号与槽函数关联
    connect(mediaPlayer_1,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(mediaStateChanged(QMediaPlayer::State)));
    //播放进度信号与位置函数关联
    connect(mediaPlayer_1,SIGNAL(positionChanged(qint64)),this,SLOT(positionChanged(qint64)));
    //播放长度信号与长度函数关联
    connect(mediaPlayer_1,SIGNAL(durationChanged(qint64)),this,SLOT(durationChanged(qint64)));
    //播放错误与错误函数关联
    connect(mediaPlayer_1,SIGNAL(error(QMediaPlayer::Error)),this,SLOT(handleError()));



    //设置播放按钮信息
    ui->toolButton->setToolTip("播放");
    ui->toolButton->setAutoRaise(false);
    ui->toolButton->setIcon(QPixmap(":/Image/播放.jpg"));//播放的图片

    ui->biao_1->installEventFilter(this);//绘图事件过滤器
    ui->biao_2->installEventFilter(this);
    ui->biao_3->installEventFilter(this);

    //关闭目录按钮,按下关闭当前文件夹
    connect(ui->actionCloseMulu,&QAction::triggered,[=](){
        timer->stop();
        mediaPlayer_1->setMedia(QMediaContent());
        mediaPlayer_2->setMedia(QMediaContent());
        mediaPlayer_3->setMedia(QMediaContent());
        datalist_2.clear();
        datalist_3.clear();
        datalist_4.clear();
        datalist_5.clear();
        datalist_6.clear();
        datalist_7.clear();
        datalist_8.clear();
        datalist_9.clear();
        datalist_10.clear();
        ui->label_2->clear();
        ui->label_B->clear();
        ui->label_L->clear();
        ui->label_H->clear();
        ui->label_speed->clear();
        ui->label_R->clear();
        ui->label_P->clear();
        ui->label_Y->clear();
        ui->label_curtime->setText("00:00:00.000");
        ui->label_sptime->setText("00:00:00.000");
    });

    //退出按钮
    connect(ui->actionExit,&QAction::triggered,[=](){
        close();
    });

    //使用帮助按钮
    connect(ui->actionHelp,&QAction::triggered,[=](){
        QMessageBox::about(this,"使用帮助","·选择菜单栏的“打开飞行文件”选项卡，点击选择目录，\n"
                                       "选择相应的文件夹，开始使用。\n\n"
                                       "·软件界面上方的三个框体显示无人机拍摄的视频数据。\n\n"
                                       "·中间的游标尺可以拖动，选择不同的时刻。\n\n"
                                       "·游标下面的文本框里显示各种数据的实时数值\n\n"
                                       "·下方的三个框体内是坐标图，以时间为横坐标绘制了数据变化的情况。\n"
                                       "图里会显示灰色的游标表示当前时间对应的数据。\n\n"
                                       "·最下方显示当前飞行文件所在的目录。\n\n"
                                       "·“打开飞行文件”选项卡的“关闭目录”可以关闭当前目录。\n\n"
                                       "·“打开飞行文件”选项卡的“退出”可以退出程序。\n\n");
    });
    //关于软件按钮
    connect(ui->actionAbout,&QAction::triggered,[=](){
        QMessageBox::about(this,"关于","开发者：MPY\n为毕业设计作品。\n\n版本：1.0\n"
                                     "开发工具：Qt Creator 4.11.0\n"
                           "Based on Qt 5.14.0 (MSVC 2017, 32 bit)");
    });

}

void zhujiemian::tishi(QString b)
{
    //提示对话框槽函数
   QMessageBox::information(this,"提示",b);
}

zhujiemian::~zhujiemian()
{
    delete ui;
}

void zhujiemian::on_toolButton_clicked()
{
    //播放暂停键被点击后调用play函数
    play();
}

void zhujiemian::play()
{
    //获取播放状态
    switch (mediaPlayer_1->state()) {
    //播放状态3种，playing，paused，stopped
    case QMediaPlayer::PlayingState:
        mediaPlayer_1->pause();//play时全部暂停
        mediaPlayer_2->pause();
        mediaPlayer_3->pause();
        timer->stop();//停止计时器
        break;
    default:
        mediaPlayer_1->play();//其他状态全部开始播放
        mediaPlayer_2->play();
        mediaPlayer_3->play();
        if(mediaPlayer_1->duration() != 0)
            timer->start(5);//存在第一个视频时以5ms的频率启动计时器
        break;
    }
}


//播放暂停状态 以及 播放暂停图标
void zhujiemian::mediaStateChanged(QMediaPlayer::State state)
{
    //mediaplayer播放过程中动态调整播放图标和提示信息
    switch (state)
    {
    case QMediaPlayer::PlayingState:
        ui->toolButton->setToolTip("暂停");
        ui->toolButton->setIcon(QPixmap(":/Image/暂停.jpg"));
        break;
    default:
        ui->toolButton->setToolTip("播放");
        ui->toolButton->setIcon(QPixmap(":/Image/播放.jpg"));
        break;
    }

}


//设置进度条范围
void zhujiemian::durationChanged(qint64 duration)
{
    ui->horizontalSlider->setRange(0,duration);
}

//改变进度条位置
void zhujiemian::positionChanged(qint64 position)
{
    ui->horizontalSlider->setValue(position);
}

//拖动进度条改变视频进度
void zhujiemian::on_horizontalSlider_sliderMoved(int position)
{
    setPosition(position);
}

//获取mediaplayer进度条调整位置,将media调整到新进度处
void zhujiemian::setPosition(int position)
{
    mediaPlayer_1->setPosition(position);
    mediaPlayer_2->setPosition(position);
    mediaPlayer_3->setPosition(position);
}

void zhujiemian::handleError()
{
    ui->toolButton->setEnabled(false);
}

void zhujiemian::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange: ui->retranslateUi(this);
        break ;
    default :
        break ;
    }
}

bool zhujiemian::eventFilter(QObject *watched, QEvent *e)
{
    //是绘图事件才调用绘图函数
    if (watched == ui->biao_1)
    {
        if (e->type() == QEvent::Paint)
        {
            paintOnWidget_1(ui->biao_1);
            return true ;
        }
    }
    if (watched == ui->biao_2)
    {
        if (e->type() == QEvent::Paint)
        {
            paintOnWidget_2(ui->biao_2);
            return true ;
        }
    }
    if (watched == ui->biao_3)
    {
        if (e->type() == QEvent::Paint)
        {
            paintOnWidget_3(ui->biao_3);
            return true ;
        }
    }
    return QWidget::eventFilter(watched, e);

}

void zhujiemian::paintOnWidget_1(QWidget *w)
{
    QPainter Huitu(w);

    //设置反锯齿模式，好看一点
    Huitu.setRenderHint(QPainter::Antialiasing, true);
    // 绘制外框
    Huitu.drawRect( 3, 3, w->size().width() - 5, w->size().height() - 5);
    //确定坐标轴起点坐标，这里定义(30,widget框高-28)
    int px=30,py=w->size().height() - 28;
    //确定坐标轴x,y竖直方向长度wid，tall,根据画布widget宽高而定。
    int wid = w->size().width() - 20 -px,tall = w->size().height() - 55;

    //将2、3、4列数据写入数组a、b、c
    int n = datalist_2.count() - 1;
    long double a[n];
    long double b[n];
    long double c[n];
    QString what;
    for(int i=0;i<n;i++)
    {
        what = datalist_2.at(i+1);
        a[i] = what.toDouble();
    }
    for(int i=0;i<n;i++)
    {
        what = datalist_3.at(i+1);
        b[i] = what.toDouble();
    }
    for(int i=0;i<n;i++)
    {
        what = datalist_4.at(i+1);
        c[i] = what.toDouble();
    }

    long double maxm=-9999999;//数组里的最大值
    long double mini=9999999;//数组里的最小值
    int zuida = 0;//用zuida和zuixiao进行编号以判断最大最小值属于哪个数据数组
    int zuixiao = 0;

    //求最大最小值
    int maxpos = 0,minpos = 0;//最大或最小的数据是第几个
    for(int i=0;i<n;i++)
    {
        //求最大值，若最终最大值是数组a的，则zuida=1
        if(a[i]>maxm){
            maxm=a[i];
            zuida = 1;
            maxpos = i;
        }
        if(b[i]>maxm){
            maxm=b[i];
            zuida = 2;
            maxpos = i;
        }
        if(c[i]>maxm){
            maxm=c[i];
            zuida = 3;
            maxpos = i;
        }
        //求最小值，若最终最小值是数组a的，则zuixiao=1
        if(a[i]<mini){
            mini=a[i];
            zuixiao = 1;
            minpos = i;
        }
        if(b[i]<mini){
            mini=b[i];
            zuixiao = 2;
            minpos = i;
        }
        if(c[i]<mini){
            mini=c[i];
            zuixiao = 3;
            minpos = i;
        }
    }
    double kx=(double)wid/(n-1); //x轴的系数 分成n-1份 n为数据个数
    double ky=(double)tall/(maxm-mini);//y方向的比例系数
    QPen pen;
    pen.setWidth(2);
    if(datalist_4.count()>1)
    {
        Huitu.setPen(pen);
        //绘制坐标轴 从坐标轴原点(30，widget框高-28)绘制
        //数据在x轴上下情况不同时，将坐标轴绘制在最接近y=0处，坐标轴x长度为wid
        if(mini>=0){
            Huitu.drawLine(px,py,wid+px,py);}
        if(maxm<=0){
            Huitu.drawLine(px,py-tall,wid+px,py-tall);}
        if(maxm>0 && mini<0){
            Huitu.drawLine(px,py+mini*ky,wid+px,py+mini*ky);}

        //坐标轴y长度为tall
        Huitu.drawLine(px,py-tall,px,py);
        Huitu.drawText(px-12,py-tall-9,"位置");
    }

    //绘制刻度线
    QPen penDegree;
    penDegree.setColor(Qt::black);
    penDegree.setWidth(2);
    if(datalist_4.count()>1)
    {
        Huitu.setPen(penDegree);
        //画上x轴刻度线
        if(mini>=0){//还是根据数据在x轴上下选择绘制刻度位置
            for(int i=0;i<10;i++)//分成10份
            {
                //选择均匀的间隔，绘制长度是4的直线作为刻度
                Huitu.drawLine(px+(i+1)*wid/10,py,px+(i+1)*wid/10,py+4);
                if(n>6000){//大于6000秒时用分钟为单位
                Huitu.drawText(px+(i+0.9)*wid/10,
                                 py+15,QString::number((int)((i+1)*((double)n/6000))));
                                 }
                if(n<=6000){//小于等于时用秒为单位
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py+15,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }
        if(maxm<=0){
            for(int i=0;i<10;i++){
                Huitu.drawLine(px+(i+1)*wid/10,py-tall,px+(i+1)*wid/10,py-tall-4);
                if(n>6000){
                Huitu.drawText(px+(i+0.9)*wid/10,
                                 py-tall+17,QString::number((int)((i+1)*((double)n/6000))));
                                 }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py-tall+17,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }
        if(maxm>0 && mini<0){
            for(int i=0;i<10;i++){
                Huitu.drawLine(px+(i+1)*wid/10,py+mini*ky,px+(i+1)*wid/10,py+mini*ky+4);
                if(n>6000){
                    Huitu.drawText(px+(i+0.9)*wid/10,
                                     py+mini*ky+17,QString::number((int)((i+1)*((double)n/6000))));
                }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py+mini*ky+17,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }

        //y轴刻度线
        //y轴刻度间隔多少根据最大值减最小值是多少，尽可能显示出数据变化
        double maxmStep=(double)(maxm-mini)/10;
        for(int i=0;i<10;i++)
        {
            //确定一个位置，然后画一条短短的直线表示刻度。
            Huitu.drawLine(px,py-(i+1)*tall/10,
                             px-4,py-(i+1)*tall/10);
            Huitu.drawText(px-25,py-(i+0.85)*tall/10,
                             QString::number((int)(maxmStep*(i+1)+mini)));
        }
        //确定刻度
        Huitu.drawText(px-23,py+4,
                         QString::number((int)(mini)));
    }


    //绘制曲线
    for(int i=0;i<n-1;i++)//数组a的
    {
        pen.setColor(QColor(34,139,34));
        pen.setWidth(1);
        //由于y轴是倒着的，所以y轴坐标要py-(a[i]-mini)*ky 其中ky为比例系数
        Huitu.setPen(pen);
        //绘制数据点间的直线
        Huitu.drawLine(px+kx*i,py-(a[i]-mini)*ky-1,px+kx*(i+1),py-(a[i+1]-mini)*ky-1);
    }

    for(int i=0;i<n-1;i++)//数组b的
    {
        pen.setColor(QColor(0,0,205));
        Huitu.setPen(pen);
        Huitu.drawLine(px+kx*i,py-(b[i]-mini)*ky-1,px+kx*(i+1),py-(b[i+1]-mini)*ky-1);
    }
    for(int i=0;i<n-1;i++)//数组c的
    {
        pen.setColor(QColor(220,20,60));
        Huitu.setPen(pen);
        Huitu.drawLine(px+kx*i,py-(c[i]-mini)*ky-1,px+kx*(i+1),py-(c[i+1]-mini)*ky-1);
    }

    //进行曲线标注
    QPen Biaozhu;
    //若最大值为纬度B，在最大值处标注
    if(zuida == 1){
        Biaozhu.setColor(QColor(34,139,34));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-25,py-(a[maxpos]-mini)*ky-7,"纬度B/deg");
    }
    //若最大值为经度L，在最大值处标注
    if(zuida == 2){
        Biaozhu.setColor(QColor(0,0,205));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-25,py-(b[maxpos]-mini)*ky-7,"经度L/deg");
    }
    //若最大值为高程H，在最大值处标注
    if(zuida == 3){
        Biaozhu.setColor(QColor(220,20,60));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-25,py-(c[maxpos]-mini)*ky-7,"高程H/m");
    }
    //若最小值是B，最大值不是纬度B，在最小值处标注，且标注剩余的曲线
    if(zuixiao == 1 && zuida != 1){
        Biaozhu.setColor(QColor(34,139,34));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-25,py+9,"纬度B/deg");
        if(zuida == 2){
            Biaozhu.setColor(QColor(220,20,60));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(c[n-1]-mini)*ky-7,"高程H/m");
        }
        if(zuida == 3){
            Biaozhu.setColor(QColor(0,0,205));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(b[n-1]-mini)*ky-7,"经度L/deg");
        }
    }
    //若最小最大值都是纬度B，标注另外两条曲线
    else{
        if(zuixiao == 1){
            Biaozhu.setColor(QColor(220,20,60));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(c[n-1]-mini)*ky-7,"高程H/m");
            Biaozhu.setColor(QColor(0,0,205));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(b[n-1]-mini)*ky-7,"经度L/deg");
        }
    }
    if(zuixiao == 2 && zuida != 2){
        Biaozhu.setColor(QColor(0,0,205));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-25,py+9,"经度L/deg");
        if(zuida == 1){
            Biaozhu.setColor(QColor(220,20,60));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(c[n-1]-mini)*ky-7,"高程H/m");
        }
        if(zuida == 3){
            Biaozhu.setColor(QColor(34,139,34));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(a[n-1]-mini)*ky-7,"纬度B/deg");
        }
    }
    else{
        if(zuixiao == 2){
            Biaozhu.setColor(QColor(220,20,60));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(c[n-1]-mini)*ky-7,"高程H/m");
            Biaozhu.setColor(QColor(34,139,34));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(a[n-1]-mini)*ky-7,"纬度B/deg");
        }
    }
    if(zuixiao == 3 && zuida != 3){
        Biaozhu.setColor(QColor(220,20,60));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-25,py+9,"高程H/m");
        if(zuida == 1){
            Biaozhu.setColor(QColor(0,0,205));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(b[n-1]-mini)*ky-7,"经度L/deg");
        }
        if(zuida == 2){
            Biaozhu.setColor(QColor(34,139,34));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(a[n-1]-mini)*ky-7,"纬度B/deg");
        }
    }
    else{
        if(zuixiao == 3){
            Biaozhu.setColor(QColor(0,0,205));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(b[n-1]-mini)*ky-7,"经度L/deg");
            Biaozhu.setColor(QColor(34,139,34));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-45,py-(a[n-1]-mini)*ky-7,"纬度B/deg");
        }
    }

    //绘制坐标轴上的时间游标
    int l_1 = mediaPlayer_1->duration();
    int l_2 = mediaPlayer_1->position();
    double l_3 =(double)wid*l_2/l_1;//还是采用的一个视频的播放比例
    QPen youbiao;
    if(datalist_4.count()>1 && mediaPlayer_1->duration() != 0)
    {
        youbiao.setWidth(1);
        youbiao.setColor(Qt::gray);//灰色游标
        Huitu.setPen(youbiao);
        Huitu.drawLine(px+l_3,py,px+l_3,py-tall);
        Huitu.drawText(px+l_3-22,py-tall-8,"当前时间");
        //刷新这个widget，否则只有切换程序界面时才会更新游标位置
        ui->biao_1->update();//指定本控件，不然整个ui都会一直刷新
    }

}

//另外两个坐标图和第1个一样，不再赘述
void zhujiemian::paintOnWidget_2(QWidget *u)
{
    QPainter Huitu(u);
    //设置反锯齿模式，好看一点
    Huitu.setRenderHint(QPainter::Antialiasing, true);
    // 绘制外框
    Huitu.drawRect( 3, 3, u->size().width() - 5, u->size().height() - 5);
    //确定坐标轴起点坐标，这里定义(30,widget框高-28)
    int px=30,py=u->size().height() - 28;
    //确定坐标轴xy方向长度，根据画布widget宽高而定。
    int wid = u->size().width() - 20 -px,tall = u->size().height() - 55;

    int n = datalist_5.count() - 1;
    long double a[n];
    long double b[n];
    long double c[n];
    QString what;
    for(int i=0;i<n;i++)
    {
        what = datalist_5.at(i+1);
        a[i] = what.toDouble();
    }
    for(int i=0;i<n;i++)
    {
        what = datalist_6.at(i+1);
        b[i] = what.toDouble();
    }
    for(int i=0;i<n;i++)
    {
        what = datalist_7.at(i+1);
        c[i] = what.toDouble();
    }
    long double maxm=-9999999;//数组里的最大值
    long double mini=9999999;
    int zuida = 0;//zuida和zuixiao进行赋值以判断最大最小值属于哪个数据数组
    int zuixiao = 0;

    //求最大最小值
    int maxpos = 0,minpos = 0;
    for(int i=0;i<n;i++)
    {
        //求最大值
        if(a[i]>maxm){
            maxm=a[i];
            zuida = 1;
            maxpos = i;
        }
        if(b[i]>maxm){
            maxm=b[i];
            zuida = 2;
            maxpos = i;
        }
        if(c[i]>maxm){
            maxm=c[i];
            zuida = 3;
            maxpos = i;
        }
        //求最小值
        if(a[i]<mini){
            mini=a[i];
            zuixiao = 1;
            minpos = i;
        }
        if(b[i]<mini){
            mini=b[i];
            zuixiao = 2;
            minpos = i;
        }
        if(c[i]<mini){
            mini=c[i];
            zuixiao = 3;
            minpos = i;
        }
    }
    double kx=(double)wid/(n-1); //x轴的系数 分成n-1份
    double ky=(double)tall/(maxm-mini);//y方向的比例系数
    QPen pen;
    if(datalist_7.count()>1)
    {
        pen.setWidth(2);
        Huitu.setPen(pen);
        //绘制坐标轴 从坐标轴原点(30，widget框高-28)绘制
        //坐标轴x长度为wid
        if(mini>=0){
            Huitu.drawLine(px,py,wid+px,py);}
        if(maxm<=0){
            Huitu.drawLine(px,py-tall,wid+px,py-tall);}
        if(maxm>0 && mini<0){
            Huitu.drawLine(px,py+mini*ky,wid+px,py+mini*ky);}

        //绘制坐标轴y长度为tall
        Huitu.drawLine(px,py-tall,px,py);
        Huitu.drawText(px-7,py-tall-7,"M/s");
    }
    //绘制刻度线
    QPen penDegree;
    if(datalist_7.count()>1)
    {
        penDegree.setColor(Qt::black);
        penDegree.setWidth(2);
        Huitu.setPen(penDegree);
        //画上x轴刻度线
        if(mini>=0){
            for(int i=0;i<10;i++)//分成10份
            {
                //选择均匀的间隔，绘制长度是4的直线作为刻度
                Huitu.drawLine(px+(i+1)*wid/10,py,px+(i+1)*wid/10,py+4);
                if(n>6000){
                Huitu.drawText(px+(i+0.9)*wid/10,
                                 py+15,QString::number((int)((i+1)*((double)n/6000))));
                                 }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py+15,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }
        if(maxm<=0){
            for(int i=0;i<10;i++){
                Huitu.drawLine(px+(i+1)*wid/10,py-tall,px+(i+1)*wid/10,py-tall-4);
                if(n>6000){
                Huitu.drawText(px+(i+0.9)*wid/10,
                                 py-tall+17,QString::number((int)((i+1)*((double)n/6000))));
                                 }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py-tall+17,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }
        if(maxm>0 && mini<0){
            for(int i=0;i<10;i++){
                Huitu.drawLine(px+(i+1)*wid/10,py+mini*ky,px+(i+1)*wid/10,py+mini*ky+4);
                if(n>6000){
                    Huitu.drawText(px+(i+0.9)*wid/10,
                                     py+mini*ky+17,QString::number((int)((i+1)*((double)n/6000))));
                }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py+mini*ky+17,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }

        //y轴刻度线
        double maxmStep=(double)(maxm-mini)/10;//y轴刻度间隔需根据最大值来表示
        for(int i=0;i<10;i++)
        {
            //确定一个位置，然后画一条短短的直线表示刻度。
            Huitu.drawLine(px,py-(i+1)*tall/10,
                             px-4,py-(i+1)*tall/10);
            Huitu.drawText(px-25,py-(i+0.85)*tall/10,
                             QString::number((int)(maxmStep*(i+1)+mini)));
        }
        Huitu.drawText(px-23,py+4,
                         QString::number((int)(mini)));
    }

    //绘制曲线
    pen.setColor(QColor(255,165,0));
    for(int i=0;i<n-1;i++)
    {
        pen.setWidth(1);
        //由于y轴是倒着的，所以y轴坐标要py-(a[i]-mini)*ky 其中ky为比例系数，-1为了避免与x轴重合
        Huitu.setPen(pen);//黑色笔用于连线
        Huitu.drawLine(px+kx*i,py-(a[i]-mini)*ky-1,px+kx*(i+1),py-(a[i+1]-mini)*ky-1);
    }

    for(int i=0;i<n-1;i++)
    {
        pen.setColor(QColor(255,20,147));
        Huitu.setPen(pen);
        Huitu.drawLine(px+kx*i,py-(b[i]-mini)*ky-1,px+kx*(i+1),py-(b[i+1]-mini)*ky-1);
    }
    for(int i=0;i<n-1;i++)
    {
        pen.setColor(Qt::darkBlue);
        Huitu.setPen(pen);
        Huitu.drawLine(px+kx*i,py-(c[i]-mini)*ky-1,px+kx*(i+1),py-(c[i+1]-mini)*ky-1);
    }


    //进行曲线标注
    QPen Biaozhu;
    if(zuida == 1){
        Biaozhu.setColor(QColor(255,165,0));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-5,py-(a[maxpos]-mini)*ky-7,"Vx");
    }
    if(zuida == 2){
        Biaozhu.setColor(QColor(255,20,147));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-5,py-(b[maxpos]-mini)*ky-7,"Vy");
    }
    if(zuida == 3){
        Biaozhu.setColor(Qt::darkBlue);
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-5,py-(c[maxpos]-mini)*ky-7,"Vz");
    }
    if(zuixiao == 1 && zuida != 1){
        Biaozhu.setColor(QColor(255,165,0));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-5,py+9,"Vx");
        if(zuida == 2){
            Biaozhu.setColor(Qt::darkBlue);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(c[n-1]-mini)*ky-7,"Vz");
        }
        if(zuida == 3){
            Biaozhu.setColor(QColor(255,20,147));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(b[n-1]-mini)*ky-7,"Vy");
        }
    }
    else{
        if(zuixiao == 1){
            Biaozhu.setColor(Qt::darkBlue);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(c[n-1]-mini)*ky-7,"Vz");
            Biaozhu.setColor(QColor(255,20,147));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(b[n-1]-mini)*ky-7,"Vy");
        }
    }
    if(zuixiao == 2 && zuida != 2){
        Biaozhu.setColor(QColor(255,20,147));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-5,py+9,"Vy");
        if(zuida == 1){
            Biaozhu.setColor(Qt::darkBlue);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(c[n-1]-mini)*ky-7,"Vz");
        }
        if(zuida == 3){
            Biaozhu.setColor(QColor(255,165,0));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(a[n-1]-mini)*ky-7,"Vx");
        }
    }
    else{
        if(zuixiao == 2){
            Biaozhu.setColor(Qt::darkBlue);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(c[n-1]-mini)*ky-7,"Vz");
            Biaozhu.setColor(QColor(255,165,0));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(a[n-1]-mini)*ky-7,"Vx");
        }
    }
    if(zuixiao == 3 && zuida != 3){
        Biaozhu.setColor(Qt::darkBlue);
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-5,py+9,"Vz");
        if(zuida == 1){
            Biaozhu.setColor(QColor(255,20,147));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(b[n-1]-mini)*ky-7,"Vy");
        }
        if(zuida == 2){
            Biaozhu.setColor(QColor(255,165,0));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(a[n-1]-mini)*ky-7,"Vx");
        }
    }
    else{
        if(zuixiao == 3){
            Biaozhu.setColor(QColor(255,20,147));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(b[n-1]-mini)*ky-7,"Vy");
            Biaozhu.setColor(QColor(255,165,0));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-5,py-(a[n-1]-mini)*ky-7,"Vx");
        }
    }


    int l_1 = mediaPlayer_1->duration();
    int l_2 = mediaPlayer_1->position();
    double l_3 =(double)wid*l_2/l_1;
    QPen youbiao;
    if(datalist_7.count()>1 && mediaPlayer_1->duration() != 0)
    {
        youbiao.setWidth(1);
        youbiao.setColor(Qt::gray);
        Huitu.setPen(youbiao);
        Huitu.drawLine(px+l_3,py,px+l_3,py-tall);
        Huitu.drawText(px+l_3-23,py-tall-8,"当前时间");
        ui->biao_2->update();
    }
}

void zhujiemian::paintOnWidget_3(QWidget *v)
{
    QPainter Huitu(v);
    //设置反锯齿模式，好看一点
    Huitu.setRenderHint(QPainter::Antialiasing, true);
    // 绘制外框
    Huitu.drawRect( 3, 3, v->size().width() - 5, v->size().height() - 5);
    //确定坐标轴起点坐标，这里定义(30,widget框高-28)
    int px=30,py=v->size().height() - 28;
    //确定坐标轴xy方向长度，根据画布widget宽高而定。
    int wid = v->size().width() - 20 -px,tall = v->size().height() - 55;

    int n = datalist_8.count() - 1;
    long double a[n];
    long double b[n];
    long double c[n];
    QString what;
    for(int i=0;i<n;i++)
    {
        what = datalist_8.at(i+1);
        a[i] = what.toDouble();
    }
    for(int i=0;i<n;i++)
    {
        what = datalist_9.at(i+1);
        b[i] = what.toDouble();
    }
    for(int i=0;i<n;i++)
    {
        what = datalist_10.at(i+1);
        c[i] = what.toDouble();
    }
    long double maxm=-9999999;//数组里的最大值
    long double mini=9999999;
    int zuida = 0;//zuida和zuixiao进行赋值以判断最大最小值属于哪个数据数组
    int zuixiao = 0;

    //求最大最小值
    int maxpos = 0,minpos = 0;
    for(int i=0;i<n;i++)
    {
        //求最大值
        if(a[i]>maxm){
            maxm=a[i];
            zuida = 1;
            maxpos = i;
        }
        if(b[i]>maxm){
            maxm=b[i];
            zuida = 2;
            maxpos = i;
        }
        if(c[i]>maxm){
            maxm=c[i];
            zuida = 3;
            maxpos = i;
        }
        //求最小值
        if(a[i]<mini){
            mini=a[i];
            zuixiao = 1;
            minpos = i;
        }
        if(b[i]<mini){
            mini=b[i];
            zuixiao = 2;
            minpos = i;
        }
        if(c[i]<mini){
            mini=c[i];
            zuixiao = 3;
            minpos = i;
        }
    }
    double kx=(double)wid/(n-1); //x轴的系数 分成n-1份
    double ky=(double)tall/(maxm-mini);//y方向的比例系数
    QPen pen;
    if(datalist_10.count()>1)
    {
        pen.setWidth(2);
        Huitu.setPen(pen);
        //绘制坐标轴 从坐标轴原点(30，widget框高-28)绘制
        //坐标轴x长度为wid
        if(mini>=0){
            Huitu.drawLine(px,py,wid+px,py);}
        if(maxm<=0){
            Huitu.drawLine(px,py-tall,wid+px,py-tall);}
        if(maxm>0 && mini<0){
            Huitu.drawLine(px,py+mini*ky,wid+px,py+mini*ky);}

    //坐标轴y长度为tall
    Huitu.drawLine(px,py-tall,px,py);
    Huitu.drawText(px-17,py-tall-9,"姿态角/°");
    }
    //绘制刻度线
    QPen penDegree;
    if(datalist_10.count()>1)
    {
        penDegree.setColor(Qt::black);
        penDegree.setWidth(2);
        Huitu.setPen(penDegree);
        //画上x轴刻度线
        if(mini>=0){
            for(int i=0;i<10;i++)//分成10份
            {
                //选择均匀的间隔，绘制长度是4的直线作为刻度
                Huitu.drawLine(px+(i+1)*wid/10,py,px+(i+1)*wid/10,py+4);
                if(n>6000){
                Huitu.drawText(px+(i+0.9)*wid/10,
                                 py+15,QString::number((int)((i+1)*((double)n/6000))));
                                 }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py+15,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }
        if(maxm<=0){
            for(int i=0;i<10;i++){
                Huitu.drawLine(px+(i+1)*wid/10,py-tall,px+(i+1)*wid/10,py-tall-4);
                if(n>6000){
                Huitu.drawText(px+(i+0.9)*wid/10,
                                 py-tall+17,QString::number((int)((i+1)*((double)n/6000))));
                                 }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py-tall+17,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }
        if(maxm>0 && mini<0){
            for(int i=0;i<10;i++){
                Huitu.drawLine(px+(i+1)*wid/10,py+mini*ky,px+(i+1)*wid/10,py+mini*ky+4);
                if(n>6000){
                    Huitu.drawText(px+(i+0.9)*wid/10,
                                     py+mini*ky+17,QString::number((int)((i+1)*((double)n/6000))));
                }
                if(n<=6000){
                    Huitu.drawText(px+(i+0.85)*wid/10,
                                     py+mini*ky+17,QString::number((int)((i+1)*((double)n/100))));
                }
            }
            if(n>6000)
                Huitu.drawText(px+wid-25,py+25,"时间/分");
            else
                Huitu.drawText(px+wid-25,py+25,"时间/秒");
        }

        //y轴刻度线
        double maxmStep=(double)(maxm-mini)/10;//y轴刻度间隔需根据最大值来表示
        for(int i=0;i<10;i++)
        {
            //确定一个位置，然后画一条短短的直线表示刻度。
            Huitu.drawLine(px,py-(i+1)*tall/10,
                             px-4,py-(i+1)*tall/10);
            Huitu.drawText(px-25,py-(i+0.85)*tall/10,
                             QString::number((int)(maxmStep*(i+1)+mini)));
        }
        Huitu.drawText(px-23,py+4,
                         QString::number((int)(mini)));
    }

    //绘制曲线
    pen.setColor(Qt::darkGreen);
    for(int i=0;i<n-1;i++)
    {
        pen.setWidth(1);
        //由于y轴是倒着的，所以y轴坐标要py-(a[i]-mini)*ky 其中ky为比例系数
        Huitu.setPen(pen);
        Huitu.drawLine(px+kx*i,py-(a[i]-mini)*ky-1,px+kx*(i+1),py-(a[i+1]-mini)*ky-1);
    }
    for(int i=0;i<n-1;i++)
    {
        pen.setColor(Qt::magenta);
        Huitu.setPen(pen);
        Huitu.drawLine(px+kx*i,py-(b[i]-mini)*ky-1,px+kx*(i+1),py-(b[i+1]-mini)*ky-1);
    }
    for(int i=0;i<n-1;i++)
    {
        pen.setColor(QColor(210,105,30));
        Huitu.setPen(pen);
        Huitu.drawLine(px+kx*i,py-(c[i]-mini)*ky-1,px+kx*(i+1),py-(c[i+1]-mini)*ky-1);
    }


    //进行曲线标注
    QPen Biaozhu;

    if(zuida == 1){
        Biaozhu.setColor(Qt::darkGreen);
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-25,py-(a[maxpos]-mini)*ky-7,"翻滚角");
    }
    if(zuida == 2){
        Biaozhu.setColor(Qt::magenta);
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-25,py-(b[maxpos]-mini)*ky-7,"俯仰角");
    }
    if(zuida == 3){
        Biaozhu.setColor(QColor(210,105,30));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*maxpos-25,py-(c[maxpos]-mini)*ky-7,"航向角");
    }
    if(zuixiao == 1 && zuida != 1){
        Biaozhu.setColor(Qt::darkGreen);
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-15,py+15,"翻滚角");
        if(zuida == 2){
            Biaozhu.setColor(QColor(210,105,30));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(c[n-1]-mini)*ky-7,"航向角");
        }
        if(zuida == 3){
            Biaozhu.setColor(Qt::magenta);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(b[n-1]-mini)*ky-7,"俯仰角");
        }
    }
    else{
        if(zuixiao == 1){
            Biaozhu.setColor(QColor(210,105,30));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(c[n-1]-mini)*ky-7,"航向角");
            Biaozhu.setColor(Qt::magenta);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(b[n-1]-mini)*ky-7,"俯仰角");
        }
    }
    if(zuixiao == 2 && zuida != 2){
        Biaozhu.setColor(Qt::magenta);
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-15,py+15,"俯仰角");
        if(zuida == 1){
            Biaozhu.setColor(QColor(210,105,30));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(c[n-1]-mini)*ky-7,"航向角");
        }
        if(zuida == 3){
            Biaozhu.setColor(Qt::darkGreen);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(a[n-1]-mini)*ky-7,"翻滚角");
        }
    }
    else{
        if(zuixiao == 2){
            Biaozhu.setColor(QColor(210,105,30));
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(c[n-1]-mini)*ky-7,"航向角");
            Biaozhu.setColor(Qt::darkGreen);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(a[n-1]-mini)*ky-7,"翻滚角");
        }
    }
    if(zuixiao == 3 && zuida != 3){
        Biaozhu.setColor(QColor(210,105,30));
        Huitu.setPen(Biaozhu);
        Huitu.drawText(px+kx*minpos-15,py+15,"航向角");
        if(zuida == 1){
            Biaozhu.setColor(Qt::magenta);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(b[n-1]-mini)*ky-7,"俯仰角");
        }
        if(zuida == 2){
            Biaozhu.setColor(Qt::darkGreen);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(a[n-1]-mini)*ky-7,"翻滚角");
        }
    }
    else{
        if(zuixiao == 3){
            Biaozhu.setColor(Qt::magenta);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(b[n-1]-mini)*ky-7,"俯仰角");
            Biaozhu.setColor(Qt::darkGreen);
            Huitu.setPen(Biaozhu);
            Huitu.drawText(px+(n-1)*kx-25,py-(a[n-1]-mini)*ky-7,"翻滚角");
        }
    }

    int l_1 = mediaPlayer_1->duration();
    int l_2 = mediaPlayer_1->position();
    double l_3 =(double)wid*l_2/l_1;
    QPen youbiao;
    if(datalist_10.count()>1 && mediaPlayer_1->duration() != 0)
    {
        youbiao.setWidth(1);
        youbiao.setColor(Qt::gray);
        Huitu.setPen(youbiao);
        Huitu.drawLine(px+l_3,py,px+l_3,py-tall);
        Huitu.drawText(px+l_3-23,py-tall-8,"当前时间");
        ui->biao_3->update();
    }
}



