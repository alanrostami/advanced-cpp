#include <iostream>
#include "Merchant.h"

Merchant::Merchant(string name, string shopName, string description, string catchPhrase, int money, int *inventory) {
    mName = std::move(name);
    mShopName = std::move(shopName);
    mDescription = std::move(description);
    mCatchPhrase = std::move(catchPhrase);
    mMoney = money;
    //mInventory = &inventory;
}

Merchant::~Merchant() = default;

void Merchant::BuyWeapon(int weapon, Character& customer, int weaponCost) {

}

void Merchant::SellWeapon(int weapon, Character& customer, int weaponCost) {

}




