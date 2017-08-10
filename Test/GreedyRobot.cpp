// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Robot.h"





int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	cout << "Please enter a starting robot location and a treasure location (ie: x1 y1 x2 y2): ";
	cin >> x1 >> y1 >> x2 >> y2;


	Robot(x1, y1, x2, y2);
	

	return 0;
}

