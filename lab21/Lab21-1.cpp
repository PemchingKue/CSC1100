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

struct Fract
{
	int num;
	int denomn;

};

Fract sum(Fract, Fract);

Fract sum(Fract f1, Fract f2)
{
	Fract result = { (f1.num * f2.denomn) + (f2.num * f1.denomn), f1.denomn * f2.denomn };
	return result;

}

int main()
{
	int num1;
	int deno1;
	int num2;
	int deno2;

	cout << "Enter fraction 1: Numerator and Denominator: ";
	cin >> num1 >> deno1;
	cout << "Enter fraction 2: Numerator Denominator: ";
	cin >> num2 >> deno2;

	Fract f1 = { num1, deno1 };
	Fract f2 = { num2, deno2 };
	Fract result = sum(f1, f2);
	cout << result.num << "/" << result.denomn;
	cout << endl;

	return 0;

}

