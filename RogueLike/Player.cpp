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

Player::Player()
{
    //default stats for the hero
    health = 5;
    physicalDmg = 2;
    magicalDmg = 0;
    physicalArmor = 1;
    magicalArmor = 0;
    score = 0;
    Map::getSafeLocation(posX, posY);
}

Player::~Player()
{
}

void Player::setPlayerName(std::string n)
{
    name = n;
}
void Player::changeHealth(int change)
{
    health += change;
}

void Player::changePosition(int xChange, int yChange)
{
    posX += xChange;
    posY += yChange;
}
void Player::changePhysicalDmg(int change)
{
    physicalDmg += change;
}
void Player::changeMagicalDmg(int change)
{
    magicalDmg += change;
}

void Player::changePhysicalArmor(int change)
{
    physicalArmor += change;
}
void Player::changeMagicalArmor(int change)
{
    magicalArmor += change; 
}
void changeScore(int change)
{
    score += change;
}
void Player::getName()
{
    return name;
}
void Player::getPosition(int& x, int& y)
{
    x = posX;
    y = posY;
}

int Player::getHealth()
{
    return health;
}
int Player::getPhysicalDmg()
{
    return physicalDmg;
}

int Player::getMagicalDmg()
{
    return magicalDmg;
}
    
int Player::getPhysicalArmor()
{
    return physicalArmor;
}

int Player::getMagicalArmor()
{
    return magicalArmor;
}

int Player::getScore()
{
    return score;
}

void Player::display()
{
    
}



