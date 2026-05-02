#include "Player.h"

Player::Player(int b) : balance(b), invSize(0) {}

void Player::showBalance() const {
    cout << "Balance: " << balance << "\n";
}

void Player::addWeapon(string weapon) {
    if (invSize < 20)
        inventory[invSize++] = weapon;
}

void Player::showInventory() const {
    for (int i = 0; i < invSize; i++)
        cout << inventory[i] << "\n";
}

bool Player::canAfford(int price) const {
    return balance >= price;
}

void Player::deductBalance(int price) {
    balance -= price;
    cout << "Remaining Balance: " << balance << "\n";
}

void Player::addBalance(int amount) {
    balance += amount;
}
