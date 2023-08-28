#ifndef PLAYER_H
#define PLAYER_H

#include <bits/stdc++.h>
using namespace std;

class Player {
    protected:
        string Name;
        int Health;
        int Damage;
    public:
        Player(string name, int health, int damage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);
        string getName();
        int getDamage();
        int getHealth();
        void takeDamage(Player* opponent);

};

#endif