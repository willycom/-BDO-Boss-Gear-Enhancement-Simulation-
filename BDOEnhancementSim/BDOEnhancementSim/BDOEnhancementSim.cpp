// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
	srand(time(NULL));

	char toolChoice, stopFS = '0';
	int failstack = 0, rate, mult = 1, chance = 50, increase14 = 5, max14 = 175;
	double percent;

	cout << "Choose your failstacking tool:" << endl;
	cout << "1. Reblath Shoes +14" << endl;
	cout << "2. Reblath Gloves +14" << endl;
	cout << "3. Reblath Armor +14" << endl;
	cout << "4. Green Weapon +14" << endl;
	cout << "5. Green Armor +14" << endl;

	toolChoice = _getch();

	if (toolChoice == '1')
	{
		cout << "You are choosing Reblath Shoes +14." << endl;
		cout << "Press ENTER to enhance the Reblath Shoes +14..." << endl;
		while (stopFS != 'E' && stopFS != 'e')
		{
			if (chance <= max14)
			{
				chance += increase14;
			}

			cout << "Your current failstack = " << failstack << endl;
			percent = (float)chance / 10 * mult;
			cout << "Your chance to success = " << percent << "%" << endl;

			if (cin.get() == '\n')
			{
				rate = rand() % (10000 * mult);
				if (rate > chance)
				{
					cout << "[Reblath Shoes +14] ENHANCEMENT FAILED" << endl;
					failstack++;
				}
				else
				{
					cout << "[Reblath Shoes +14] ENHANCEMENT SUCCESS" << endl;
					failstack = 0;
					cout << "Your current failstack = " << failstack << endl;
					break;
				}
			}
		}
	}
	_getch();
	return 0;
}

