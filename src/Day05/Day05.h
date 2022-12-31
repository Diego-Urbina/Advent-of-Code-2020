#pragma once
#include <string>
#include <vector>

class Day05
{
public:
    Day05(std::string inputFile);

    int Puzzle1();
    int Puzzle2();

private:
    void ReadData();

    std::string mInputFile;
    std::vector<int> mSeats;
};
