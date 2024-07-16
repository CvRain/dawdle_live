//
// Created by cvrain-thinkbook on 2024/7/16.
//

#include "base_action.hpp"

namespace tray_icon::menu::action {

    BaseAction::BaseAction(QObject *parent) : QAction(parent) {
        const auto result = connect(this, &QAction::triggered, this, &BaseAction::onTriggered);
        Q_ASSERT(result);
    }

    BaseAction::~BaseAction() = default;

    void BaseAction::onTriggered() {
        try {
            execute();
        } catch (std::exception &e) {
            qDebug() << e.what();
        }
    }
}