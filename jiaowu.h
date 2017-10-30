#ifndef JIAOWU_H
#define JIAOWU_H
#include <QWidget>
#include <QPushButton>
#include "dialog.h"
class JiaoWu:public QWidget
{
    Q_OBJECT
public:
    JiaoWu(QWidget *parent = 0);
    QWidget *jiaoWuModule;
private:
    dialog dialog1;
    QPushButton *gotodialog1Btn;
private slots:
    void gotodialog1();

};

#endif // JIAOWU_H
