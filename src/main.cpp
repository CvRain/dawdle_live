#include "application.hpp"

#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>

#include "tray_icon/tray_icon_manager.hpp"
#include "tray_icon/menu_manager.hpp"
#include "tray_icon/exit_action.hpp"

int main(int argc, char *argv[]) {
    Application application{argc, argv};

    return Application::exec();
}
