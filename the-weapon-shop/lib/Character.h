#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

//#include "Weapon.h"
#include "WeaponType.h"
//#include "Race.h"
//#include "CharacterClass.h"

using namespace std;

class Character
{
private:
    string mFirstName;
    string mLastName;
    string mCatchPhrase;
    int mMoney;
    int mLifePoints;

    //Weapon mWeapon;
    //WeaponType mWeaponType;
    //Race mRace;
    //CharacterClass mCharacterClass;

public:
    Character(string firstName, string lastName, string catchPhrase, int money, int lifePoints);
    ~Character() = default;

    void GetCharacterInfo() const;

    static int BuyWeapon();

    //void SetCharacterWeapon(Weapon weapon);
    //void SetCharacterRace(CharacterRace race);

    //void Introduction();
    //void BuyWeapon(Weapon weapon, Merchant merchant);
    //void SellWeapon(Weapon weapon, Merchant merchant);
    //void UseWeapon(Weapon weapon, Character rivalCharacter, int damage);
    //void Loot(Character defeatedCharacter, int money, Weapon weapon);
};

#endif
