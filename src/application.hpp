//
// Created by cvrain on 24-7-14.
//

#pragma once

#include <QApplication>
#include <QQmlApplicationEngine>

#include "tray_icon/tray_icon_manager.hpp"

class Application final {
public:
    explicit Application(int argc, char **argv);
    static int exec();
protected:
    void init();
    void loadMenu();
private:
    QApplication application;
    QQmlApplicationEngine engine;
    tray_icon::TrayIconManager trayIconManager{};
};
