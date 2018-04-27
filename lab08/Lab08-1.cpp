//==========================================================
//
//  Title:      Lab08
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       10/10/16
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

int main()
{
	int firstNum;
	int secondNum;

	cout << "Please enter the first number: ";
	cin >> firstNum;
	cout << "Please enter the second number: ";
	cin >> secondNum;

	if (firstNum < secondNum)
	{
		cout << "Your number is legal";
	}
	else if (firstNum > secondNum)
	{
		cout << "Your first number is too high ";
	}
	else if (firstNum >= 0 && secondNum >= 0)
	{
		cout << "Please enter a valid number that is not negative";
	}


	return 0;
}