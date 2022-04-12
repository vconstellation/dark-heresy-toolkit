#ifndef NPC_H
#define NPC_H
#include <string>

using namespace std;

class Npc
{
    string fullName;
    
    // this fills the role for the Melee / Ranged combat;
    int combatAttribute;

    int willpower;

    // here should be weapon class;

    // 7 - 10 + 1d5 
    int wounds;
public:
    Npc();
    Npc(int, int, int);

    // setters and getters
    string getNpc();
    string getFullName();
    string getWounds();

    bool setFullName(string);

    // helper methods

    // combat roll, takes modifier and rolls against attr
    string combatRoll(int);

    // takes dmg, subtracts from the wound;
    int takeDamage(int);

};

#endif