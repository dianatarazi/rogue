#pragma once
#include <string>
#include <fstream>

class HighScores
{
private:
    std::string fileName;
    std::fstream file;
public:
    HighScores(); // opens the certain document, or creates it if not exists
    void writeTheScore(std::string name, int score); //
    ~HighScores();

};

