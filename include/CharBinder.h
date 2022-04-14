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

    // i would like to return npc object here
    // but not sure how to return it if it's null;
    Npc searchByName(string);
    
    void listAllNpcs();
};

#endif