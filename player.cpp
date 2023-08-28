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

int Player::getDamage() {
    return Damage;
}

void Player::takeDamage(Player* opponent) {
    cout << Name << " takes " << opponent->getDamage() << " damage. Remaining health: " << Health << "\n";
}
