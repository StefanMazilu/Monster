#include <iostream>

#include "function.h"

int main()
{
    Monster white("Costel", 10, 60);

    Monster black("Dorel", 15, 40);

    white.Attack(&black);

    Monster red = black;

    int damage = red;

    std::cout<<damage<<"\n";

    return 0;
}