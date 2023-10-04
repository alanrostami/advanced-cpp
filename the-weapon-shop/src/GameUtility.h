#pragma once
#include <iostream>
#include "../lib/Character.h"

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

    Character newChar = Character(inpName, inpLastName, cPhrase, 200, 5);

    cout << "Hello " + inpName + " " + inpLastName << endl;
    cout << "All is set! Now, go buy a weapon from the merchant." << endl;

    newChar.GetCharacterInfo();
    int weaponBought = newChar.BuyWeapon();

    cout << weaponBought;
}
