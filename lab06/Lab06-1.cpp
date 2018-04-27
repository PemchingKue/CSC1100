//==========================================================
//
//  Title:      Lab 06
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       10/3/16
//  Description: Calculates integers entered
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
	//Variables
	
	int num1;
	int num2;
	char choice;
	int solution;

	//Inputs

	cout << "Hello, welcome to the Calculator" << endl<<endl;
	cout << "Please choose your operator (+) (-) (/) (*): ";
	cin >> choice;
	cout << "Please enter first number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;
	cout << endl;

	//if and else statments

	if (choice == '+')
	{
		solution = num1 + num2;
		cout << num1 << " + " << num2 << " = " << solution << "\n";
	}
	else if (choice == '-')
	{
		solution = num1 - num2;
		cout << num1 << " - " << num2 << " = " << solution << "\n";
	}
	else if (choice == '/')
	{
		if (num2 == 0)
		{
			cout << "Sorry, you cannot enter 0 as a denominator";
		}
		else
		{
			solution = num1 / num2;
			cout << num1 << " / " << num2 << " = " << solution << "\n";
		}
	}
	else if (choice == '*')
	{
		solution = num1 * num2;
		cout << num1 << " * " << num2 << " = " << solution << "\n";
	}

	cout << endl;

	return 0;
}