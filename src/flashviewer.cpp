//
// Created by newcoderlife on 17-10-30.
//

#include <QtWebEngineWidgets/QWebEngineSettings>
#include "flashviewer.h"

FlashViewer::FlashViewer(QWidget *parent) : QWebEngineView(parent) {
    QWebEngineSettings::globalSettings()->setAttribute(QWebEngineSettings::PluginsEnabled, true);
}
