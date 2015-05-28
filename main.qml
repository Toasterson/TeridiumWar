import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import org.Teridiumwar.Items 1.0

ApplicationWindow {
    id: root
    title: qsTr("Teridium War")
    width: 1280
    height: 720
    visible: true

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }
    }

    GameClient {
        anchors.fill: parent
        btncreateitem.onClicked: {
            //var component = Qt.createComponent("GameClient/ItemCreator.qml");
            //var window = component.createObject(root);
            //window.show();
        }

        Item{
            id: item
        }
    }
}
