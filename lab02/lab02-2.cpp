//==========================================================
//
//  Title:      Lab 02
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       9/19/16
//  Description:prompts user to input elapsed time for an event in hours
//  minutes, and seconds, then outputs elapsed time in seconds
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
	int minutes;
	int hours;
	int sec;
	int min;
	int hour;

	int time;

	//Inputs

	cout << "Enter elapsed time (hours): ";
	cin >> hours;

	cout << "Enter elapsed time (minutes): ";
	cin >> minutes;

	cout << "Enter elapsed time (seconds): ";
	cin >> seconds;
	cout << endl;

	//Calculations

	hour = hours * 3600;
	min = minutes * 60;
	sec = seconds;
	time = hour + min + sec;

	//Output

	cout << "The elapsed time is: " << time <<" seconds" << endl << endl;

}
