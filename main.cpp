#include <iostream>
#include <string>
#include "Npc.h"
#include "Generator.h"
#include "CharBinder.h"

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

        cin >> input;

        if (input == "1")
        {
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

            Npc npc = Npc(name, combatAttr, willpwr, wnds);
            Npc* val = &npc;

            charBinder->addNpc(npc);

            cout << "Created new NPC" << endl;
            string res = val->getFullName();
            string npcRes = val->getNpc();
            cout << res << endl;
            cout << npcRes << endl;
        }
        else if (input == "4")
        {
            charBinder->listAllNpcs();
        }
        else if (input == "5")
        {
            string searchVal;
            cout << "Please input the name You're searching for: " << endl;
            cin >> searchVal;
            charBinder->searchByName(searchVal);
        }
        else 
        {
            break;
        }
        
    }
    
}