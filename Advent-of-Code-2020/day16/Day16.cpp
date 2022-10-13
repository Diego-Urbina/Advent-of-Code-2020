#include "Day16.h"
#include <fstream>
#include <iostream>

using namespace std;

Day16::Day16() : mInputFile{"Day16/day16.txt"}
{
	cout << endl
		 << "DAY 16" << endl;
	ReadData();
}

void Day16::Puzzle1()
{
	cout << "Puzzle 1 answer: " << 0 << endl;
}

void Day16::Puzzle2()
{
	cout << "Puzzle 2 answer: " << 0 << endl;
}

void Day16::ReadData()
{
	std::ifstream ifs(mInputFile);
	if (ifs.fail())
	{
		return;
	}
}