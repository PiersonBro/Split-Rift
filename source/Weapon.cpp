#include "Weapon.h"

Weapon::Weapon() {
    //Default value of a food object is 10;
    damage = 10;
}

Weapon::Weapon(double damage) {
    this->damage = damage;
}

double Weapon::transformGameValue(double value) {
    return value + damage;
}
