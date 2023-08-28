#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"
using namespace std;

class Wizard : public Player {
    private: 
        int Mana;
    public:
        Wizard(string name, int health, int damage, int mana);
        void castSpell(Player* opponent);
};

#endif