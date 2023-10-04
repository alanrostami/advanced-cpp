#ifndef MERCHANT_H
#define MERCHANT_H

#include <iostream>

#include "Character.h"

using namespace std;

class Merchant
{
private:
    string mName;
    string mShopName;
    string mDescription;
    string mCatchPhrase;
    int mMoney{};

    int mInventory[0];

public:
    Merchant(string name, string shopName, string description, string catchPhrase, int money, int *inventory);
    ~Merchant();

    void BuyWeapon(int weapon, Character& customer, int weaponCost);
    void SellWeapon(int weapon, Character& customer, int weaponCost);
};

#endif
