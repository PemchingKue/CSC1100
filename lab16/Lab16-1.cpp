//==========================================================
//
//  Title:      Lab16
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       11/14/16
//  Description: Calculates the inflation rate for 1 and 2
//	years
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

void getinp(double* cp, double* p1, double* p2);
void inflationRate(double cp, double p1, double p2, double* rate1, double* rate2);
void showresult(double rate1, double rate2);


void getinp(double* cp, double* p1, double* p2)
{
	cout << "Please enter the current price: ";
	cin >> *cp;
	cout << "Please enter the the price a year ago: ";
	cin >> *p1;
	cout << "Please enter the price two years ago: ";
	cin >> *p2;
}

void inflationRate(double cp, double p1, double p2, double* rate1, double* rate2)
{
	*rate1 = (p1 - p2) / p2;
	*rate2 = (cp - p1) / p1;
}

void showresult(double rate1, double rate2)
{
	
	if (rate1 < rate2)
	{
		cout << "The inflation rate is increasing." << endl;
	}
	else if (rate1 > rate2)
	{
		cout << "The inflation rate is decreasing." << endl;
	}
	else
	{
		cout << "There is no change in the inflation rate" << endl;
	}

	cout << "The rate for last year: " << rate1 << endl;
	cout << "The rate for this year: " << rate2 << endl;
}

int main()
{
	double cp = 0;
	double p1 = 0;
	double p2 = 0;
	double r1 = 0;
	double r2 = 0;

	getinp(&cp, &p1, &p2);
	inflationRate(cp, p1, p2, &r1, &r2);
	showresult(r1, r2);

	return 0;
}