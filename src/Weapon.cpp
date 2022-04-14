#include <list>
#include <iostream>
#include "Weapon.h"
#include "Generator.h"


using namespace std;

Weapon::Weapon()
{

}

Weapon::Weapon(string wpnName, list<string> spcQualities, vector<int> wpnDamage, int ammo)
{
    weaponName = wpnName;
    weaponDamage = wpnDamage;
    specialQualities = spcQualities;
    weaponAmmo = ammo;

    maxWeaponAmmoCapacity = ammo;
}

string Weapon::getWeapon()
{
    string weapon = weaponName + "\n";

    int i = 0;

    for (i; i < weaponDamage.size(); i++)
    {
        weapon.append(to_string(weaponDamage[i]));
    }

    return weaponName;
}

void Weapon::rollForDamage()
{

    if (weaponAmmo > 0)
    {
        weaponAmmo -= 1;

        int dmg;

        dmg = generateAttr(1, 10);

        dmg += weaponDamage[1];

        cout << "Dealt " << to_string(dmg) << " damage." << endl; 
    }
    else 
    {
        cout << "Out of ammo" << endl;
    }
}

void Weapon::reloadWeapon()
{
    cout << "Reloading weapon..." << endl;

    weaponAmmo = maxWeaponAmmoCapacity;

    cout << "Reloaded" << endl;
}