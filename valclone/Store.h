#ifndef STORE_H
#define STORE_H

#include "Player.h"
#include "Weapons.h"

class Store {
public:
    Weapons w;

    void showMenu();
    void buy(Player &p, int choice);
};

#endif
