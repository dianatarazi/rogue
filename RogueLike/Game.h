#pragma once
#include "Map.h"
#include "Player.h"
#include "HighScores.h"
class Game
{

private:
        Map map;
        Player player;
        HighScores scores;
public:
    Game();
    ~Game();

};

