#pragma once
#include "Item.h"
#include <string>

class Player
{
private:
    std::string name;
    int health;
    int physicalDmg;
    int magicalDmg;
    int physicalArmor;
    int magicalArmor;
    int posX, posY;
    int score;
    //data structure for array of Items
public:
    Player();
    ~Player();
    
    void setPlayerName(std::string n);
    
    void changeHealth(int change);
    void changePosition(int xChange, int yChange);
    void changePhysicalDmg(int change);
    void changeMagicalDmg(int change);
    void changePhysicalArmor(int change);
    void changeMagicalArmor(int change);
    void changeScore(int change);
    
    string getName();
    void getPosition(int& x, int& y);
    int getHealth();
    int getPhysicalDmg();
    int getMagicalDmg();
    int getPhysicalArmor();
    int getMagicalArmor();
    int getScore();
    
    void display(); // to do
};

