//
// Created by cvrain on 24-7-14.
//

#include "application.hpp"

Application::Application(int argc, char **argv) : app(argc, argv){
    init();
}

int Application::exec() {
    return QGuiApplication::exec();
}

void Application::init() {
    const QUrl url(u"qrc:/qt/qml/dawdle_live/ui/Main.qml"_qs);
    const auto result = QObject::connect(
            &engine,
            &QQmlApplicationEngine::objectCreationFailed,
            &app,
            []() { QCoreApplication::exit(-1); },
            Qt::QueuedConnection);
    Q_ASSERT(result);
    engine.load(url);
}
