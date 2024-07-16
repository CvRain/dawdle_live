//
// Created by cvrain on 24-7-16.
//

#ifndef DAWDLE_LIVE_SETTING_ACTION_HPP
#define DAWDLE_LIVE_SETTING_ACTION_HPP

#include "base_action.hpp"

namespace tray_icon::menu::action {
    class SettingAction : public BaseAction {
    Q_OBJECT

    public:
        explicit SettingAction(QObject *parent = nullptr);

        ~SettingAction() override = default;

        void execute() override;
    };
}


#endif //DAWDLE_LIVE_SETTING_ACTION_HPP
