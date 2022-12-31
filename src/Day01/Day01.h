#pragma once
#include <string>
#include <vector>

class Day01
{
public:
    Day01(std::string inputFile);
    int Puzzle1();
    int Puzzle2();

private:
    void ReadData();

    std::string mInputFile;
    std::vector<int> mData;
    const int mTarget = 2020;
};
