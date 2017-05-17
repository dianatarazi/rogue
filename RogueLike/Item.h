#pragma once
#include <string>

class Item
{
private:
    std::string name;
    char looks;
    int physicalDmgBuff;
    int magicalDmgBuff;
    int physicalArmorBuff;
    int magicalArmorBuff;
    int duration;
    
public:
    Item();
    void display();
    ~Item();

};

