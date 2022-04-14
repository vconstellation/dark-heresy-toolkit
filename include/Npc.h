#ifndef NPC_H
#define NPC_H

#include <string>
#include "Weapon.h"

class Npc
{
    std::string fullName;
    
    // this fills the role for the Melee / Ranged combat;
    int combatAttribute;

    int willpower;

    Weapon weapon;

    // 7 - 10 + 1d5 
    int wounds;
public:
    Npc();
    Npc(std::string, int, int, int, Weapon);

    // setters and getters
    std::string getNpc();
    std::string getFullName();
    std::string getWounds();

    bool setFullName(std::string);

    // helper methods

    // combat roll, takes modifier and rolls against attr
    std::string combatRoll(int);

    // takes dmg, subtracts from the wound;
    int takeDamage(int);

};

#endif