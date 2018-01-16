#pragma once

class Monster
{
    char _name[10];
    int _armPen;
    int _armour;
    int _damage;
    bool _doubleHit;
    int _exp;
    int _health;

public:
    Monster();                                                              // Constructor
    Monster(char [], bool, int, int, bool, int, int);   // Constructor cu parametrii

    void SetName(char []);
    void SetArmPen(int);
    void SetArmour(int);
    void SetDamage(int);
    void SetDoubleHit(bool);
    void SetExp(int);
    void SetHealth(int);

    void Attack(Monster*);
    int Defend(int);
    bool IsDead();
    void LevelUp();
};
