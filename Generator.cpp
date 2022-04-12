#include <random>
#include "Generator.h"
#include <iostream>

using namespace std;

// helper method for the generator
int generateAttr(int max, int min)
{
    srand(time(nullptr));

    int attr = rand() % min + max;

    return attr;
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
    }

    return res;
}
