#pragma once
#include <string>

class Day02
{
public:
    Day02(std::string execFolder);
    int Puzzle1();
    int Puzzle2();

private:
    std::string mInputFile;
};
