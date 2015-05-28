#ifndef PROJECTILE_H
#define PROJECTILE_H
#include "item.h"
namespace TeridiumWar{
    namespace Items{
        class Projectile : public Item
        {
            Q_PROPERTY(int damage READ damage WRITE setDamage NOTIFY damageChanged)
            Q_PROPERTY(bool armorPiercing READ armorPiercing WRITE setArmorPiercing NOTIFY armorPiercingChanged)
        public:
            Projectile();
            int damage() const
            {
                return m_damage;
            }
            bool armorPiercing() const
            {
                return m_armorPiercing;
            }

        public slots:
            void setDamage(int damage)
            {
                if (m_damage == damage)
                    return;

                m_damage = damage;
                emit damageChanged(damage);
            }
            void setArmorPiercing(bool armorPiercing)
            {
                if (m_armorPiercing == armorPiercing)
                    return;

                m_armorPiercing = armorPiercing;
                emit armorPiercingChanged(armorPiercing);
            }

        signals:
            void damageChanged(int damage);
            void armorPiercingChanged(bool armorPiercing);

        private:
            int m_damage;
            bool m_armorPiercing;
        };
    }
}
#endif // PROJECTILE_H
