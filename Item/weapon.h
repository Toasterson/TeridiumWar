#ifndef WEAPON_H
#define WEAPON_H

#include "item.h"
namespace TeridiumWar{
    namespace Items{
        class Weapon : public Item
        {
            Q_PROPERTY(WeaponType weaponType READ weaponType WRITE setWeaponType NOTIFY weaponTypeChanged)
            Q_PROPERTY(HoldingType holdingType READ holdingType WRITE setHoldingType NOTIFY holdingTypeChanged)
            Q_PROPERTY(int attack READ attack WRITE setAttack NOTIFY attackChanged)
            Q_PROPERTY(int defense READ defense WRITE setDefense NOTIFY defenseChanged)
            Q_PROPERTY(int damage READ damage WRITE setDamage NOTIFY damageChanged)
            Q_PROPERTY(bool armorPiercing READ armorPiercing WRITE setArmorPiercing NOTIFY armorPiercingChanged)
            Q_ENUMS(HoldingType)
            Q_ENUMS(WeaponType)
        public:
            Weapon();

            enum HoldingType{
                OneHanded,
                TwoHanded
            };

            enum WeaponType{
                Sword,
                Axe,
                Club,
                Throw,
                Staff,
                Wand,
                Dager,
                Rapier,
                Shield
            };
            WeaponType weaponType() const
            {
                return m_weaponType;
            }
            HoldingType holdingType() const
            {
                return m_holdingType;
            }

            int attack() const
            {
                return m_attack;
            }

            int defense() const
            {
                return m_defense;
            }

            int damage() const
            {
                return m_damage;
            }

            bool armorPiercing() const
            {
                return m_armorPiercing;
            }

        public slots:
            void setWeaponType(WeaponType weaponType)
            {
                if (m_weaponType == weaponType)
                    return;

                m_weaponType = weaponType;
                emit weaponTypeChanged(weaponType);
            }
            void setHoldingType(HoldingType holdingType)
            {
                if (m_holdingType == holdingType)
                    return;

                m_holdingType = holdingType;
                emit holdingTypeChanged(holdingType);
            }

            void setAttack(int attack)
            {
                if (m_attack == attack)
                    return;

                m_attack = attack;
                emit attackChanged(attack);
            }

            void setDefense(int defense)
            {
                if (m_defense == defense)
                    return;

                m_defense = defense;
                emit defenseChanged(defense);
            }

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
            void weaponTypeChanged(WeaponType weaponType);
            void holdingTypeChanged(HoldingType holdingType);

            void attackChanged(int attack);

            void defenseChanged(int defense);

            void damageChanged(int damage);

            void armorPiercingChanged(bool armorPiercing);

        private:
            WeaponType m_weaponType;
            HoldingType m_holdingType;
            int m_attack;
            int m_defense;
            int m_damage;
            bool m_armorPiercing;
        };
    }
}
#endif // WEAPON_H
