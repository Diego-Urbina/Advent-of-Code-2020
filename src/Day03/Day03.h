#pragma once
#include <string>
#include <vector>

class Day03
{
public:
    Day03(std::string inputFile);
    int Puzzle1();
    long long Puzzle2();

private:
    void ReadData();

    std::string mInputFile;
    std::vector<std::string> mData;
};
