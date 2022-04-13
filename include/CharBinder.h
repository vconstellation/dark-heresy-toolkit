#ifndef CHARBINDER_H
#define CHARBINDER_H

#include <list>
#include "Npc.h"

using namespace std;

class CharBinder
{
    list<Npc> npcs;
public:
    CharBinder();

    void addNpc(Npc&);

    void searchByName(string);
    
    void listAllNpcs();
};

#endif