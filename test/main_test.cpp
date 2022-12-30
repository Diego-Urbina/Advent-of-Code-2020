#include <gtest/gtest.h>

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

TEST(Day01, Puzzle1)
{
    Day01 day01(".");
    EXPECT_EQ(day01.Puzzle1(), 514579);
}

TEST(Day01, Puzzle2)
{
    Day01 day01(".");
    EXPECT_EQ(day01.Puzzle2(), 241861950);
}

TEST(Day02, Puzzle1)
{
    Day02 day02(".");
    EXPECT_EQ(day02.Puzzle1(), 2);
}

TEST(Day02, Puzzle2)
{
    Day02 day02(".");
    EXPECT_EQ(day02.Puzzle2(), 1);
}

TEST(Day03, Puzzle1)
{
    Day03 day03(".");
    EXPECT_EQ(day03.Puzzle1(), 7);
}

TEST(Day03, Puzzle2)
{
    Day03 day03(".");
    EXPECT_EQ(day03.Puzzle2(), 336);
}

TEST(Day04, Puzzle1)
{
    Day04 day04(".");
    EXPECT_EQ(day04.Puzzle1(), 2);
}

TEST(Day04, Puzzle2)
{
    Day04 day04(".");
    EXPECT_EQ(day04.Puzzle2(), 2);
}

TEST(Day05, Puzzle1)
{
    Day05 day05(".");
    EXPECT_EQ(day05.Puzzle1(), 357);
}

TEST(Day06, Puzzle1)
{
    Day06 day06(".");
    EXPECT_EQ(day06.Puzzle1(), 11);
}

TEST(Day06, Puzzle2)
{
    Day06 day06(".");
    EXPECT_EQ(day06.Puzzle2(), 6);
}

TEST(Day07, Puzzle1)
{
    Day07 day07(".");
    EXPECT_EQ(day07.Puzzle1(), 4);
}

TEST(Day07, Puzzle2)
{
    Day07 day07(".");
    EXPECT_EQ(day07.Puzzle2(), 32);
}

TEST(Day08, Puzzle1)
{
    Day08 day08(".");
    EXPECT_EQ(day08.Puzzle1(), 5);
}

TEST(Day08, Puzzle2)
{
    Day08 day08(".");
    EXPECT_EQ(day08.Puzzle2(), 8);
}

TEST(Day09, Puzzle1)
{
    Day09 day09(".");
    EXPECT_EQ(day09.Puzzle1(true), 127);
}

TEST(Day09, Puzzle2)
{
    Day09 day09(".");
    EXPECT_EQ(day09.Puzzle2(true), 62);
}

TEST(Day10, Puzzle1)
{
    Day10 day10(".");
    EXPECT_EQ(day10.Puzzle1(), 220);
}

TEST(Day10, Puzzle2)
{
    Day10 day10(".");
    day10.Puzzle1();
    EXPECT_EQ(day10.Puzzle2(), 19208);
}

TEST(Day11, Puzzle1)
{
    Day11 day11(".");
    EXPECT_EQ(day11.Puzzle1(), 37);
}

TEST(Day11, Puzzle2)
{
    Day11 day11(".");
    EXPECT_EQ(day11.Puzzle2(), 26);
}

TEST(Day12, Puzzle1)
{
    Day12 day12(".");
    EXPECT_EQ(day12.Puzzle1(), 25);
}

TEST(Day12, Puzzle2)
{
    Day12 day12(".");
    EXPECT_EQ(day12.Puzzle2(), 286);
}

TEST(Day13, Puzzle1)
{
    Day13 day13(".");
    EXPECT_EQ(day13.Puzzle1(), 295);
}

TEST(Day14, Puzzle1)
{
    Day14 day14(".");
    EXPECT_EQ(day14.Puzzle1(), 165);
}

TEST(Day14, Puzzle2)
{
    Day14 day14(".");
    EXPECT_EQ(day14.Puzzle2(), 208);
}

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
