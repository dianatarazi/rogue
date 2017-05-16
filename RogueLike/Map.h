#pragma once

class Map
{
private:
    int map[][];
    int visibilityMap[][];
    int numOfEnemies;
    void generateEnemies();
    
public:
    Map(int width, int height);
    void generateNewMap();
    void openThePortal;
    ~Map();

};

