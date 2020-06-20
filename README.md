# 使用Qt进行多源异构数据同步分析软件的实现
基于Qt的多源异构数据同步分析软件。是我的毕设作品。  
A Qt based multi-source-heterogeneous data synchronization analysis software.  
Developed by Qt Creator 4.11.0, Based on Qt 5.14.0 (MSVC 2017, 32 bit).

### 软件的基本功能
- 登录功能，默认用户名admin，密码peiking1，在代码中可以更改
- 读取文件夹内的文件，包括视频文件和txt文件，一个文件夹内默认有3个视频文件和1个txt文件，多出或缺少时给出提示
- 将视频放在界面上进行播放、暂停，使用进度条控制播放进度，显示视频总时长和当前时长
![视频](https://github.com/skfler/Qt_multi-source-heterogeneous/blob/master/ReadMeImage/shipin.png)
- 将txt文件内的9列数据（2-10列）绘制成坐标图，添加时间游标，进度与视频对应
![坐标图](https://github.com/skfler/Qt_multi-source-heterogeneous/blob/master/ReadMeImage/zuobiao.png)
- 将实时的数据显示在文本框内
![实时数据](https://github.com/skfler/Qt_multi-source-heterogeneous/blob/master/ReadMeImage/shishi.png)
- 显示使用帮助和开发者信息

### 使用说明
从左上角的菜单栏“打开飞行文件”选项卡中，选择目录进行打开，选择一个放有文件的目录。可以自己新建一个文件夹，放入3个MP4格式的视频（格式可在代码中更改），一个内含至少10列数据的txt文件。  
txt示例文件我已在项目中的“示例”文件夹中附带eg.txt，届时将此文件夹再放入3个MP4视频文件，使用软件打开即可。

### 代码说明
登录窗口的相关代码是dialog.h\dialog.cpp\dialog.ui  
数据查看主界面相关代码是zhujiemian.h\zhujiemian.cpp\zhujiemain.ui，主要分为窗体部分的代码和函数代码，已在源码部分尽可能详细地注释。

### 常见问题
开发过程中，总结了一些问题，参见我的博客  
如果对本项目的Qt开发有疑问，欢迎邮件交流：mapengyuu@qq.com，闲暇时间看到会回复。
