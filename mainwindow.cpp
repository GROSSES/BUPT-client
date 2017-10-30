#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    moduleStack = new QStackedWidget(this);
    centerWindow = new QWidget;
    setCentralWidget(centerWindow);
    functionLayout = new QVBoxLayout;
    mainLayout = new QVBoxLayout;
    windowLayout = new QHBoxLayout;

    testModule = new QWidget;
    byrforumModule = new QWidget;
    byrbtModule = new QWidget;
    calenderModule = new QWidget;
    mailBoxModule = new QWidget;
    downloadModule = new QWidget;
    informatioModule = new QWidget;
    reportLossModule = new QWidget;
    libraryModule = new QWidget;
    jiaoWuModule = new JiaoWu;

    mainLabel1 = new QLabel(tr("Window1"));
    mainLabel2 = new QLabel(tr("Window2"));
    exitBtn =new QPushButton(tr("Exit"));


    QFont font("Microsoft YaHei", 30, 75);
    mainLabel1->setFont(font);
    mainLabel1->resize(100,100);
    mainLabel2->setFont(font);
    mainLabel2->resize(100,100);

    QVBoxLayout* testLayout = new QVBoxLayout;
    testLayout->addWidget(mainLabel1);
    testLayout->addWidget(exitBtn);



    testModule->setLayout(testLayout);



    moduleStack->addWidget(testModule);
    moduleStack->addWidget(jiaoWuModule);

    functionList = new QListWidget(this);

    QListWidgetItem *testItem = new QListWidgetItem(tr("test"),functionList);
    QListWidgetItem *jiaoWuItem = new QListWidgetItem(tr("教务系统"),functionList);
    QListWidgetItem *byrforumItem = new QListWidgetItem(tr("北邮人论坛"),functionList);
    QListWidgetItem *byrbtItem = new QListWidgetItem(tr("北邮人bt"),functionList);
    QListWidgetItem *calenderItem = new QListWidgetItem(tr("显示校历"),functionList);
    QListWidgetItem *mailBoxItem = new QListWidgetItem(tr("北邮邮箱"),functionList);
    QListWidgetItem *downloadItem = new QListWidgetItem(tr("软件下载"),functionList);
    QListWidgetItem *informatioItem = new QListWidgetItem(tr("信息门户"),functionList);
    QListWidgetItem *reportLossItem = new QListWidgetItem(tr("校园卡挂失"),functionList);
    QListWidgetItem *libraryItem = new QListWidgetItem(tr("北邮图书馆"),functionList);


    functionLayout->addWidget(functionList);
//    functionLayout->setMargin(20);
//    functionLayout->setSpacing(20);

    mainLayout->addWidget(moduleStack);
 //   mainLayout->addWidget(gotodialog1Btn);
//    mainLayout->addWidget(exitBtn);

    windowLayout->addLayout(functionLayout);
    windowLayout->addLayout(mainLayout);

    centerWindow->setLayout(windowLayout);




    connect(exitBtn,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(functionList, SIGNAL(currentRowChanged(int)), moduleStack, SLOT(setCurrentIndex(int)));

}

MainWindow::~MainWindow()
{

}


