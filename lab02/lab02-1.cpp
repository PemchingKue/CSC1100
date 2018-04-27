//==========================================================
//
//  Title:      Lab 02
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       9/19/2016
//  Description: Prompts user to input elasped time for an event
//  then outputs elapsed time in hours, minutes, and seconds
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
	//Variables

	int seconds;
	int sec;
	int hour;
	int min;

	//Input
	cout << "Please enter the elapsed time for an event (seconds): ";
	cin >> seconds;

	//Calculation

	sec = seconds % 60;
	min = seconds / 60;
	hour = seconds / 3600;
	min = min % 60;

	//Output

	cout << "The elasped time is: " << hour << ":" << min << ":" << sec << endl;

	return 0;
}