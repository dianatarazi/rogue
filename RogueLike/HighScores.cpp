#include "Item.h"
#include "Game.h"
#include "Player.h"
#include "Enemy.h"
#include "Map.h"
#include "HighScores.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

HighScores::HighScores()
{
    fileName = "Highscores.txt";
    file.open(fileName, std::fstream::in | std::fstream::out | std::fstream::ate);
    if(!file.is_open() || !file.good()){
            file.open(fileName, std::fstream::out | std::fstream::trunc);
            file.close();
            file.open(fileName, std::fstream::in | std::fstream::out | std::fstream::ate);
    }
}

void HighScores::writeTheScore(std::string name, int score)
{
    file << name << " " << score << std::endl;
}

HighScores::~HighScores()
{
    file.close();
}



