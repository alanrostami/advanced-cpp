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

int Weapon::GetWeaponPrice(string weaponName, WeaponType weaponType, int weight, int damage, int durability) {
// If weapon type = x check weight, damage, durability
// Check weight: Higher cost if light, lower cost if heavy
// Check damage: Higher cost for higher damage
    return 0;
}

//int Weapon::GetWeaponPrice(WeaponType wType) {
//    switch (wType)
//    {
//        case WeaponType::Bow:
//            return 50;
//        case WeaponType::Dagger:
//            return 70;
//        case WeaponType::Staff:
//            return 90;
//        case WeaponType::Sword:
//            return 140;
//    }
//}

Weapon::~Weapon() = default;