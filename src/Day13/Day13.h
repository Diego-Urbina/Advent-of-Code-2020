#pragma once
#include <string>
#include <vector>

class Day13
{
public:
    Day13(std::string execFolder);
    int Puzzle1();
    long long Puzzle2();

private:
    void ReadData();

    std::string mInputFile;
    int mFrom;
    std::vector<int> mBuses;
    int mBestBus;
    int mBestDepartureTime;
};