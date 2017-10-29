#include <cpr/cpr.h>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QTextEdit *textEdit = new QTextEdit;

    auto response = cpr::Get(cpr::Url{"http://www.baidu.com"});
    textEdit->setText(QString::fromStdString(response.text));
    textEdit->show();

    return app.exec();
}