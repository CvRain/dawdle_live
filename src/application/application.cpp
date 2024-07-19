//
// Created by cvrain on 24-7-18.
//

#include "application.hpp"
#include <QSystemTrayIcon>
#include <QMenu>
#include <QAction>

#include "tray_icon/exit_tray_action.hpp"

Application::Application(QApplication &app): app(app){
    initEngine();
}

void Application::initEngine() {
    const auto result = QObject::connect(
            &engine,
            &QQmlApplicationEngine::objectCreationFailed,
            &app,
            []() { QApplication::exit(-1); },
            Qt::QueuedConnection);
    Q_ASSERT(result);
}

void Application::loadEngine(const QUrl &qmlPath) {
    try {
        engine.load(QUrl(qmlPath));
    } catch (const std::exception &e) {
        qDebug() << e.what();
    }
}

void Application::showTrayIcon() {
    auto trayIcon = new QSystemTrayIcon{};
    auto trayMenu = new QMenu{};
    auto showAction = new QAction{"Show", trayMenu};

    auto action = new tray_icon::ExitTrayAction{trayMenu};

    trayMenu->addAction(action->getAction());
    trayMenu->addAction(showAction);
    trayIcon->setContextMenu(trayMenu);
    trayIcon->setIcon(QIcon{":/icon/app.png"});


     QObject::connect(showAction, &QAction::triggered, [&]() {
         loadEngine(QUrl(u"qrc:/qt/qml/dawdle_live/Main.qml"_qs));
     });

    trayIcon->show();
}
