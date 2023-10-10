#include <iostream>
#include <vector>

#include "Merchant.h"

Merchant::Merchant(std::string name, std::string shop_name,
                   std::string description, std::string catch_phrase)
{
    m_name = name;
    m_shop_name = shop_name;
    m_description = description;
    m_catch_phrase = catch_phrase;
}

Merchant::~Merchant() = default;

std::string Merchant::GetName()
{
    return m_name;
}

std::string Merchant::GetShopName()
{
    return m_shop_name;
}

std::string Merchant::GetDescription()
{
    return m_description;
}

std::string Merchant::GetPhrase()
{
    return m_catch_phrase;
}

int Merchant::GetMoney()
{
    return m_money;
}

void Merchant::SetInventory(Weapon weapon)
{
    m_inventory.push_back(weapon);
}

std::vector<Weapon> Merchant::GetInventory()
{
    return m_inventory;
}

void Merchant::BuyWeapon(Character& character, Weapon& chara_weapon)
{
    int weapon_choice;
    std::cout << "Choose a weapon:" << std::endl;
    std::cout << "Choose a weapon:" << std::endl;
    std::cin >> weapon_choice;
}

//void Merchant::SellWeapon(Character& character, Weapon& chara_weapon)
//{

//}