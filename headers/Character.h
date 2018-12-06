#ifndef CHARACTER_H
#define CHARACTER_H
#include <vector>
#include "GameItem.h"
using namespace std;

class Character {
    private:
        double health;
        double damage;
        vector<GameItem> items;
    public:
        Character() {
            health = 100;
            damage = 100;
        }

        double getHealth();
        double getDamage();
        vector<GameItem> getItems();
        //Activate the item. Once equipped the item will no longer be in the items vector.
        void equipItem(GameItem item);
        void addItem(GameItem item);

};

#endif
