#ifndef WEAPONS_H
#define WEAPONS_H

#include "Weapon.h"

class Weapons {
private:
    Weapon weapons[8];
    int count;

public:
    Weapons();
    void showWeapons() const;
    Weapon getWeapon(int index) const;
    int getCount() const;
};

#endif
