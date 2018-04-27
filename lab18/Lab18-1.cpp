//==========================================================
//
//  Title:      Lab 18
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       11/21/16
//  Description: Calculates the sum of 2 arrays in matrixes
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

#define s 2
void getData(int a[50][50], int b[50][50]);
void summation(int a[50][50], int b[50][50], int sum[50][50]);

int main()
{
	int a[50][50];
	int b[50][50];
	int sum[50][50];

	getData(a, b);
	summation(a, b, sum);

	return 0;
}

void getData(int a[50][50], int b[50][50])
{

	int i;
	int j;

	cout << "Enter elements of 1st Matrix " << endl;
	for (i = 0; i < s; ++i)
		for (j = 0; j < s; ++j)
		{
			cout << "Enter numbers for A" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}

	cout << endl << "Enter elements of 2nd Matrix " << endl;
	for (i = 0; i < s; ++i)
		for (j = 0; j < s; ++j)
		{
			cout << "Enter numbers for B" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
}

void summation(int a[50][50], int b[50][50], int sum[50][50])
{
	
	int i;
	int j;

	for (i = 0; i < s; ++i)
		for (j = 0; j < s; ++j)
			sum[i][j] = a[i][j] + b[i][j];

	cout << endl << "Sum of two matrix is: " << endl;
	for (i = 0; i < s; ++i)
		for (j = 0; j < s; ++j)
		{
			cout << sum[i][j] << "  ";
			if (j == s - 1)
				cout << endl;
		}
}

