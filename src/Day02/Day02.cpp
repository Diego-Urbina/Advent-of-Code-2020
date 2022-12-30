#include "Day02.h"
#include <iostream>
#include <fstream>
#include <regex>
#include "../utils/format.h"

using namespace std;

Day02::Day02(std::string execFolder) : mInputFile{execFolder + "/input/Day02.txt"}
{
    utils::format::print_title(2);
}

int Day02::Puzzle1()
{
    ifstream ifs{mInputFile};

    std::regex regex{"([0-9]+)-([0-9]+) ([a-zA-Z]{1}): (.+)"};
    std::smatch matches;

    auto validPasswords{0};
    for (std::string p; std::getline(ifs, p);) {
        if (std::regex_search(p, matches, regex)) {
            int low = std::stoi(matches[1].str());
            int high = std::stoi(matches[2].str());
            char token = matches[3].str()[0];
            std::string password = matches[4].str();

            auto times = std::count(password.cbegin(), password.cend(), token);
            if (low <= times && times <= high) {
                ++validPasswords;
            }
        }
    }

    utils::format::print_answer(1, validPasswords);
    return validPasswords;
}

int Day02::Puzzle2()
{
    ifstream ifs{mInputFile};

    std::regex regex{"([0-9]+)-([0-9]+) ([a-zA-Z]{1}): (.+)"};
    std::smatch matches;

    auto validPasswords{0};
    for (std::string p; std::getline(ifs, p);) {
        if (std::regex_search(p, matches, regex)) {
            int low = std::stoi(matches[1].str());
            int high = std::stoi(matches[2].str());
            char token = matches[3].str()[0];
            std::string password = matches[4].str();

            if (password[low - 1] == token ^ password[high - 1] == token) {
                ++validPasswords;
            }
        }
    }

    utils::format::print_answer(2, validPasswords);
    return validPasswords;
}
