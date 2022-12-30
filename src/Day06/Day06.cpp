#include "Day06.h"
#include <iostream>
#include <fstream>
#include "../utils/format.h"

using namespace std;

Day06::Day06(std::string execFolder) : mInputFile{execFolder + "/input/Day06.txt"}
{
    utils::format::print_title(6);
    ReadData();
}

int Day06::Puzzle1()
{
    long long yes = 0;
    for (const auto &g : mGroups) {
        yes += g->YesCount();
    }

    utils::format::print_answer(1, yes);
    return yes;
}

int Day06::Puzzle2()
{
    long long allYes = 0;
    for (const auto &g : mGroups) {
        allYes += g->AllYesCount();
    }

    utils::format::print_answer(1, allYes);
    return allYes;
}

void Day06::ReadData()
{
    std::ifstream ifs(mInputFile);
    if (ifs.fail()) {
        return;
    }

    mGroups.emplace_back(make_unique<Group>());
    string line;
    while (getline(ifs, line)) {
        if (line.empty()) {
            mGroups.emplace_back(make_unique<Group>());
        }
        else {
            mGroups.back()->mGroupSize++;
            for (const char &c : line) {
                mGroups.back()->mYesQuestions.insert(c);
                mGroups.back()->mTotalYesQuestions[c]++;
            }
        }
    }
}