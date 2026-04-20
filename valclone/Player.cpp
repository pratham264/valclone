#include "Player.h"

Player::Player(int b) {
    balance = b;
    invSize = 0;
}

void Player::showBalance() {
    cout << "Balance: " << balance << endl;
}

void Player::addWeapon(string weapon) {
    if (invSize < 20) {
        inventory[invSize++] = weapon;
    }
}

void Player::showInventory() {
    cout << "Inventory: ";
    if (invSize == 0) cout << "Empty";
    else {
        for (int i = 0; i < invSize; i++) {
            cout << inventory[i] << " ";
        }
    }
    cout << endl;
}

bool Player::canAfford(int price) {
    return balance >= price;
}

void Player::deduct(int price) {
    balance -= price;
    cout << "Remaining Balance: " << balance << endl;
}

void Player::reward(int amount) {
    balance += amount;
}
