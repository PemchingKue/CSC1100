//==========================================================
//
//  Title:      Lab10
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       10/24/16
//  Description: Ask a user to input a positive integer number
//  and calculate the sum of the digits
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
	//variable 
	int number;
	int num;
	int solution = 0;

	cout << "Enter a Positive Number: ";
	cin >> number;

	//validation loop
	while (number < 0)
	{
		cout << "Sorry that number is invalid..."<< endl;
		cout << "Please enter a Positive number: ";
		cin >> number;
	}

	//calculation
	num = number;

	while (num != 0)
	{
		solution = solution + num % 10;
		num = num / 10;
	}

	//output
	cout << "The Sum of the Digits " << number << " = " << solution << endl;

	return 0;

}
