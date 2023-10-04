#include <iostream>
#include "Weapon.h"

Weapon::Weapon(string weaponName, string description, int weight, int damage, int cost, float durability, WeaponType weaponType)
{
    mWeaponName = std::move(weaponName);
    mDescription = std::move(description);
    mWeaponType = weaponType;
    mWeight = weight;
    mDamage = damage;
    mCost = cost;
    mDurability = durability;
}

int Weapon::GetWeaponPrice(WeaponType wType) {
    switch (wType)
    {
        case WeaponType::Bow:
            return 50;
        case WeaponType::Dagger:
            return 70;
        case WeaponType::Staff:
            return 90;
        case WeaponType::Sword:
            return 140;
    }
}

Weapon::~Weapon() = default;