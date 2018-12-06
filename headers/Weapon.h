#ifndef WEAPON_H
#define WEAPON_H
#include "GameItem.h"

class Weapon: public GameItem {
    private:
        double damage;
    public:
        Weapon();
        Weapon(double damage);
        virtual double transformGameValue(double value);
};

#endif
