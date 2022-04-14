#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <list>
#include <vector>

class Weapon
{
    std::string weaponName;

    std::list<std::string> specialQualities;

    // two-value list, one for hit dice, second for modifier
    std::vector<int> weaponDamage;

    int weaponAmmo;

    int maxWeaponAmmoCapacity;

public:
    Weapon();
    Weapon(std::string, std::list<std::string>, std::vector<int>, int);

    std::string getWeapon();

    void rollForDamage();

    void reloadWeapon();
};

#endif