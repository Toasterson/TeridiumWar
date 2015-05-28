import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    width: 1280
    height: 720
    property alias btncreateitem: btncreateitem

    SplitView {
        id: splitView1
        x: 0
        y: 0
        width: 1280
        height: 720
        orientation: Qt.Vertical
    }

    Rectangle {
        id: rectangle1
        x: 8
        y: 8
        width: 975
        height: 704
        color: "#ffffff"
    }

    GroupBox {
        id: grpbxtools
        x: 989
        y: 8
        width: 283
        height: 72
        title: qsTr("Tools")

        Button {
            id: btncreateitem
            x: 0
            y: 0
            text: qsTr("Create Item")
        }
    }
}
