#ifndef MERCHANT_H
#define MERCHANT_H

#include <iostream>

#include "Character.h"

using namespace std;

class Merchant
{
private:
    string name;
    string shopName;
    string description;
    string catchPhrase;
    int money;

    int inventory[0];

public:
    void BuyWeapon(int weapon, Character customer, int weaponCost);
    void SellWeapon(int weapon, Character customer, int weaponCost);
};



#endif
