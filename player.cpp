#include "player.h"
using namespace std;

Player::Player(string name, int health, int damage) : Name(name), Health(health), Damage(damage) {}
void Player::attack(Player* opponent, int damage) {
    opponent -> Health -= damage;
}

string Player::getName() {
    return Name;
}

int Player::getHealth() {
    return Health;
}

void Player::takeDamage() {
    cout << Name << " takes " << Damage << " damage. Remaining health: " << Health << "\n";
}
