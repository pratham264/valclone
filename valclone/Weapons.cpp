#include "Weapons.h"

Weapons::Weapons() {
    count = 8;
    weapons[0] = Weapon("Classic",  0,    26);
    weapons[1] = Weapon("Ghost",    500,  30);
    weapons[2] = Weapon("Sheriff",  800,  55);
    weapons[3] = Weapon("Judge",    1850, 60);
    weapons[4] = Weapon("Marshall", 950,  45);
    weapons[5] = Weapon("Vandal",   2900, 40);
    weapons[6] = Weapon("Phantom",  2900, 39);
    weapons[7] = Weapon("Operator", 4700, 150);
}

void Weapons::showWeapons() const {
    for (int i = 0; i < count; i++) {
        weapons[i].display(i);
    }
    cout << "0. Move to next round\n";
}

Weapon Weapons::getWeapon(int index) const {
    return weapons[index];
}

int Weapons::getCount() const { return count; }
