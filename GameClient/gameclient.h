#ifndef GAMECLIENT_H
#define GAMECLIENT_H

#include <QObject>
#include "Item/item.h"
#include "Item/magicweapon.h"
#include "Item/projectile.h"
#include "Item/rangedweapon.h"
#include "Item/weapon.h"

class GameClient : public QObject
{
    Q_OBJECT
public:
    explicit GameClient(QObject *parent = 0);

signals:

public slots:
};

#endif // GAMECLIENT_H
