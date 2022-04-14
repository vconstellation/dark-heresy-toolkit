#include <string>
#include <vector>
#include <random>
#include "Weapon.h"


std::vector<Weapon> weapons;

void populateWeaponList()
{
    // bolt pistol
    std::string weaponName = "Bolt Pistol";
    std::list<std::string> qualities = {"Tearing"};
    std::vector<int> dmg = {10, 5};
    int ammo = 8;

    Weapon boltPistol = Weapon(weaponName, qualities, dmg, ammo);
    weapons.push_back(boltPistol);

    // Boltgun
    weaponName = "Boltgun";
    qualities = {"Tearing"};
    dmg = {10, 5};
    ammo = 24;

    Weapon boltgun = Weapon(weaponName, qualities, dmg, ammo);
    weapons.push_back(boltgun);

    // Lasgun
    weaponName = "Lasgun";
    qualities = {"Energy"};
    dmg = {10, 3};
    ammo = 60;

    Weapon lasgun = Weapon(weaponName, qualities, dmg, ammo);
    weapons.push_back(lasgun);

    // Plasma pistol
    weaponName = "Plasma Pistol";
    qualities = {"Energy"};
    dmg = {10, 7};
    ammo = 10;

    Weapon plasmaPistol = Weapon(weaponName, qualities, dmg, ammo);
    weapons.push_back(plasmaPistol);   
}

Weapon generateWeapon()
{
    populateWeaponList();

    srand(time(nullptr));
    int randomIdx = rand() % weapons.size();
    Weapon randomWeapon = weapons[randomIdx];

    return randomWeapon;
}