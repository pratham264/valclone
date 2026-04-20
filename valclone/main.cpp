#include <iostream>
#include "Player.h"
#include "Store.h"

using namespace std;

int getIntInput() {
    int x;
    while (!(cin >> x)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Enter again: ";
    }
    return x;
}

int main() {
    Player player(800);
    Store store;

    cout << "Enter total rounds: ";
    int totalRounds = getIntInput();

    for (int r = 1; r <= totalRounds; r++) {
        cout << "\n========== ROUND " << r << " ==========\n";

        if (r > 1) {
            cout << "Did you win last round? (1 = Yes, 0 = No): ";
            int result = getIntInput();

            cout << "Enter kills in last round (0-5): ";
            int kills = getIntInput();

            if (kills < 0) kills = 0;
            if (kills > 5) kills = 5;

            int reward = (result == 1) ? 3000 : 1500;

            if (result == 1) {
                if (kills == 2) reward += 400;
                else if (kills == 3) reward += 600;
                else if (kills == 4) reward += 800;
                else if (kills == 5) reward += 1000;
            }

            player.reward(reward);
        }

        player.showBalance();
        player.showInventory();

        while (true) {
            store.showMenu();
            cout << "Enter choice: ";
            int choice = getIntInput();

            if (choice == 0) break; 

            store.buy(player, choice);
        }
    }

    cout << "\n===== GAME OVER =====\n";
    player.showBalance();
    player.showInventory();

    return 0;
}
