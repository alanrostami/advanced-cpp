#pragma once

#include <iostream>
#include <vector>

#include "Character.h"
#include "Merchant.h"
#include "Weapon.h"
#include "CharaRace.h"
#include "CharaClass.h"
#include "WeaponType.h"

void StartNewGame()
{
    // Create the first character
    Character RalfTheElf("Ralf", "Elfon", "I drink therefore I am.",
                        200, 5, CharaRace::Elf, CharaClass::Archer);

    // Create the merchant
    Merchant Yaktod("Yaktod", "Yaktod and Associates Weapons",
                    "Welcome to the number one weapon market in the world.",
                    "That's number one!");

    // Create the weapaons
    Weapon firstWeapon("The Dawn", "The lightest and sharpest sword in the entire world.",
                       WeaponType::Sword, 2, 3, 190.0f, 0.9 );

    Weapon secondWeapon("Ultimate", "The bow whose arrows go farthest.",
                       WeaponType::Bow, 1, 2, 110.0f, 0.8 );

    Weapon thirdWeapon("Hidden Justice", "The bow whose arrows go farthest.",
                        WeaponType::Bow, 1, 2, 110.0f, 0.8 );

    // Add the weapons to merchant inventory
    Yaktod.SetInventory(firstWeapon);

    Yaktod.GetInventory();

    RalfTheElf.Introduce();

    RalfTheElf.BuyWeapon(Yaktod, firstWeapon);
}