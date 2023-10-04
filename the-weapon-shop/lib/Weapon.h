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

    static int GetWeaponPrice(WeaponType weaponType);
};

#endif
