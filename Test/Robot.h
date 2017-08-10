#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;


class Robot
{
public:
	Robot();
	Robot(int startX, int startY, int endX, int endY);

	~Robot();

private:
	int x1, y1, x2, y2;
	int count;
	int maxSize;
	vector<string> pathsTaken;

	int TreasureHunt(int x, int y, int x2, int y2, string &string);
	bool Recursion(int startX, int startY, int endX, int endY, string &path);
	void PrintPath(vector<string> path);
};
