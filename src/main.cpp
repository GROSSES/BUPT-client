#include "flashviewer.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    FlashViewer flashViewer;
    //flashViewer.setHtml(htmlFile.readAll(), QUrl("https://www.douyu.com"));
    flashViewer.setUrl(QUrl("http://tv.byr.cn/desktop/index.html?cdn=bupt"));
    flashViewer.show();

    return app.exec();
}