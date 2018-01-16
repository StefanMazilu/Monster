#include <iostream>

#include "function.h"
using namespace std;

int main()
{
    //Monsters stats are : Name, aoe, armour, damage, doubleHit, exp and health
    Monster m_adc("Vayne", 0, 5, 20, 0, 0, Health(100));                     //
    Monster m_tank("Malphite", 0, 15, 7, 0, 0, 150);              //  - Player
    Monster m_doubleHit("MasterYi", 0, 5, 15, 1, 0, 100);    //

    Monster mPC_adc("Stefan", 0, 5, 20, 0, 0, 100);            //
    Monster mPC_tank("Rammus", 0, 15, 7, 0, 0, 150);     //   - PC
    Monster mPC_armpen("Darius", 1, 5, 16, 0, 0, 90);    //

    m_adc.Attack(&mPC_adc);
    m_adc.Attack(&mPC_adc);
    m_adc.Attack(&mPC_adc);
    m_adc.Attack(&mPC_adc);
    m_adc.Attack(&mPC_adc);
    m_adc.Attack(&mPC_adc);

    return 0;
}
