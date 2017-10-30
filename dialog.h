#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class QPushButton;
class QLabel;
class QVBoxLayout;

class dialog : public QDialog
{
    Q_OBJECT
public:
    dialog(QWidget *parent = 0);

    ~dialog();

private:
    QLabel *dialogLabel;  //显示文本
    QPushButton *returnButton;  //返回按钮
    QVBoxLayout *layout;  //竖向布局
};

#endif // DIALOG_H
