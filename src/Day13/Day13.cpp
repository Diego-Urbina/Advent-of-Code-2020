#include "Day13.h"
#include <iostream>
#include <fstream>
#include <regex>
#include <limits>
#include <cmath>
#include "../utils/format.h"

using namespace std;

Day13::Day13(std::string execFolder) : mInputFile{execFolder + "/input/Day13.txt"}
{
    utils::format::print_title(13);
    ReadData();
}

int Day13::Puzzle1()
{
    int mBestBus{0};
    int mBestDepartureTime{std::numeric_limits<int>::max()};

    for (int i = 0; i < mBuses.size(); ++i) {
        int bus = mBuses[i];
        int nextDeparture = bus * std::ceil(mFrom / (double)bus);

        if (nextDeparture < mBestDepartureTime) {
            mBestDepartureTime = nextDeparture;
            mBestBus = bus;
        }
    }

    int answer = (mBestDepartureTime - mFrom) * mBestBus;
    utils::format::print_answer(1, answer);
    return answer;
}

// Read about Chinese Remainder Theorem for a general solution
long long Day13::Puzzle2()
{
    /*
    I have to find number t like
    (t +  0)	% 41	= 0
    (t + 35)	% 37	= 0
    (t + 41)	% 971	= 0
    (t + 58)	% 17	= 0
    (t + 59)	% 13	= 0
    (t + 64)	% 23	= 0
    (t + 70)	% 29	= 0
    (t + 72)	% 487	= 0
    (t + 91)	% 19	= 0

    That is the same as this:
    t			% 41	= 0
    (t - 6)		% 37	= 0
    t			% 971	= 0
    t			% 17	= 0
    (t + 18)	% 13	= 0
    t			% 23	= 0
    t			% 29	= 0
    (t + 31)	% 487	= 0
    (t + 50)	% 19	= 0

    Because all numbers are primes, t is multiple of 41 * 971 * 17 * 23 * 29 = 451416929
    */
    long long t = 0;
    while (true) {
        if ((t - 6) % 37 == 0 && (t + 18) % 13 == 0 && (t + 31) % 487 == 0 && (t + 50) % 19 == 0) {
            break;
        }
        t += (long long)451416929;
    }

    long long answer = t - 41;
    utils::format::print_answer(1, answer);
    return answer;
}

void Day13::ReadData()
{
    std::ifstream ifs(mInputFile);
    if (ifs.fail()) {
        return;
    }

    string line;
    getline(ifs, line);
    mFrom = stoi(line);

    regex r{"([0-9]+)"};
    smatch m;
    for (; getline(ifs, line);) {
        while (regex_search(line, m, r)) {
            mBuses.push_back(stoi(m[0]));
            line = m.suffix();
        }
    }
}