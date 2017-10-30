//
// Created by newcoderlife on 17-10-30.
//

#include <QtWebEngineWidgets/QWebEngineSettings>
#include "flashviewer.h"

FlashViewer::FlashViewer(QWidget *parent) : QWebEngineView(parent) {
    QWebEngineSettings::globalSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
}

QWebEnginePage *FlashViewer::getWebEnginePage() {
    static QWebEnginePage webEnginePage(this);
    setPage(&webEnginePage);
    return &webEnginePage;
}

void FlashViewer::setUrl(const QString &url) {
    getWebEnginePage()->load(QUrl(url));
}
