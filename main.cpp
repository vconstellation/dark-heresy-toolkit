#include <iostream>
#include <string>
#include "Npc.h"
#include "Generator.h"

using namespace std;

int main() 
{
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

            Npc npc = Npc(combatAttr, willpwr, wnds);
            Npc* val = &npc;

            cout << "Created new NPC" << endl;
            string res = val->getFullName();
            string npcRes = val->getNpc();
            cout << res << endl;
            cout << npcRes << endl;
        }
        else 
        {
            break;
        }
        
    }
    
}