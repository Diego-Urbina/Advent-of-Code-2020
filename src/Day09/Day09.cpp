#include "Day09.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdexcept>
#include "../utils/format.h"

using namespace std;

Day09::Day09(std::string execFolder) : mInputFile{execFolder + "/input/Day09.txt"}
{
    utils::format::print_title(9);
    ReadData();
}

long long Day09::Puzzle1(bool test)
{
    auto result = FindInvalidNumber(test);
    utils::format::print_answer(1, result);
    return result;
}

long long Day09::Puzzle2(bool test)
{
    long long answer = 0;
    auto result = FindInvalidNumber(test);
    auto p = FindSubVector(result);
    auto q = std::minmax_element(mNumbers.begin() + p.first, mNumbers.begin() + p.second);

    answer = *q.first + *q.second;
    utils::format::print_answer(1, answer);
    return answer;
    ;
}

long long Day09::FindInvalidNumber(bool test)
{
    int PREAMBLE_SIZE = !test ? 25 : 5;

    mCurrentValues.clear();
    mCurrentSums.clear();

    for (size_t i = 0; i < mNumbers.size(); ++i) {
        auto n = mNumbers[i];
        if (i >= PREAMBLE_SIZE) {
            auto it = mCurrentSums.find(n);
            if (it == mCurrentSums.end()) {
                return n;
            }

            auto toRemove = mNumbers[i - PREAMBLE_SIZE];
            for (auto v : mCurrentValues[toRemove]) {
                auto it = mCurrentSums.find(v);
                if (it != mCurrentSums.end()) {
                    mCurrentSums.erase(it);
                }
            }
            mCurrentValues.erase(toRemove);
        }

        for (auto &v : mCurrentValues) {
            v.second.push_back(v.first + n);
            mCurrentSums.insert(v.first + n);
        }
        mCurrentValues.insert(make_pair(n, std::vector<long long>()));
    }
    throw std::runtime_error("Value not found");
}

std::pair<int, int> Day09::FindSubVector(const long long target)
{
    int v0 = 0, v1 = -1;
    long long acc = 0;
    while (acc != target) {
        if (acc < target) {
            acc += mNumbers[++v1];
        }
        else {
            acc -= mNumbers[v0++];
        }
    }
    return make_pair(v0, v1);
}

void Day09::ReadData()
{
    std::ifstream ifs(mInputFile);
    if (ifs.fail()) {
        return;
    }

    string line;
    while (getline(ifs, line)) {
        mNumbers.push_back(stoll(line));
    }
}