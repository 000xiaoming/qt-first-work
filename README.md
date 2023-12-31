##作业详情

学习小组:李宏诚 杨向原



###开发环境:
操作系统:

Linux Mint Linux Ubuntu

开发应用:

Qtcreator

额外的依赖库/驱动:

libmyodbc8a.so  

libmyodbc8w.so

MYSQL ODBC 8.0 Driver

###程序架构:
使用mysql数据库作为数据存储库,用来存储所有人体生理监测数据.

mysql由docker镜像生成,版本号:latest.

该mysql容器部署在远程服务器中.

本地qt程序的父窗口实现功能描述,子窗口实现具体的功能.

###具体细节/实现步骤/过程经历:

#####mysql测试
首先将一个mysql:latest镜像在本地实例化,映射,挂载,创建测试数据库.

在c程序中使用mysql.h头文件和libmysqlclient.so动态库测试连接本地的mysql容器.

将经过测试的包含测试库的mysql容器封装成镜像,上传至个人容器仓库,待后续在服务器中拉取.

#####服务器连接

使用ssh连接远程服务器,这里服务器系统使用的alinux操作系统.

然后在服务器系统里面部署docker环境,并且拉取mysql镜像.

前置环境变量:MYSQL_ROOT_PASSWORD=123456

开放端口3306映射.

mysql容器的/var/lib/mysql目录挂载在/home/mysql/data目录下.

开放mysql内部允许远程连接.

开放服务器3306端口,优先级为1.

在本地编写c程序进行远程连接测试,测试成功.开始qt编程.

#####qt编程

一个父窗口,两个同级子窗口,1号窗口用来实现具体的,2号窗口用来描述一些用法和警告.

这里是用的是标准开源数据库连接协议ODBC来连接远程数据库服务器程序.

内置的数据库分布是:

database:work

table:patients measurements

patients的关键信息:

    CREATE TABLE patients (
        patient_id INT NOT NULL AUTO_INCREMENT,
        name VARCHAR(255) DEFAULT NULL,
        age INT DEFAULT NULL,
        gender VARCHAR(10) DEFAULT NULL,
        PRIMARY KEY (patient_id)
    ) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci

measurements的关键信息:

    CREATE TABLE measurements(
        measurements_id INT NOT NULL AUTO_INCREMENT,
        patient_id INT DEFAULT NULL,
        value FLOAT DEFAULT NULL,
        type VARCHAR(50) DEFAULT NULL,
        time DATATIME DEFAULT NULL,
        check_id INT DEFAULT NULL,
        PRIMARY KEY (measurement_id),
        FOREIGN KEY (patient_id) REFERENCES patients (patient_id)
    )ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


提示:这里是存在外键的,具体请细看CREATE信息,请在操作程序的时候注意这一点.


###部署

方案一:
这里已经将所有的必要的依赖库(包括MySQL ODBC)和程序可执行文件都封装成了镜像,但是此图形化程序还需要依赖x11的图形库,该库存在与本地Linux系统环境中,在使用镜像进行运行的时候,需要挂载本地电脑的x11运行库所在目录下,不同的系统,我并不清楚器具体挂载路径,请自行甄别,测试.

在release_work.tar文件里面有一个docker-image目录,该目录下有封装镜像my_image.tar

若使用该方案部署请使用docker load -i my_image.tar加载镜像,实例化时,记得开放3306端口用于网络数据传输,挂载目录请自行挂载.

方案二:

解压release_work.tar
tar -xvf release_work.tar

在tar文件里面本身就包含了所有的中间文件,但是我依然将源码文件放在了sources目录,include目录,forms目录,work-all.pro文件,在解压之后就能直接看见.

如果你的电脑里面有MYSQL ODBC 8.0 Driver驱动,那么你可以直接尝试运行work-all可执行文件,

Linux中输入:./work-all

windows系统不支持

请使用linux系统来运行该程序

如果你运行失败,可能的原因有很多,这里给出一个下下策但是很使用的方法:使用qtcreator重新创建Qt Widgets Application项目,基类选择QWidget,然后创建一个work工程目录,右点击该目录名称,New File一个Qt Designer Form Class类,Template选择Widget.以此方式来创建三个界面,然后将源码复制置上.

重新编译,运行

请注意这里使用的是MYSQL ODBC 8.0 Driver,你依然需要自己配置该环境.
