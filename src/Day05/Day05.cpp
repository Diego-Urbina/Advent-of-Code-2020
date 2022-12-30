#include "Day05.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include "../utils/format.h"

using namespace std;

Day05::Day05(std::string execFolder) : mInputFile{execFolder + "/input/Day05.txt"}
{
    utils::format::print_title(5);
    ReadData();
}

int Day05::Puzzle1()
{
    int answer = *std::max_element(mSeats.begin(), mSeats.end());
    utils::format::print_answer(1, answer);
    return answer;
}

int Day05::Puzzle2()
{
    int answer = 0;
    std::sort(mSeats.begin(), mSeats.end());
    for (size_t i = 0; i < mSeats.size(); ++i) {
        if (mSeats[i] + 2 == mSeats[i + 1]) {
            answer = mSeats[i] + 1;

            break;
        }
    }
    utils::format::print_answer(1, answer);
    return answer;
}

void Day05::ReadData()
{
    std::ifstream ifs(mInputFile);
    if (ifs.fail()) {
        return;
    }

    string line;
    while (getline(ifs, line)) {
        string rowBin = line.substr(0, 7);
        std::replace(rowBin.begin(), rowBin.end(), 'F', '0');
        std::replace(rowBin.begin(), rowBin.end(), 'B', '1');

        string colBin = line.substr(7);
        std::replace(colBin.begin(), colBin.end(), 'L', '0');
        std::replace(colBin.begin(), colBin.end(), 'R', '1');

        int row = stoi(rowBin, 0, 2);
        int col = stoi(colBin, 0, 2);
        mSeats.push_back(row * 8 + col);
    }
}