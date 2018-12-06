#ifndef GAME_ITEM_H
#define GAME_ITEM_H

class GameItem {
    public:
        virtual double transformGameValue(double value) = 0;
        virtual ~GameItem();
};

#endif
