//==========================================================
//
//  Title:      Lab04
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       9/26/16
//  Description: Prompts user to input weight in Kg then
//  converts it into lbs to the nearest 2 decimals
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
	double kg;
	double lb;

	cout << "Please enter weight in kilograms: ";
	cin >> kg;
	
	lb = 2.2 * kg;

	cout << "The weight in pounds is: " << fixed << setprecision(2) << lb << "\n";

	return 0;

}
