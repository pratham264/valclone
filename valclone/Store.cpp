#include "Store.h"

void Store::showMenu() {
    cout << "\n--- Store ---\n";
    w.showWeapons();
}

void Store::buy(Player &p, int choice) {
    if (choice >= 1 && choice <= 8) {
        int index = choice - 1;

        if (p.canAfford(w.prices[index])) {
            p.deduct(w.prices[index]);
            p.addWeapon(w.names[index]);
            cout << "Bought " << w.names[index] << "!\n";
        } else {
            cout << "Not enough balance!\n";
        }
    } else if (choice != 0) {
        cout << "Invalid choice!\n";
    }
}
