//==========================================================
//
//  Title:      Lab 18
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       11/21/16
//  Description: Changes letter casing
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
#include <ctype.h>
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

void changeCase(char* s)
{
	for (int i = 0; s[i]; i++)
	{
	if (islower(s[i])) s[i] = toupper(s[i]);
	else s[i] = tolower(s[i]);
	}
}

int main()
{
	char s[100];

	cout << "Enter your word: ";
	cin.getline(s, 100);
	changeCase(s);

	cout << s << endl;

	return 0;
}