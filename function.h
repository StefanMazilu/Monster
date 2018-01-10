#pragma once

class Monster
{
    char name_[16];

    int damage_;

    int health_;

    int experience_;

public:
    Monster();

    Monster(char [], int, int);

    Monster(const Monster&);

    void SetName(char []);

    void SetDamage(int);

    void SetHealth(int);

    void Attack(Monster*);

    void Defend(int);

    bool IsDead();

    operator int();

    Monster& operator =(const Monster&);
};
