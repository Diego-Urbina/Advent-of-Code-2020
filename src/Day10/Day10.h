#pragma once
#include <string>
#include <vector>

class Day10
{
public:
    Day10(std::string inputFile);
    int Puzzle1();
    long long Puzzle2();

private:
    void ReadData();

    std::string mInputFile;
    std::vector<int> mJoltages;
};