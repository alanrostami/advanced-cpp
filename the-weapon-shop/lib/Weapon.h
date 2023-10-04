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
    int mWeight;
    int mDamage;
    int mCost;
    float mDurability;
    WeaponType mWeaponType;

public:
    Weapon(string weaponName, string description, int weight, int damage, int cost, int durability, WeaponType weaponType);
    ~Weapon();

    void GetWeapon();
};


#endif
