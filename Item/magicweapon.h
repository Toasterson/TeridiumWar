#ifndef MAGICWEAPON_H
#define MAGICWEAPON_H
#include "weapon.h"
namespace TeridiumWar{
    namespace Items{
        class MagicWeapon : public Weapon
        {
            Q_PROPERTY(TeridiumWar::Magic::MagicType magicType READ magicType WRITE setMagicType NOTIFY magicTypeChanged)
            Q_PROPERTY(int spellRange READ spellRange WRITE setSpellRange NOTIFY spellRangeChanged)

        public:
            MagicWeapon();
            int spellRange() const
            {
                return m_spellRange;
            }
            TeridiumWar::Magic::MagicType magicType() const
            {
                return m_magicType;
            }

        public slots:
            void setSpellRange(int spellRange)
            {
                if (m_spellRange == spellRange)
                    return;

                m_spellRange = spellRange;
                emit spellRangeChanged(spellRange);
            }
            void setMagicType(TeridiumWar::Magic::MagicType magicType)
            {
                if (m_magicType == magicType)
                    return;

                m_magicType = magicType;
                emit magicTypeChanged(magicType);
            }

        signals:
            void spellRangeChanged(int spellRange);
            void magicTypeChanged(TeridiumWar::Magic::MagicType magicType);

        private:
            int m_spellRange;
            TeridiumWar::Magic::MagicType m_magicType;
        };
    }
}
#endif // MAGICWEAPON_H
