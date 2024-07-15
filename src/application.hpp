//
// Created by cvrain on 24-7-14.
//

#pragma once

#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "component/tray_icon.hpp"


class Application final {
public:
    explicit Application(int argc, char **argv);
    static int exec();
protected:
    void init();
private:
    QGuiApplication app;
    QQmlApplicationEngine engine;
    component::TrayIcon trayIcon{};
};