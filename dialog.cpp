#include "dialog.h"


dialog::dialog(QWidget *parent):QDialog(parent)
{
    dialogLabel = new QLabel(tr("Dialog"));
    returnButton = new QPushButton("Return");
    layout = new QVBoxLayout;
    layout->addWidget(dialogLabel);
    layout->addWidget(returnButton);


    setLayout(layout);
    setWindowTitle(tr("Dialog"));
    resize(300,300);

    connect(returnButton,SIGNAL(clicked()),this,SLOT(close()));
}

dialog::~dialog()
{
}
