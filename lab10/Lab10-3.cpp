//==========================================================
//
//  Title:      Lab10
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       10/24/16
//  Description: Ask a user to input a checkerboard size 
//  and print a checkerboard
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
	int size;

	cout << "Please enter the checkerboard size: ";
	cin >> size;

	size_t N = size;
	char s1 = '#', s2 = ' ';

	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			cout << ((i + j) % 2 == 0 ? s1 : s2);
		}
		cout << endl;
	}

	return 0;

}
