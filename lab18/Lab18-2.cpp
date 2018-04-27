//==========================================================
//
//  Title:      Lab 18
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       11/21/16
//  Description: Counts letter, digits, numbers in a string
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

void countChar(char* input)
{
	int l = 0;
	int u = 0;
	int d = 0;
	int s = 0;
	int n = 0;
	
	while (*(input + n))
	{
		l += !!(islower(*(input + n)));
		u += !!(isupper(*(input + n)));
		d += !!(isdigit(*(input + n)));
		s += !!(ispunct(*(input + n++)));
	}
	
	cout << "Lower: " << l << endl;
	cout << "Upper: " << u << endl;
	cout << "Digit: " << d << endl;
	cout << "Punct: " << s << endl;
	
}

int main()
{
	char input[100];

	cout << "Enter your word: ";
	cin.getline(input, 100);

	countChar(input);
}
