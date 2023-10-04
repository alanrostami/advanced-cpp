#include "Weapon.h"

Weapon::Weapon(string weaponName, string description, int weight, int damage, int cost, int durability, WeaponType weaponType)
{
    mWeaponName = weaponName;
    mDescription = description;
    mWeight = weight;
    mDamage = damage;
    mCost = cost;
    mDurability = durability;
    mWeaponType = weaponType;
}

void Weapon::GetWeapon() {

}

Weapon::~Weapon() = default;