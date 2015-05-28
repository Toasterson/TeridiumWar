#include <QApplication>
#include <QQmlApplicationEngine>
#include <GameClient/gameclient.h>
#include <QtQml>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    qmlRegisterType<TeridiumWar::Items::Item>("org.Teridiumwar.Items", 1, 0, "Item");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    return app.exec();
}
