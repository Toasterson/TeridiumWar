#ifndef ITEM_H
#define ITEM_H

#include <QObject>
#include "../Magic/types.h"
#include "../Magic/spell.h"
#include <QString>

namespace TeridiumWar{
    namespace Items{
        class Item : public QObject
        {
            Q_OBJECT
            Q_PROPERTY(ItemType type READ type WRITE setType NOTIFY typeChanged)
            Q_PROPERTY(int stackSize READ stackSize WRITE setStackSize NOTIFY stackSizeChanged)
            Q_PROPERTY(int weight READ weight WRITE setWeight NOTIFY weightChanged)
            Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
            Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
            Q_PROPERTY(Rarity rarity READ rarity WRITE setRarity NOTIFY rarityChanged)
            Q_PROPERTY(TeridiumWar::Magic::Spell *echantment READ echantment WRITE setEchantment NOTIFY echantmentChanged)
            Q_ENUMS(ItemType)
            Q_ENUMS(Rarity)

        public:
            explicit Item(QObject *parent = 0);

            enum ItemType {
                Weapon,
                Armor,
                Clothing
            };

            enum Rarity{
                Invalid = -1,
                Gray = 0,
                White = 1,
                Lime = 2,
                Navy = 3,
                BlueViolet = 4,
                OrangeRed = 5,
                Beige = 6,
                LightPink = 7,
                Pink = 8
            };

            bool stackAble(){
                if(this->m_stackSize > 0){
                    return true;
                }
                return false;
            }
            std::string rarityColor(){
                return RarityColors[this->m_rarity];
            }

            const std::string RarityColors[9] = {
                "#606860",
                "#F0F0F0",
                "#00FF00",
                "#000080",
                "#8028E0",
                "#FF4500",
                "#F5F5DC",
                "#FFB6C1",
                "#FFC0CB"
            };


            ItemType type() const
            {
                return m_type;
            }

            int stackSize() const
            {
                return m_stackSize;
            }

            int weight() const
            {
                return m_weight;
            }

            QString name() const
            {
                return m_name;
            }

            QString description() const
            {
                return m_description;
            }

            Rarity rarity() const
            {
                return m_rarity;
            }

            TeridiumWar::Magic::Spell * echantment() const
            {
                return m_echantment;
            }

        signals:

            void typeChanged(ItemType type);

            void stackSizeChanged(int stackSize);

            void weightChanged(int weight);

            void nameChanged(QString name);

            void descriptionChanged(QString description);

            void rarityChanged(Rarity rarity);

            void echantmentChanged(TeridiumWar::Magic::Spell * echantment);

        public slots:

        void setType(ItemType type)
        {
            if (m_type == type)
                return;

            m_type = type;
            emit typeChanged(type);
        }

        void setStackSize(int stackSize)
        {
            if (m_stackSize == stackSize)
                return;

            m_stackSize = stackSize;
            emit stackSizeChanged(stackSize);
        }

        void setWeight(int weight)
        {
            if (m_weight == weight)
                return;

            m_weight = weight;
            emit weightChanged(weight);
        }

        void setName(QString name)
        {
            if (m_name == name)
                return;

            m_name = name;
            emit nameChanged(name);
        }

        void setDescription(QString description)
        {
            if (m_description == description)
                return;

            m_description = description;
            emit descriptionChanged(description);
        }

        void setRarity(Rarity rarity)
        {
            if (m_rarity == rarity)
                return;

            m_rarity = rarity;
            emit rarityChanged(rarity);
        }

        void setEchantment(TeridiumWar::Magic::Spell * echantment)
        {
            if (m_echantment == echantment)
                return;

            m_echantment = echantment;
            emit echantmentChanged(echantment);
        }

        private:
            int m_stackSize;
            Rarity m_rarity;

            ItemType m_type;
            int m_weight;
            QString m_name;
            QString m_description;
            TeridiumWar::Magic::Spell * m_echantment;
        };
    }
}
#endif // ITEM_H
