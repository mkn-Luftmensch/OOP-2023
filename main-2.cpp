#include "Character.h"
#include "Trap.h"
#include <iostream>
using namespace std;

int main() {
    Character steve(1, 2);
    Trap trap(3, 4);
    steve.move(2, 2);
    cout << trap.isActive() << endl;
    trap.apply(steve);
    cout << steve.getType() << endl << trap.isActive();

    return 0;
}