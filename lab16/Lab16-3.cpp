//==========================================================
//
//  Title:      Lab 16
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       11/14/16
//  Description: takes a string value as parameter to check 
//	if the given string is a palindrome
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


bool isPalindrome(char input[25], int start, int end)
{
	if (start >= end)
	{
		return 1;
	}
	else if (input[start] == input[end])
	{
		return isPalindrome(input, start + 1, end - 1);
	}
	else
		return false;
}

int main()
{
	char input[25];
	char choice;
	bool flag;
	int length;

	while (1)
	{
		cout << "Enter a string: ";
		cin >> input;

		length = strlen(input);
		flag = isPalindrome(input, 0, length - 1);

		if (flag == 1)
		{
			cout << input << " is a Palindrome." << endl;
		}
		else
		{
			cout << input << " is not a Palindrome." << endl;
		}
	}

	return 0;
}