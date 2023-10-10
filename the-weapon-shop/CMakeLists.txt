cmake_minimum_required(VERSION 3.26)
project(the_weapon_shop)

set(CMAKE_CXX_STANDARD 20)

add_executable(the_weapon_shop main.cpp
        src/Weapon.cpp
        src/Weapon.h
        src/WeaponType.h
        src/CharaRace.h
        src/Game.h
        src/CharaClass.h
        src/Character.cpp
        src/Merchant.cpp
)
