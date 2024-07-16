//
// Created by cvrain-thinkbook on 2024/7/16.
//

#ifndef DAWDLE_LIVE_EXIT_ACTION_HPP
#define DAWDLE_LIVE_EXIT_ACTION_HPP

#include "base_action.hpp"

namespace tray_icon::menu::action {
    class ExitAction : public BaseAction {
    Q_OBJECT

    public:
        explicit ExitAction(QObject *parent = nullptr);

        ~ExitAction() override = default;

        void execute() override;
    };
}


#endif //DAWDLE_LIVE_EXIT_ACTION_HPP
