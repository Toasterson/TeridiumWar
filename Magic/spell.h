#ifndef SPELL_H
#define SPELL_H
#include <QObject>
#include "types.h"
#include "QtCore/QString"
namespace TeridiumWar {
    namespace Magic {
        class Spell : public QObject
        {
            Q_OBJECT
            Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
            Q_PROPERTY(MagicType aspect READ aspect WRITE setAspect NOTIFY aspectChanged)
            Q_PROPERTY(int strength READ strength WRITE setStrength NOTIFY strengthChanged)
            Q_PROPERTY(double areaOfEffect READ areaOfEffect WRITE setAreaOfEffect NOTIFY areaOfEffectChanged)
            Q_PROPERTY(SpellType spellType READ spellType WRITE setSpellType NOTIFY spellTypeChanged)
            Q_PROPERTY(SpellCastType castType READ castType WRITE setCastType NOTIFY castTypeChanged)
            Q_ENUMS(SpellType)
            Q_ENUMS(SpellCastType)

        public:
            explicit Spell(QObject *parent = 0);

            enum SpellType{
                Heal,
                Damage
            };

            enum SpellCastType{
                Touch,
                Projectile,
                Beam,
                Ritual
            };


            SpellCastType castType() const
            {
                return m_castType;
            }

            SpellType spellType() const
            {
                return m_spellType;
            }

            double areaOfEffect() const
            {
                return m_areaOfEffect;
            }

            int strength() const
            {
                return m_strength;
            }

            MagicType aspect() const
            {
                return m_aspect;
            }

            QString name() const
            {
                return m_name;
            }

        signals:


            void castTypeChanged(SpellCastType castType);

            void spellTypeChanged(SpellType spellType);

            void areaOfEffectChanged(double areaOfEffect);

            void strengthChanged(int strength);

            void aspectChanged(MagicType aspect);

            void nameChanged(QString name);

        public slots:

        void setCastType(SpellCastType castType)
        {
            if (m_castType == castType)
                return;

            m_castType = castType;
            emit castTypeChanged(castType);
        }

        void setSpellType(SpellType spellType)
        {
            if (m_spellType == spellType)
                return;

            m_spellType = spellType;
            emit spellTypeChanged(spellType);
        }

        void setAreaOfEffect(double areaOfEffect)
        {
            if (m_areaOfEffect == areaOfEffect)
                return;

            m_areaOfEffect = areaOfEffect;
            emit areaOfEffectChanged(areaOfEffect);
        }

        void setStrength(int strength)
        {
            if (m_strength == strength)
                return;

            m_strength = strength;
            emit strengthChanged(strength);
        }

        void setAspect(MagicType aspect)
        {
            if (m_aspect == aspect)
                return;

            m_aspect = aspect;
            emit aspectChanged(aspect);
        }

        void setName(QString name)
        {
            if (m_name == name)
                return;

            m_name = name;
            emit nameChanged(name);
        }

        private:

        SpellCastType m_castType;
        SpellType m_spellType;
        double m_areaOfEffect;
        int m_strength;
        MagicType m_aspect;
        QString m_name;
        };
    }
}
#endif // SPELL_H
