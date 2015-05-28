#ifndef CHARACTER_H
#define CHARACTER_H

#include <QObject>
#include <QString>
#include "Item/item.h"
namespace TeridiumWar{
    namespace Characters{
        class Character : public QObject
        {
            Q_OBJECT
            Q_PROPERTY(int currentHealth READ currentHealth WRITE setCurrentHealth NOTIFY currentHealthChanged)
            Q_PROPERTY(int maxHealth READ maxHealth WRITE setMaxHealth NOTIFY maxHealthChanged)
            Q_PROPERTY(int currentMana READ currentMana WRITE setCurrentMana NOTIFY currentManaChanged)
            Q_PROPERTY(int maxMana READ maxMana WRITE setMaxMana NOTIFY maxManaChanged)
            Q_PROPERTY(int attack READ attack WRITE setAttack NOTIFY attackChanged)
            Q_PROPERTY(int defense READ defense WRITE setDefense NOTIFY defenseChanged)
            Q_PROPERTY(int experience READ experience WRITE setExperience NOTIFY experienceChanged)
            Q_PROPERTY(int damage READ damage WRITE setDamage NOTIFY damageChanged)
            Q_PROPERTY(QString id READ id WRITE setId NOTIFY idChanged)
        public:
            explicit Character(QObject *parent = 0);

            int currentHealth() const
            {
                return m_currentHealth;
            }

            int maxHealth() const
            {
                return m_maxHealth;
            }

            int currentMana() const
            {
                return m_currentMana;
            }

            int maxMana() const
            {
                return m_maxMana;
            }

            int attack() const
            {
                return m_attack;
            }

            int defense() const
            {
                return m_defense;
            }

            int experience() const
            {
                return m_experience;
            }

            int damage() const
            {
                return m_damage;
            }

            QString id() const
            {
                return m_id;
            }

        signals:

            void currentHealthChanged(int currentHealth);

            void maxHealthChanged(int maxHealth);

            void currentManaChanged(int currentMana);

            void maxManaChanged(int maxMana);

            void attackChanged(int attack);

            void defenseChanged(int defense);

            void experienceChanged(int experience);

            void damageChanged(int damage);

            void idChanged(QString id);

        public slots:

        void setCurrentHealth(int currentHealth)
        {
            if (m_currentHealth == currentHealth)
                return;

            m_currentHealth = currentHealth;
            emit currentHealthChanged(currentHealth);
        }

        void setMaxHealth(int maxHealth)
        {
            if (m_maxHealth == maxHealth)
                return;

            m_maxHealth = maxHealth;
            emit maxHealthChanged(maxHealth);
        }

        void setCurrentMana(int currentMana)
        {
            if (m_currentMana == currentMana)
                return;

            m_currentMana = currentMana;
            emit currentManaChanged(currentMana);
        }

        void setMaxMana(int maxMana)
        {
            if (m_maxMana == maxMana)
                return;

            m_maxMana = maxMana;
            emit maxManaChanged(maxMana);
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

        void setExperience(int experience)
        {
            if (m_experience == experience)
                return;

            m_experience = experience;
            emit experienceChanged(experience);
        }

        void setDamage(int damage)
        {
            if (m_damage == damage)
                return;

            m_damage = damage;
            emit damageChanged(damage);
        }

        void setId(QString id)
        {
            if (m_id == id)
                return;

            m_id = id;
            emit idChanged(id);
        }

        private:
        int m_currentHealth;
        int m_maxHealth;
        int m_currentMana;
        int m_maxMana;
        int m_attack;
        int m_defense;
        int m_experience;
        int m_damage;
        QString m_id;
        };
    }
}
#endif // CHARACTER_H
