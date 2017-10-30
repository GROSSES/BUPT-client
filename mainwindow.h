#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include "dialog.h"
#include "jiaowu.h"
#include <QPushButton>
#include <QLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QDesktopServices>
#include <QUrl>
#include <QListWidget>
#include <QStackedWidget>
class QPushButton;
class QLabel;
class QVBoxLayout;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QListWidget *functionList;
    QLabel *mainLabel1;
    QLabel *mainLabel2;

    QPushButton *gotodialog1Btn;

    QPushButton *exitBtn;//exit the program


    QStackedWidget *moduleStack;
//    dialog dialog1;
    JiaoWu  *jiaoWuModule;

    QWidget *centerWindow;
    QVBoxLayout *functionLayout;
    QVBoxLayout *mainLayout;
    QHBoxLayout *windowLayout;

    QWidget *testModule;

    QWidget *byrforumModule;
    QWidget *byrbtModule;
    QWidget *calenderModule;
    QWidget *mailBoxModule;
    QWidget *downloadModule;
    QWidget *informatioModule;
    QWidget *reportLossModule;
    QWidget *libraryModule;
//    QWidget *jiaoWuModule;

private slots:
//    void gotodialog1();
//    void exit();
    /*
   QPushButton *jiaoWuBtn;//教务系统
   QPushButton *byrbtBtn;//byrbt
   QPushButton *byrforumBtn;//byr forum
   QPushButton *calenderBtn;//calender
   QPushButton *mailBtn;//mail
   QPushButton *downloadBtn;//download
   QPushButton *reportLossBtn;//loss
   QPushButton *libraryBtn;//library
   QPushButton *informationBtn;//信息门户
    */

};

#endif // MAINWINDOW_H
