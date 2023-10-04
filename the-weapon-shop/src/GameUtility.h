#pragma once
#include <iostream>
#include "../lib/Character.h"
#include "../lib/Weapon.h"
#include "../lib/WeaponType.h"

static void Start()
{
    string inpName;
    cout << "What is your name?" << endl;
    cin >> inpName;

    string inpLastName;
    cout << "What is your last name?" << endl;
    cin >> inpLastName;

    string cPhrase;
    cout << "What is your catch phrase?" << endl;
    cin >> cPhrase;

    Character firstChar = Character(inpName, inpLastName, cPhrase, 200, 5);

    cout << "Hello " + inpName + " " + inpLastName << endl;
    cout << "All is set! Now, go buy a weapon from the merchant." << endl;

    firstChar.GetCharacterInfo();
    int playerChoice = firstChar.BuyWeapon();

    WeaponType weapon;

    switch (playerChoice) {
        case 1:
            weapon = WeaponType::Bow;
            break;
        case 2:
            weapon = WeaponType::Dagger;
            break;
        case 3:
            weapon = WeaponType::Staff;
        case 4:
            weapon = WeaponType::Sword;
    }

    int price = Weapon::GetWeaponPrice(weapon);

    cout << price;
}
