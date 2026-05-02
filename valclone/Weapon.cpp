#include "Weapon.h"

Weapon::Weapon() : weaponName(""), weaponPrice(0), weaponDamage(0) {}

Weapon::Weapon(string name, int price, int damage)
    : weaponName(name), weaponPrice(price), weaponDamage(damage) {}

string Weapon::getName() const { return weaponName; }
int Weapon::getPrice() const { return weaponPrice; }
int Weapon::getDamage() const { return weaponDamage; }

void Weapon::fire() const {
    cout << weaponName << " fired! Damage: " << weaponDamage << "\n";
}

void Weapon::display(int index) const {
    cout << index + 1 << ". " << weaponName << " (" << weaponPrice << ")\n";
}
