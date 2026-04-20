#include "Weapons.h"

Weapons::Weapons() {
    string tempNames[8] = {
        "Classic", "Ghost", "Sheriff",
        "Judge", "Marshall",
        "Vandal", "Phantom", "Operator"
    };

    int tempPrices[8] = {
        0, 500, 800,
        1850, 950,
        2900, 2900, 4700
    };

    for (int i = 0; i < 8; i++) {
        names[i] = tempNames[i];
        prices[i] = tempPrices[i];
    }
}

void Weapons::showWeapons() {
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << ". " << names[i]
             << " (" << prices[i] << ")\n";
    }
    cout << "0. Move to next round\n"; // ✅ UPDATED
}
