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
	int failstack = 0, rate, mult = 3, chance = 500, increase14 = 50, max14 = 1750;
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
		system("cls");
		cout << "You are choosing Reblath Shoes +14." << endl;
		cin.get();

		while (stopFS != 'E' && stopFS != 'e')
		{
			system("cls");
		
			percent = (float)chance / 100;

			if (chance <= max14)
			{
				chance += increase14;
			}
			cout << "Your current failstack = " << failstack << endl;
			cout << "Your chance to success = " << percent << "%" << endl;
			cout << "Press ENTER to enhance the Reblath Shoes +14..." << endl;

			if (cin.get() == '\n')
			{
				rate = rand() % (10000 * mult);
				cout << "Your RNG is " << rate << endl;
				if (rate > chance * mult)
				{
					cout << "[Reblath Shoes +14] ENHANCEMENT FAILED" << endl;
					failstack++;
				}
				else
				{
					cout << "[Reblath Shoes +14] ENHANCEMENT SUCCESS at " << failstack << " FS!" << endl;
					failstack = 0;
					break;
				}
				cin.get();
			}
		}
	}
	_getch();
	return 0;
}

