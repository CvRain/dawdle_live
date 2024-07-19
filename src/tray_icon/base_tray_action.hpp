//
// Created by cvrain on 24-7-18.
//

#ifndef DAWDLE_LIVE_BASE_TRAY_ACTION_HPP
#define DAWDLE_LIVE_BASE_TRAY_ACTION_HPP

#include <QObject>
#include <QAction>

namespace tray_icon {

    class BaseTrayAction : public QObject {
    Q_OBJECT

    public:
        explicit BaseTrayAction(QObject *parent = nullptr);

        ~BaseTrayAction() override;

        void setIcon(const QIcon &icon);

        void setText(const QString &text);

        void setToolTip(const QString &toolTip);

        QAction *getAction();

    public slots:

        virtual void onTriggered() = 0;

    private:
        QAction *action;
    };

} // tray_icon

#endif //DAWDLE_LIVE_BASE_TRAY_ACTION_HPP
