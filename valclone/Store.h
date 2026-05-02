#ifndef STORE_H
#define STORE_H

#include "Weapons.h"
#include "Player.h"

class Store {
private:
    Weapons w;

public:
    void showMenu();
    void buy(Player& p, int choice);
};

#endif
