#ifndef CHARACTER_H
#define CHARACTER_H
#include <vector>
#include "GameItem.h"
using namespace std;

class Character {
    private:
        double health;
        double damage;
        vector<GameItem *> items;
    public:
        Character() {
            health = 100;
            damage = 0;
        }

        double getHealth() const;
        double getDamage() const;
        vector<GameItem *> getItems() const;
        //Activate the item. Once equipped the item will no longer be in the items vector.
        // Abstract classes can't be passed by value.
        // I learned this on stack overflow:
        // https://stackoverflow.com/questions/4282014/c-abstract-class-cant-have-a-method-with-a-parameter-of-that-class 
        void equipItem(GameItem * item);
        void addItem(GameItem * item);

};

#endif
