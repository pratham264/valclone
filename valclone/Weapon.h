#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
using namespace std;

class Weapon {
private:
    string weaponName;
    int weaponPrice;
    int weaponDamage;

public:
    Weapon();
    Weapon(string name, int price, int damage);

    string getName() const;
    int getPrice() const;
    int getDamage() const;

    void fire() const;
    void display(int index) const;
};

#endif
