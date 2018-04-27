//==========================================================
//
//  Title:      Lab10
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       10/24/16
//  Description: Prints out a pattern
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
	int i;
	int k;

	for (i = 1; i <= 5; i++)
	{
		for (k = 1; k <= i; k++)
			cout << "#";
		cout << endl;
	}
	return 0;
}
