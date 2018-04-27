//==========================================================
//
//  Title:      Lab 16
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       11/14/16
//  Description: calculate the factorial of the number entered 
//	by the user
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


void factor(int n)
{
	int counter;
	int fact = 1;
	
	for (int counter = 1; counter <= n; counter++)
	{
		fact = fact * counter;
	}

	cout << n << "! " << "The Factorial Value is: " << fact << endl;
}

int main()
{
	int num;

	cout << "Enter the Number: ";
	cin >> num;

	factor(num);

	return 0;

}
