#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T08:53:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeridiumWar
TEMPLATE = app

SOURCES += main.cpp\
    GameClient/game.cpp

HEADERS  += \
    GameClient/game.h

FORMS    += \
    GameClient/game.ui

DISTFILES += \
    monsters.yaml

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