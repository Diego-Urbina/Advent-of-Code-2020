#include "Day08.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <regex>
#include "../utils/format.h"

using namespace std;

Day08::Day08(std::string execFolder) : mInputFile{execFolder + "/input/Day08.txt"}
{
    utils::format::print_title(8);
    ReadData();
}

int Day08::Puzzle1()
{
    ExecuteProgram();
    utils::format::print_answer(1, mAccumulator);
    return mAccumulator;
}

int Day08::Puzzle2()
{
    // Brute force approach.
    // Swap one instruction and try the code.
    // If success, the code is correct.
    // If not, restore the instruction and swap the next one
    for (int i = 0; i < mIns.size(); ++i) {
        if (SwapInstruction(i)) {
            if (ExecuteProgram()) break;
            SwapInstruction(i);
        }
    }

    utils::format::print_answer(1, mAccumulator);
    return mAccumulator;
}

bool Day08::ExecuteProgram()
{
    ResetInstructions();
    mAccumulator = 0;

    int opIdx = 0;
    while (opIdx < mIns.size()) {
        auto &ins = mIns[opIdx];

        if (ins.executed) return false;
        else ins.executed = true;

        if (ins.op == "nop") {
            ++opIdx;
        }
        else if (ins.op == "acc") {
            mAccumulator += ins.value;
            ++opIdx;
        }
        else if (ins.op == "jmp") {
            opIdx += ins.value;
        }
    }

    return true;
}

void Day08::ResetInstructions()
{
    for (auto &ins : mIns) {
        ins.executed = false;
    }
}

bool Day08::SwapInstruction(int i)
{
    if (mIns[i].op == "acc") return false;
    else if (mIns[i].op == "jmp") mIns[i].op = "nop";
    else if (mIns[i].op == "nop") mIns[i].op = "jmp";
    return true;
}

void Day08::ReadData()
{
    std::ifstream ifs(mInputFile);
    if (ifs.fail()) {
        return;
    }

    regex r{"([a-z]{3}) ([\\-\\+][0-9]+)"};
    smatch m;
    for (string line; getline(ifs, line);) {
        regex_search(line, m, r);
        string op = m[1];
        int v = stoi(m[2]);

        mIns.push_back(Instruction(op, v));
    }
}