#include "Store.h"

void Store::showMenu() {
    cout << "\n--- Store ---\n";
    w.showWeapons();
}

void Store::buy(Player& p, int choice) {
    if (choice >= 1 && choice <= w.getCount()) {
        int index = choice - 1;
        Weapon selected = w.getWeapon(index);

        if (p.canAfford(selected.getPrice())) {
            p.deductBalance(selected.getPrice());   // fixed name
            p.addWeapon(selected.getName());
            cout << "Bought " << selected.getName() << "!\n";
        } else {
            cout << "Not enough balance!\n";
        }
    } else if (choice != 0) {
        cout << "Invalid choice!\n";
    }
}
