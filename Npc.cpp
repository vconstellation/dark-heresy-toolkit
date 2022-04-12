#include <string>
#include "Npc.h"

using namespace std;



Npc::Npc() 
{
    fullName = "(generate_name_here)";

    combatAttribute = 30;
    willpower = 30;
    wounds = 10;
}

Npc::Npc(int attr, int theWillpower, int theWounds)
{
    fullName = "(generate_name_here)";

    combatAttribute = attr;
    willpower = theWillpower;
    wounds = theWounds;
}

string Npc::getNpc()
{
    return "Name: " + fullName + "\n Attribute: " + to_string(combatAttribute) + "\n Willpower: " + to_string(willpower) + "\n Wounds: " + to_string(wounds);
}

string Npc::getFullName()
{
    return fullName;
}

string Npc::combatRoll(int modifier)
{
    // call upon generator here?

    return "Hit successfull: " + to_string(40 - modifier);
}

int Npc::takeDamage(int dmg)
{
    this->wounds = wounds - dmg;

    return wounds;
}
