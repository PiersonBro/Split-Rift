#ifndef FOOD_H
#define FOOD_H
#include "GameItem.h"

class Food: public GameItem {
    private:
        double food;
    public:
        Food();
        Food(double food);
        virtual double transformGameValue(double value);
};

#endif
