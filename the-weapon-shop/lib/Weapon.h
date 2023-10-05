#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include "WeaponType.h"

using namespace std;

class Weapon
{
private:
    string mWeaponName;
    string mDescription;

    WeaponType mWeaponType;

    int mWeight;
    int mDamage;
    int mCost;
    float mDurability;

public:
    Weapon(string weaponName, string description, int weight, int damage, int cost, float durability, WeaponType weaponType);
    ~Weapon();

    // void ShowOneWeapon(string weaponName, WeaponType weaponType);

    static int GetWeaponPrice(string weaponName, WeaponType weaponType, int weight, int damage, int durability);
};

#endif
