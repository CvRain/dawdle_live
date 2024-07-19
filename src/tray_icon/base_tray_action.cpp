//
// Created by cvrain on 24-7-18.
//

#include "base_tray_action.hpp"

namespace tray_icon {
    BaseTrayAction::BaseTrayAction(QObject *parent)
            : QObject(parent), action(new QAction{parent}) {
        const auto result = QObject::connect(action, &QAction::triggered, this, &BaseTrayAction::onTriggered);
        Q_ASSERT(result);
    }

    BaseTrayAction::~BaseTrayAction() {
        if (action != nullptr) {
            action->deleteLater();
            action = nullptr;
        }
    }

    void BaseTrayAction::setIcon(const QIcon &icon) {
        action->setIcon(icon);
    }

    void BaseTrayAction::setText(const QString &text) {
        action->setText(text);
    }

    void BaseTrayAction::setToolTip(const QString &toolTip) {
        action->setToolTip(toolTip);
    }

    QAction *BaseTrayAction::getAction() {
        return action;
    }
} // tray_icon