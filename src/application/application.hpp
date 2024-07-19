//
// Created by cvrain on 24-7-18.
//

#ifndef DAWDLE_LIVE_APPLICATION_HPP
#define DAWDLE_LIVE_APPLICATION_HPP

#include <QObject>
#include <QQmlApplicationEngine>
#include <QApplication>

class Application {
public:
    explicit Application(QApplication &app);

    void loadEngine(const QUrl &qmlPath);

    void showTrayIcon();

private:
    void initEngine();

private:
    QQmlApplicationEngine engine;
    QApplication &app;
};


#endif //DAWDLE_LIVE_APPLICATION_HPP
