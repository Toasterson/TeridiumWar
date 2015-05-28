#ifndef RANGEDWEAPON_H
#define RANGEDWEAPON_H
#include "weapon.h"

namespace TeridiumWar {
    namespace Items {
        class RangedWeapon : public Weapon
        {
            Q_PROPERTY(int range READ range WRITE setRange NOTIFY rangeChanged)
            Q_PROPERTY(ProjectileType projectileType READ projectileType WRITE setProjectileType NOTIFY projectileTypeChanged)
        public:
            RangedWeapon();

            enum ProjectileType{
                Knife,
                Arrow,
                Bullet,
                Bolt,
                Magic
            };

            int range() const
            {
                return m_range;
            }
            ProjectileType projectileType() const
            {
                return m_projectileType;
            }

        public slots:
            void setRange(int range)
            {
                if (m_range == range)
                    return;

                m_range = range;
                emit rangeChanged(range);
            }
            void setProjectileType(ProjectileType projectileType)
            {
                if (m_projectileType == projectileType)
                    return;

                m_projectileType = projectileType;
                emit projectileTypeChanged(projectileType);
            }

        signals:
            void rangeChanged(int range);
            void projectileTypeChanged(ProjectileType projectileType);

        private:
            int m_range;
            ProjectileType m_projectileType;
        };
    }
}
#endif // RANGEDWEAPON_H
