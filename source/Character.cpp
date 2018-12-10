#include "Character.h"
#include "Food.h"
#include <iostream>
#include <typeinfo>
#include <algorithm>
double Character::getHealth() const {
    return health;
}

double Character::getDamage() const {
    return damage;
}

vector<GameItem *> Character::getItems() const {
    return items;
}

void Character::equipItem(GameItem * item) {
    if (typeid(item) == typeid(Food)) {
        health = item->transformGameValue(health);
    } else {
        damage = item->transformGameValue(damage);
    }
    // This technique is from stack overflow.
    // https://stackoverflow.com/questions/15099707/how-to-get-position-of-a-certain-element-in-strings-vector-to-use-it-as-an-inde
    ptrdiff_t index = distance(items.begin(), find(items.begin(), items.end(), item));
    if (index >= items.size()) {
        cout << "Error: Could not remove item" << endl;
        exit(-1);
    } else {
        items.erase(items.begin() + index);
    }
}

void Character::addItem(GameItem * item) {
    items.push_back(item);
}
