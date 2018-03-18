#include <iostream>
#include <cstdlib>
#include <string>
#include "player.hpp"
#include "final.hpp"

using namespace std;



double Player::randomInt (int min, int max)
{
    int range = max - min + 1;
    return rand()%range + min;
}