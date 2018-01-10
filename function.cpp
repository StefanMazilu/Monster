#include <string.h>
#include <iostream>

#include "function.h"

Monster::Monster()
{
    experience_ = 0;

    std::cout<<"Default constructor\n";
}

Monster::Monster(const Monster&)
{
    std::cout<<"Copy constructor\n";
}

Monster::Monster(char name[], int damage, int health)
{
    experience_ = 0;

    SetName(name);

    SetDamage(damage);

    SetHealth(health);
}

void Monster::SetName(char name[])
{
    strcpy(name_, name);
}

void Monster::SetDamage(int damage)
{
    damage_ = damage;
}

void Monster::SetHealth(int health)
{
    health_ = health;
}

void Monster::Attack(Monster* monster)
{
    monster->Defend(damage_);

    if(monster->IsDead())
    {
        experience_ += 3;
    }

    std::cout<<name_<<" attacked for "<<damage_<<" damage!\n";
}

void Monster::Defend(int damage)
{
    health_ -= damage;
}

bool Monster::IsDead()
{
    return health_ <= 0;
}

Monster::operator int()
{
    return damage_;
}

Monster& Monster::operator =(const Monster&)
{
    std::cout<<"Assignment operator\n";
}