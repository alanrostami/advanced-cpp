#include <iostream>

using namespace std;

#include "Character.h"
#include "Weapon.h"

Character::Character(string firstName, string lastName, string catchPhrase, int money, int lifePoints)
{
    mFirstName = std::move(firstName);
    mLastName = std::move(lastName);
    mCatchPhrase = std::move(catchPhrase);
    mMoney = money;
    mLifePoints = lifePoints;
}

void Character::GetCharacterInfo() const
{
    cout << "Coins in your pocket: " << endl;
    cout << mMoney << endl;
}

int Character::BuyWeapon()
{
    cout << "Choose a weapon: " << endl;
    cout << "1. Bow" << endl;
    cout << "2. Dagger" << endl;
    cout << "3. Staff" << endl;
    cout << "4. Sword" << endl;
    
    int weaponInput;
    cin >> weaponInput;

    return weaponInput;
}

//Character::~Character() {}
