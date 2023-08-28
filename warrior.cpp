#include "warrior.h"
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage), Weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    Damage = rand() % 50 + 2;
    attack(opponent, Damage);
    cout << Name << " swings their " << Weapon << " at " << opponent->getName() << " for " << Damage << " damage !\n";
}