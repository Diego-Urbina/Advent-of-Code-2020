#include "Day01.h"
#include <iostream>
#include <fstream>
#include <unordered_set>
#include "../utils/format.h"

using namespace std;

Day01::Day01(std::string inputFile) : mInputFile{inputFile}
{
    utils::format::print_title(1);
    ReadData();
}

int Day01::Puzzle1()
{
    int answer = 0;

    unordered_set<int> numbers;
    for (auto d : mData) {
        if (numbers.find(mTarget - d) != numbers.end()) {
            answer = (mTarget - d) * d;
        }
        else {
            numbers.insert(d);
        }
    }

    utils::format::print_answer(1, answer);
    return answer;
}

int Day01::Puzzle2()
{
    int answer = 0;

    for (size_t i = 0; i < mData.size(); ++i) {
        auto d1 = mData[i];
        unordered_set<int> numbers;
        int localTarget = mTarget - d1;
        for (size_t j = i + 1; j < mData.size(); ++j) {
            auto d2 = mData[j];
            if (numbers.find(localTarget - d2) != numbers.end()) {
                answer = d1 * d2 * (localTarget - d2);
            }
            else {
                numbers.insert(d2);
            }
        }
    }

    utils::format::print_answer(2, answer);
    return answer;
}

void Day01::ReadData()
{
    ifstream ifs(mInputFile, ios::binary);
    while (!ifs.eof()) {
        int d;
        ifs >> d;
        mData.push_back(d);
    }
}
