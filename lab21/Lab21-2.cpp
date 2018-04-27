//==========================================================
//
//  Title:      Lab 21
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       12/5/16
//  Description:
//
//
//
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

enum sizes{ small, medium, large, jumbo };
sizes options(int drinkSize, int popcornSize);
void printTotal(sizes price);

int main()
{
	int popcornSize;
	int drinkSize;

	cout << "Please pick the size of your popcorn: " << endl;
	cout << "1. Small" << endl;
	cout << "2. Medium" << endl;
	cout << "3. Large" << endl;
	cout << "4. Jumbo" << endl;
	cin >> popcornSize;

	cout << "Please pick the size of your Soda: " << endl;
	cout << "1. Small" << endl;
	cout << "2. Medium" << endl;
	cout << "3. Large" << endl;
	cout << "4. Jumbo" << endl;
	cin >> drinkSize;

	printTotal(options(drinkSize, popcornSize));

	return 0;
}

sizes options(int drinkSize, int popcornSize)
{
	if (drinkSize == 1 || popcornSize == 1)
	{
		return medium;
	}
	else if (drinkSize == 2 || popcornSize == 2)
	{
		return small;
	}
	else if (drinkSize == 3 || popcornSize == 3)
	{
		return large;
	}
	else
		return jumbo;
}
void printTotal(sizes price)
{
	int drinkSize = 0;
	int popcornSize = 0;
	float total = 0;

	switch (drinkSize)
	{
	case small:
		total += 1.50;
		break;
	case medium:
		total += 2.50;
		break;
	case large:
		total += 3.75;
		break;
	case jumbo:
		total += 4.50;
		break;
	}

	switch (popcornSize)
	{
	case small:
		total += 1.25;
		break;
	case medium:
		total += 2.25;
		break;
	case large:
		total += 3.50;
		break;
	case jumbo:
		total += 4.25;
		break;
	}

	cout << "Total is: $" << total << endl;
}
