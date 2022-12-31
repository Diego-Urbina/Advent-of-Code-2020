#include <filesystem>
#include <iostream>

#include "Day01/Day01.h"
#include "Day02/Day02.h"
#include "Day03/Day03.h"
#include "Day04/Day04.h"
#include "Day05/Day05.h"
#include "Day06/Day06.h"
#include "Day07/Day07.h"
#include "Day08/Day08.h"
#include "Day09/Day09.h"
#include "Day10/Day10.h"
#include "Day11/Day11.h"
#include "Day12/Day12.h"
#include "Day13/Day13.h"
#include "Day14/Day14.h"
#include "Day15/Day15.h"

int main(int argc, char *argv[])
{
    std::string execFolder =
      std::filesystem::canonical(std::filesystem::path(argv[0])).parent_path();

    Day01 day01(execFolder + "/input/Day01.txt");
    day01.Puzzle1();
    day01.Puzzle2();

    Day02 day02(execFolder + "/input/Day02.txt");
    day02.Puzzle1();
    day02.Puzzle2();

    Day03 day03(execFolder + "/input/Day03.txt");
    day03.Puzzle1();
    day03.Puzzle2();

    Day04 day04(execFolder + "/input/Day04.txt");
    day04.Puzzle1();
    day04.Puzzle2();

    Day05 day05(execFolder + "/input/Day05.txt");
    day05.Puzzle1();
    day05.Puzzle2();

    Day06 day06(execFolder + "/input/Day06.txt");
    day06.Puzzle1();
    day06.Puzzle2();

    Day07 day07(execFolder + "/input/Day07.txt");
    day07.Puzzle1();
    day07.Puzzle2();

    Day08 day08(execFolder + "/input/Day08.txt");
    day08.Puzzle1();
    day08.Puzzle2();

    Day09 day09(execFolder + "/input/Day09.txt");
    day09.Puzzle1();
    day09.Puzzle2();

    Day10 day10(execFolder + "/input/Day10.txt");
    day10.Puzzle1();
    day10.Puzzle2();

    Day11 day11(execFolder + "/input/Day11.txt");
    day11.Puzzle1();
    day11.Puzzle2();

    Day12 day12(execFolder + "/input/Day12.txt");
    day12.Puzzle1();
    day12.Puzzle2();

    Day13 day13(execFolder + "/input/Day13.txt");
    day13.Puzzle1();
    day13.Puzzle2();

    Day14 day14(execFolder + "/input/Day14.txt");
    day14.Puzzle1();
    day14.Puzzle2();

    Day15 day15(execFolder + "/input/Day15.txt");
    day15.Puzzle1();
    day15.Puzzle2();

    return 0;
}
