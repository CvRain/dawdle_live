//
// Created by cvrain on 24-7-14.
//

#include "application.hpp"

#include "tray_icon/menu_manager.hpp"
#include "tray_icon/exit_action.hpp"

Application::Application(int argc, char **argv)
        : application(argc, argv),
          trayIconManager(&application) {
    init();
}

int Application::exec() {
    return QApplication::exec();
}

void Application::init() {
    const QUrl url(u"qrc:/qt/qml/dawdle_live/ui/Main.qml"_qs);
    engine.load(url);
    loadMenu();
}

void Application::loadMenu() {
    auto exitAction = new tray_icon::menu::action::ExitAction{};

    auto menuManager = new tray_icon::menu::MenuManager{};
    menuManager->addAction(exitAction);

    trayIconManager.setIcon(":/res/img/icon.png");
    trayIconManager.setToolTip("dawdle live");
    trayIconManager.setMenu(menuManager->getMenu());
    trayIconManager.show();
}
