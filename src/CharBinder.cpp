#include "CharBinder.h"
#include "Npc.h"
#include <iostream>

using namespace std;

CharBinder::CharBinder()
{

}

void CharBinder::addNpc(Npc& npc)
{
    npcs.push_back(npc);
}

void CharBinder::searchByName(string searchValue)
{
    list<Npc> l;

    // this should be refactored
    // since it's repeating;
    bool isListEmpty = npcs.empty();

    if (isListEmpty)
    {
        cout << "List appears to be empty";
    }

    list<Npc>::iterator it = this->npcs.begin();
    if (isListEmpty)
    {
        cout << "List is empty :(";
    }
    else 
    {
        for (it; it != npcs.end(); it++)
        {
            if (((Npc) (*it)).getFullName() == searchValue)
            {
                cout << (*it).getNpc();
            }
        }
    }   
}


void CharBinder::listAllNpcs()
{
    // this should be refactored
    // since it's repeating;
    bool isListEmpty = npcs.empty();

    if (isListEmpty)
    {
        cout << "List appears to be empty";
    }

    list<Npc>::iterator it;
    for (it = npcs.begin(); it != npcs.end(); it++)
    {
        cout << ((Npc) (*it)).getNpc() << endl;
    }


}