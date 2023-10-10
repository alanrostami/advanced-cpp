#include <iostream>
#include <vector>

#include "Character.h"

Character::Character(const std::string& first_name,
                     const std::string& last_name,
                     const std::string& catch_phrase,
                     int money, int life_points, /*std::vector<Weapon> weapon,*/
                     CharaRace ch_race, CharaClass ch_class)
{
    m_first_name = first_name;
    m_last_name = last_name;
    m_catch_phrase = catch_phrase;
    m_money = money;
    m_life_points = life_points;
    //m_weapon = weapon;
    m_race = ch_race;
    m_class = ch_class;
}

//Character::~Character() = default;

std::string Character::GetName()
{
    return m_first_name + " " + m_last_name;
}

std::string Character::GetPhrase()
{
    return m_catch_phrase;
}

int Character::GetMoney()
{
    return m_money;
}

int Character::GetLifePoints()
{
    return m_life_points;
}

std::string Character::GetWeapon()
{
    return m_weapon[0].m_name;
}

std::string Character::GetRace()
{
    std::string chara_race;
    switch (m_race) {
        case CharaRace::Elf:
            return "Elf";
        case CharaRace::Orc:
            return "Orc";
        case CharaRace::Gobelin:
            return "Gobelin";
        case CharaRace::Human:
            return "Human";
        default:
            break;
    }

}

std::string Character::GetCharaClass()
{
    std::string chara_class;
    switch (m_class) {
        case CharaClass::Archer:
            return "Archer";
        case CharaClass::Warrior:
            return "Warrior";
        case CharaClass::Priest:
            return "Priest";
        case CharaClass::Paladin:
            return "Paladin";
        default:
            break;
    }
}

void Character::Introduce()
{
    std::cout << "Hello! My name is " << Character::GetName()
              << " and I am an " << Character::GetRace() << " " << Character::GetCharaClass() << "." << std::endl;
    std::cout << "My catch phrase is " << Character::GetPhrase() << std::endl;
}

void Character::BuyWeapon(Merchant& merch_shop, Weapon& merch_weapon)
{
    merch_shop.GetInventory();

    int weapon_choice;

    std::cout << "Choose a weapon:" << std::endl;
    std::cout << "1. Bow" << std::endl;
    std::cout << "2. Dagger" << std::endl;
    std::cout << "3. Staff" << std::endl;
    std::cout << "4. Sword" << std::endl;
    std::cin >> weapon_choice;

    //merch_shop.SellWeapon(character, merch_weapon);
    m_weapon.push_back(merch_weapon);

    std::string chara_weapon = Character::GetWeapon();

    std::cout << chara_weapon << std::endl;
}

void Character::SellWeapon(Merchant& merch_shop, Weapon& merch_weapon)
{

}

void Character::UseWeapon(Character& enemy)
{

}

void Character::Loot(Character& defeated)
{

}
