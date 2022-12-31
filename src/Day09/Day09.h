#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <utility>

class Day09
{
public:
    Day09(std::string inputFile);

    long long Puzzle1(bool test = false);
    long long Puzzle2(bool test = false);

private:
    void ReadData();

    long long FindInvalidNumber(bool test);

    std::pair<int, int> FindSubVector(const long long target);

    std::string mInputFile;

    // Contains all the numbers
    std::vector<long long> mNumbers;

    // Contains the sums of all 25 last numbers, indexing by the first operand
    std::unordered_map<long long, std::vector<long long>> mCurrentValues;

    // Contains the sums of all 25 last numbers
    std::unordered_multiset<long long> mCurrentSums;
};
