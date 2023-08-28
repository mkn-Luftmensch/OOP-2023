#include "wizard.h"
using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage), Mana(mana) {}

void Wizard::castSpell(Player* opponent) {
    attack(opponent, Mana);
    cout << Name << " casts a spell on " << opponent->getName() << " for " << Mana << " damage.\n";
}
