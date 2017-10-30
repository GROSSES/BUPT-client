#include "jiaowu.h"
#include <QLayout>



JiaoWu::JiaoWu(QWidget *parent)
{

    gotodialog1Btn = new QPushButton("Go to dialog1");
    gotodialog1Btn->show();

    QVBoxLayout* jiaoWuLayout = new QVBoxLayout;
    jiaoWuLayout->addWidget(gotodialog1Btn);
    setLayout(jiaoWuLayout);



    connect(gotodialog1Btn,SIGNAL(clicked()),this,SLOT(gotodialog1()));
}

void JiaoWu::gotodialog1()
{
    this->hide();
    dialog1.show();
    dialog1.exec();
    this->show();
}

