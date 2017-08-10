#include "stdafx.h"
#include "Robot.h"



Robot::Robot()
{
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
}

Robot::Robot(int startX, int startY, int endX, int endY)
{

	x1 = startX;
	y1 = startY;
	x2 = endX;
	y2 = endY;

	count = 0;

	string path;
	TreasureHunt(startX, startY, endX, endY, path);
	PrintPath(pathsTaken);
	cout << endl << "The number of paths taken is :" << count << endl;
}


Robot::~Robot()
{
}

int Robot::TreasureHunt(int x, int y, int x2, int y2, string &path)
{
	if ((x == x2) && (y == y2))
	{
		cout << endl << "The Robot is already at the Treasure!!" << endl;
	}
	else
	{
		Recursion(x, y, x2, y2, path);
	}

	return 0;
}

bool Robot::Recursion(int startX, int startY, int endX, int endY, string &path)
{
	if ((startX == endX) && (startY == endY))
	{
		pathsTaken.push_back(path);
		count++;
		
		return true;
	}
	if (startY < endY)
	{
		Recursion(startX, startY + 1, endX, endY, path + "N");
	}
	if (startX < endX)
	{
		Recursion(startX + 1, startY, endX, endY, path + "E");
	}
	if (startY > endY)
	{
		Recursion(startX, startY - 1, endX, endY, path + "S");
	}
	if (startX > endX)
	{
		Recursion(startX - 1, startY, endX, endY, path + "W");
	}

}

void Robot::PrintPath(vector<string> path)
{
	for (int i = 0; i  < path.size(); i++)
	{
		cout << path.at(i) << endl;
	}
	cout << endl;
}
