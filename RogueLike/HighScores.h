#pragma once

class HighScores
{
private:
    string fileName;
    
public:
    HighScores(string name); // opens the certain document, or creates it if not exists
    writeTheScore(string name, int score); //
    ~HighScores();

};

