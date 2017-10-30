#include "flashviewer.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    FlashViewer flashViewer;
    flashViewer.setUrl("https://www.douyu.com");
    flashViewer.show();

    return app.exec();
}