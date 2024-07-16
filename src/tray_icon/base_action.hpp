//
// Created by cvrain-thinkbook on 2024/7/16.
//

#ifndef DAWDLE_LIVE_BASE_ACTION_HPP
#define DAWDLE_LIVE_BASE_ACTION_HPP

#include <QAction>

namespace tray_icon::menu::action {
    class BaseAction : public QAction {
    Q_OBJECT

    public:
        explicit BaseAction(QObject *parent = nullptr);

        ~BaseAction() override;

        virtual void execute() = 0;

    protected slots:

        void onTriggered();
    };
}


#endif //DAWDLE_LIVE_BASE_ACTION_HPP
