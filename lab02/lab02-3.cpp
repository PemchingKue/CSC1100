//==========================================================
//
//  Title:      Lab 02
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       9/19/16
//  Description:prompts user to input integral value and does both
//  increment and decrement with prefix and postfix forms
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
	int a;


	cout << "Enter a integral value: ";
	cin >> a;
	cout << endl;

	cout << "Value of a++ is: " << a++ << endl;
	cout << "Value of a is: " << a << endl << endl;
	
	cout << "Value of ++a is: " << ++a << endl;
	cout << "Value of a is: " << a << endl << endl;

	cout << "Value of a-- is: " << a-- << endl;
	cout << "Value of a is: " << a << endl << endl;

	cout << "Value of --a is: " << --a << endl;
	cout << "Value of a is: " << a << endl << endl;


	return 0;

}
