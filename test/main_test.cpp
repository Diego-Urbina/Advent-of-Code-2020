#include <gtest/gtest.h>

#include <filesystem>
#include <string>

#include "../src/Day01/Day01.h"
#include "../src/Day02/Day02.h"
#include "../src/Day03/Day03.h"
#include "../src/Day04/Day04.h"
#include "../src/Day05/Day05.h"
#include "../src/Day06/Day06.h"
#include "../src/Day07/Day07.h"
#include "../src/Day08/Day08.h"
#include "../src/Day09/Day09.h"
#include "../src/Day10/Day10.h"
#include "../src/Day11/Day11.h"
#include "../src/Day12/Day12.h"
#include "../src/Day13/Day13.h"
#include "../src/Day14/Day14.h"
#include "../src/Day15/Day15.h"

std::string execFolder;

TEST(Day01, Day01)
{
    Day01 day01(execFolder + "/input/Day01.txt");
    EXPECT_EQ(day01.Puzzle1(), 514579);
    EXPECT_EQ(day01.Puzzle2(), 241861950);
}

TEST(Day02, Day02)
{
    Day02 day02(execFolder + "/input/Day02.txt");
    EXPECT_EQ(day02.Puzzle1(), 2);
    EXPECT_EQ(day02.Puzzle2(), 1);
}

TEST(Day03, Day03)
{
    Day03 day03(execFolder + "/input/Day03.txt");
    EXPECT_EQ(day03.Puzzle1(), 7);
    EXPECT_EQ(day03.Puzzle2(), 336);
}

TEST(Day04, Day04)
{
    Day04 day04(execFolder + "/input/Day04.txt");
    EXPECT_EQ(day04.Puzzle1(), 2);
    EXPECT_EQ(day04.Puzzle2(), 2);
}

TEST(Day05, Day05)
{
    Day05 day05(execFolder + "/input/Day05.txt");
    EXPECT_EQ(day05.Puzzle1(), 357);
}

TEST(Day06, Day06)
{
    Day06 day06(execFolder + "/input/Day06.txt");
    EXPECT_EQ(day06.Puzzle1(), 11);
    EXPECT_EQ(day06.Puzzle2(), 6);
}

TEST(Day07, Day07)
{
    Day07 day07(execFolder + "/input/Day07.txt");
    EXPECT_EQ(day07.Puzzle1(), 4);
    EXPECT_EQ(day07.Puzzle2(), 32);
}

TEST(Day08, Day08)
{
    Day08 day08(execFolder + "/input/Day08.txt");
    EXPECT_EQ(day08.Puzzle1(), 5);
    EXPECT_EQ(day08.Puzzle2(), 8);
}

TEST(Day09, Day09)
{
    Day09 day09(execFolder + "/input/Day09.txt");
    EXPECT_EQ(day09.Puzzle1(true), 127);
    EXPECT_EQ(day09.Puzzle2(true), 62);
}

TEST(Day10, Day10)
{
    Day10 day10(execFolder + "/input/Day10.txt");
    EXPECT_EQ(day10.Puzzle1(), 220);
    EXPECT_EQ(day10.Puzzle2(), 19208);
}

TEST(Day11, Day11)
{
    Day11 day11(execFolder + "/input/Day11.txt");
    EXPECT_EQ(day11.Puzzle1(), 37);
    EXPECT_EQ(day11.Puzzle2(), 26);
}

TEST(Day12, Day12)
{
    Day12 day12(execFolder + "/input/Day12.txt");
    EXPECT_EQ(day12.Puzzle1(), 25);
    EXPECT_EQ(day12.Puzzle2(), 286);
}

TEST(Day13, Day13)
{
    Day13 day13(execFolder + "/input/Day13.txt");
    EXPECT_EQ(day13.Puzzle1(), 295);
}

TEST(Day14, Day14)
{
    Day14 day14(execFolder + "/input/Day14a.txt");
    EXPECT_EQ(day14.Puzzle1(), 165);

    day14 = Day14(execFolder + "/input/Day14b.txt");
    EXPECT_EQ(day14.Puzzle2(), 208);
}

int main(int argc, char *argv[])
{
    execFolder = std::filesystem::canonical(std::filesystem::path(argv[0])).parent_path();

    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
