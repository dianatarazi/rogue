#pragma once

class Map
{
private:
    //data structure for the map
    //data structure for the visibility map
    int numOfEnemies;
    void generateEnemies();
    
public:
    Map();
    Map(int width, int height);
    void generateNewMap();
    void openThePortal();
    void getSafeLocation(int& posX, int& posY);
    ~Map();

};

