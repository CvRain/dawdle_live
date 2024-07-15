import QtQuick
import Qt.labs.platform

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    SystemTrayIcon {
        visible: true
    }
}
