#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player {
private:
    int balance;
    string inventory[20];
    int invSize;

public:
    Player(int b);

    void showBalance() const;
    void addWeapon(string weapon);
    void showInventory() const;
    bool canAfford(int price) const;
    void deductBalance(int price);   // renamed from deduct
    void addBalance(int amount);     // renamed from reward
};

#endif
