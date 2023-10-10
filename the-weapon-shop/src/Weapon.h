#pragma once

#include <iostream>

#include "WeaponType.h"

class Weapon
{
private:
    std::string m_description;
    WeaponType m_type;
    int m_weight;
    int m_damge;
    float m_cost;
    float m_durability;

public:
    Weapon() = default;
    Weapon(std::string name, std::string description,
           WeaponType type, int weight, int damage, float cost, float durability);
    ~Weapon();

    std::string m_name;
};
