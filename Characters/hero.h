#ifndef HERO_H
#define HERO_H
#include "character.h"
#include "Item/item.h"
#include "Item/weapon.h"
namespace TeridiumWar{
    namespace Characters{
        class Hero : public Character
        {
            Q_PROPERTY(TeridiumWar::Items::Item *head READ head WRITE setHead NOTIFY headChanged)
            Q_PROPERTY(TeridiumWar::Items::Item *shoulders READ shoulders WRITE setShoulders NOTIFY shouldersChanged)
            Q_PROPERTY(TeridiumWar::Items::Item *arms READ arms WRITE setArms NOTIFY armsChanged)
            Q_PROPERTY(TeridiumWar::Items::Item *hands READ hands WRITE setHands NOTIFY handsChanged)
            Q_PROPERTY(TeridiumWar::Items::Item *chest READ chest WRITE setChest NOTIFY chestChanged)
            Q_PROPERTY(TeridiumWar::Items::Item *legs READ legs WRITE setLegs NOTIFY legsChanged)
            Q_PROPERTY(TeridiumWar::Items::Item *knees READ knees WRITE setKnees NOTIFY kneesChanged)
            Q_PROPERTY(TeridiumWar::Items::Item *feet READ feet WRITE setFeet NOTIFY feetChanged)
            Q_PROPERTY(TeridiumWar::Items::Weapon *rightHand READ rightHand WRITE setRightHand NOTIFY rightHandChanged)
            Q_PROPERTY(TeridiumWar::Items::Weapon *leftHand READ leftHand WRITE setLeftHand NOTIFY leftHandChanged)
            Q_PROPERTY(QList<TeridiumWar::Items::Item> *inventory READ inventory WRITE setInventory NOTIFY inventoryChanged)
        public:
            Hero();

            TeridiumWar::Items::Item * head() const
            {
                return m_head;
            }

            TeridiumWar::Items::Item * shoulders() const
            {
                return m_shoulders;
            }

            TeridiumWar::Items::Item * arms() const
            {
                return m_arms;
            }

            TeridiumWar::Items::Item * hands() const
            {
                return m_hands;
            }

            TeridiumWar::Items::Item * chest() const
            {
                return m_chest;
            }

            TeridiumWar::Items::Item * legs() const
            {
                return m_legs;
            }

            TeridiumWar::Items::Item * knees() const
            {
                return m_knees;
            }

            TeridiumWar::Items::Item * feet() const
            {
                return m_feet;
            }

            TeridiumWar::Items::Weapon * rightHand() const
            {
                return m_rightHand;
            }

            TeridiumWar::Items::Weapon * leftHand() const
            {
                return m_leftHand;
            }

            QList<TeridiumWar::Items::Item> * inventory() const
            {
                return m_inventory;
            }

        public slots:

            void setHead(TeridiumWar::Items::Item * head)
            {
                if (m_head == head)
                    return;

                m_head = head;
                emit headChanged(head);
            }

            void setShoulders(TeridiumWar::Items::Item * shoulders)
            {
                if (m_shoulders == shoulders)
                    return;

                m_shoulders = shoulders;
                emit shouldersChanged(shoulders);
            }

            void setArms(TeridiumWar::Items::Item * arms)
            {
                if (m_arms == arms)
                    return;

                m_arms = arms;
                emit armsChanged(arms);
            }

            void setHands(TeridiumWar::Items::Item * hands)
            {
                if (m_hands == hands)
                    return;

                m_hands = hands;
                emit handsChanged(hands);
            }

            void setChest(TeridiumWar::Items::Item * chest)
            {
                if (m_chest == chest)
                    return;

                m_chest = chest;
                emit chestChanged(chest);
            }

            void setLegs(TeridiumWar::Items::Item * legs)
            {
                if (m_legs == legs)
                    return;

                m_legs = legs;
                emit legsChanged(legs);
            }

            void setKnees(TeridiumWar::Items::Item * knees)
            {
                if (m_knees == knees)
                    return;

                m_knees = knees;
                emit kneesChanged(knees);
            }

            void setFeet(TeridiumWar::Items::Item * feet)
            {
                if (m_feet == feet)
                    return;

                m_feet = feet;
                emit feetChanged(feet);
            }

            void setRightHand(TeridiumWar::Items::Weapon * rightHand)
            {
                if (m_rightHand == rightHand)
                    return;

                m_rightHand = rightHand;
                emit rightHandChanged(rightHand);
            }

            void setLeftHand(TeridiumWar::Items::Weapon * leftHand)
            {
                if (m_leftHand == leftHand)
                    return;

                m_leftHand = leftHand;
                emit leftHandChanged(leftHand);
            }

            void setInventory(QList<TeridiumWar::Items::Item> * inventory)
            {
                if (m_inventory == inventory)
                    return;

                m_inventory = inventory;
                emit inventoryChanged(inventory);
            }

        signals:

            void headChanged(TeridiumWar::Items::Item * head);

            void shouldersChanged(TeridiumWar::Items::Item * shoulders);

            void armsChanged(TeridiumWar::Items::Item * arms);

            void handsChanged(TeridiumWar::Items::Item * hands);

            void chestChanged(TeridiumWar::Items::Item * chest);

            void legsChanged(TeridiumWar::Items::Item * legs);

            void kneesChanged(TeridiumWar::Items::Item * knees);

            void feetChanged(TeridiumWar::Items::Item * feet);

            void rightHandChanged(TeridiumWar::Items::Weapon * rightHand);

            void leftHandChanged(TeridiumWar::Items::Weapon * leftHand);

            void inventoryChanged(QList<TeridiumWar::Items::Item> * inventory);

        private:
            TeridiumWar::Items::Item * m_head;
            TeridiumWar::Items::Item * m_shoulders;
            TeridiumWar::Items::Item * m_arms;
            TeridiumWar::Items::Item * m_hands;
            TeridiumWar::Items::Item * m_chest;
            TeridiumWar::Items::Item * m_legs;
            TeridiumWar::Items::Item * m_knees;
            TeridiumWar::Items::Item * m_feet;
            TeridiumWar::Items::Weapon * m_rightHand;
            TeridiumWar::Items::Weapon * m_leftHand;
            QList<TeridiumWar::Items::Item> * m_inventory;
        };
    }
}
#endif // HERO_H
