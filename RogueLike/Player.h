#pragma once

class Player
{
private:
    string name;
    int health;
    int physicalDmg;
    int magicalDmg;
    int physicalArmor;
    int magicalArmor;
    int posX, posY;
    int score;
    Item items[];
public:
    Player();
    ~Player();

};

