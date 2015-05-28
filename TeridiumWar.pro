#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T08:53:25
#
#-------------------------------------------------

QT += qml quick widgets core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeridiumWar
TEMPLATE = app

RESOURCES += qml.qrc

SOURCES += main.cpp \
    GameClient/gameclient.cpp\
    Magic/spell.cpp \
    Item/item.cpp \
    Item/weapon.cpp \
    Item/magicweapon.cpp \
    Item/rangedweapon.cpp \
    Item/projectile.cpp \
    Characters/character.cpp \
    Characters/hero.cpp

HEADERS  += \
    GameClient/gameclient.h\
    qtyaml.h \
    vec3.h \
    power.h \
    Magic/types.h \
    Magic/spell.h \
    Item/item.h \
    Item/weapon.h \
    Item/magicweapon.h \
    Item/rangedweapon.h \
    Item/projectile.h \
    Characters/character.h \
    Characters/hero.h

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../build/yaml-cpp/release/ -lyaml-cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../build/yaml-cpp/debug/ -lyaml-cpp
else:unix: LIBS += -L$$PWD/../../build/yaml-cpp/ -lyaml-cpp

INCLUDEPATH += $$PWD/yaml-cpp/include
DEPENDPATH += $$PWD/yaml-cpp/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../build/yaml-cpp/release/libyaml-cpp.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../build/yaml-cpp/debug/libyaml-cpp.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../build/yaml-cpp/release/yaml-cpp.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../build/yaml-cpp/debug/yaml-cpp.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../build/yaml-cpp/libyaml-cpp.a

# Default rules for deployment.
include(deployment.pri)
