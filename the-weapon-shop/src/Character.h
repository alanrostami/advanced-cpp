#pragma once

#include <iostream>
#include <vector>

#include "Weapon.h"
#include "CharaRace.h"
#include "CharaClass.h"
#include "Merchant.h"

class Character
{
private:
    std::string m_first_name;
    std::string m_last_name;
    std::string m_catch_phrase;
    int m_money = 200;
    int m_life_points = 5;
    std::vector<Weapon> m_weapon;
    CharaRace m_race;
    CharaClass m_class;

public:
    Character() = default;
    Character(const std::string& first_name,
              const std::string& last_name,
              const std::string& catch_phrase,
              int money, int life_points, /* std::vector<Weapon> weapon, */
              CharaRace ch_race, CharaClass ch_class);

    //~Character() = default;

    std::string GetName();
    std::string GetPhrase();
    int GetMoney();
    int GetLifePoints();
    std::vector<Weapon> GetWeapon();
    std::string GetRace();
    std::string GetCharaClass();

    void Introduce();

    void BuyWeapon(Merchant& merch_shop, Weapon& merch_weapon); // from Merchant
    void SellWeapon(Merchant& merch_shop, Weapon& merch_weapon); // to Merchant
    void UseWeapon(Character& enemy); // to deal damage to another character
    void Loot(Character& defeated); // money and weapon of a defeated Character
};