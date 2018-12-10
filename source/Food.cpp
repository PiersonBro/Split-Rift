#include "Food.h"

Food::Food() {
    //Default value of a food object is 10;
    food = 10;
}

Food::Food(double food) {
    this->food = food;
}

double Food::transformGameValue(double value) {
    return value + food;
}
