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


int main() 
{
	string s1;
	string s2;

	cout << "Enter the first string: ";
	cin >> s1;

	cout << "Enter the second string: ";
	cin >> s2;

	for (int i = 0; i < s1.length(); i++)
	{
		int pos = s1.find(s2, i);

		if (pos != -1) 
		{
			cout << pos << endl;
			i = i + pos;
		}
	}
	return 0;
}