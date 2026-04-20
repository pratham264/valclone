#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player {
public:
    int balance;
    string inventory[20];
    int invSize;

    Player(int b);

    void showBalance();
    void addWeapon(string weapon);
    void showInventory();
    bool canAfford(int price);
    void deduct(int price);
    void reward(int amount);
};

#endif
