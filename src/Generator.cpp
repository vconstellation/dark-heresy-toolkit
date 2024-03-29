#include <random>
#include "Generator.h"
#include <iostream>
#include <string>

using namespace std;

// helper method for the int generator
int generateAttr(int val1, int val2)
{
    srand(time(nullptr));

    int attr = rand() % val2 + val1;

    return attr;
}

// helper method for the name generator
string generateName()
{
    string names[] = {"Yasuo", "Yuumi", "Ahri", "Volibear", "Kha'Zix", "Yone", "Brand", "Soraka"};   

    srand(time(nullptr));
    string randomName = names[rand() % 8];

    return randomName;
}

// main function
int generator(int switchVal)
{    
    int res;

    switch (switchVal)
    {
        // case 1 - generate combatAttr
        case 1:
            res = generateAttr(30, 20);
            cout << to_string(res);
            break;

        // case 2 - generate willpower
        case 2:
            res = generateAttr(20, 20);
            cout << to_string(res);
            break;

        // case 3 - generate wounds
        case 3:
            res = generateAttr(8, 7);
            cout << to_string(res);
            break;

        // case 4 - default 1d100 roll
        case 4:
            res = generateAttr(1, 100);
            cout << to_string(res);
            break;
    }

    return res;
}
