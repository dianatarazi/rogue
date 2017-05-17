#include "Item.h"
#include "Game.h"
#include "Player.h"
#include "Enemy.h"
#include "Map.h"
#include "HighScores.h"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    //test for HighScores class
    HighScores scores; // creates an object and tries to open a file
    scores.writeTheScore("Tim", 40);
    scores.writeTheScore("Diana", 100);
    scores.writeTheScore("Joe", 59);
    
    
    return 0;
}
