#ifndef GAMECLIENT_H
#define GAMECLIENT_H

#include <QObject>
#include "LibTeridium/Item/item.h"
#include "LibTeridium/Item/magicweapon.h"
#include "LibTeridium/Item/projectile.h"
#include "LibTeridium/Item/rangedweapon.h"
#include "LibTeridium/Item/types.h"
#include "LibTeridium/Item/weapon.h"

class GameClient : public QObject
{
    Q_OBJECT
public:
    explicit GameClient(QObject *parent = 0);

signals:

public slots:
};

#endif // GAMECLIENT_H
