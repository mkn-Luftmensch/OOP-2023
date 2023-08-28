#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"
using namespace std;

class Warrior : public Player {
    private:
        string Weapon;
    public:
        Warrior(string name, int health, int damage, string weapon);
        void swingWeapon (Player* opponent);
};

#endif