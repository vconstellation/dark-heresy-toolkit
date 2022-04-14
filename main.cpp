#include <iostream>
#include <string>
#include "Npc.h"
#include "Generator.h"
#include "CharBinder.h"
#include "Weapon.h"
#include "WeaponGenerator.h"

using namespace std;

CharBinder *charBinder;

int main() 
{
    // init charbinder
    charBinder = new CharBinder();

    string input;

    cout << "Welcome to C++ Dark Heresy 2 Toolkit";

    while (true)
    {
        cout << "Input value: " << endl;

        cout << "1 - Roll 1d100 with modifier." << endl;
        cout << "2 - Do something else" << endl;
        cout << "3 - Generate random npc" << endl;
        cout << "4 - List all NPCs" << endl;
        cout << "5 - Search for NPC by name" << endl;
        cout << "6 - Fire weapon" << endl;
        cout << "7 - Make an attack check" << endl;

        cin >> input;

        if (input == "1")
        {
            // here should be functionality responsible for making test;
            cout << "Rolling 1d100..." << endl;
        }
        else if (input == "2")
        {
            cout << "Selected 2 - doing something else..." << endl;
            Npc npc;
            Npc* val = &npc;
            cout << "Created new NPC" << endl;
            string res = val->getFullName();
            string npcRes = val->getNpc();
            cout << res << endl;
            cout << npcRes << endl;
        }
        else if (input == "3")
        {
            cout << "Generating NPC with random attrs" << endl;

            // generate attrs
            int combatAttr = generator(1);
            int willpwr = generator(2);
            int wnds = generator(3);

            // generate name
            string name = generateName();

            // generate weapon
            Weapon wpn = generateWeapon();

            Npc npc = Npc(name, combatAttr, willpwr, wnds, wpn);
            Npc* val = &npc;

            charBinder->addNpc(npc);

            cout << "Created new NPC" << endl;
            string res = val->getFullName();
            string npcRes = val->getNpc();
            cout << res << endl;
            cout << npcRes << endl;
        }
        // list all npcs
        else if (input == "4")
        {
            charBinder->listAllNpcs();
        }
        // search for npc by name
        else if (input == "5")
        {
            string searchVal;
            cout << "Please input the name You're searching for: " << endl;
            cin >> searchVal;
            charBinder->searchByName(searchVal);
        }
        // firing weapon
        else if (input == "6")
        {
            string searchVal;
            cout << "Please input the name of NPC: " << endl;
            cin >> searchVal;
            cout << "Firing weapon..." << endl;
            
            Npc foundNpc = charBinder->searchByName(searchVal);

            cout << "Found NPC - " << foundNpc.getFullName() << endl;

            foundNpc.weapon.rollForDamage();
        }
        else if (input == "7")
        {
            string searchVal;
            int modifier;
            cout << "Please input the name of NPC: " << endl;
            cin >> searchVal;
            cout << "Input modifier: " << endl;
            cin >> modifier;
            cout << "Making attack roll..." << endl;

            Npc foundNpc = charBinder->searchByName(searchVal);

            cout << foundNpc.combatRoll(modifier) << endl;
        }
        else 
        {
            return 0;
        }
        
    }
    
}