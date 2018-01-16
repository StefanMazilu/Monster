#include <string.h>
#include <iostream>

#include "function.h"
using namespace std;

Monster::Monster()
{
}

Monster::Monster(char name[], bool armPen, int armour, int damage, bool doubleHit, int exp, int health)
{
    SetName(name);
    SetArmPen(armPen);
    SetArmour(armour);
    SetDamage(damage);
    SetDoubleHit(doubleHit);
    SetExp(exp);
    SetHealth(health);
}

void Monster::SetName(char name[])
{
    strcpy(_name, name);
}

void Monster::SetArmPen(int armPen)
{
    _armPen = armPen;
}

void Monster::SetArmour(int armour)
{
    _armour = armour;
}

void Monster::SetDamage(int damage)
{
    _damage = damage;
}

void Monster::SetDoubleHit(bool doubleHit)
{
    _doubleHit = doubleHit;
}

void Monster::SetExp(int exp)
{
    _exp = exp;
}

void Monster::SetHealth(int health)
{
    _health = health;
}

void Monster::Attack(Monster* monster)
{
    int damageDealt = monster->Defend(_damage);

    if(monster->IsDead())
    {
        LevelUp();
    }

    cout<<_name<<" attacked for "<< damageDealt <<" damage!\n";
}

int Monster::Defend(int damage)
{
    int effectiveDamage = damage - _armour;
    _health -= effectiveDamage;
    return effectiveDamage;
}

bool Monster::IsDead()
{
    return _health <= 0;
}

void Monster::LevelUp()
{
    _exp += 4;
    _armour += _exp;
    _damage +=  (_exp * 2);
    _health +=  (_exp * 10);
    if(_armPen > 0)
    {
        _armPen += 2;
    }
}
