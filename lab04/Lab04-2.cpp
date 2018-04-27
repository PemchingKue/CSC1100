//==========================================================
//
//  Title:      Lab04
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       9/26/16
//  Description: Prompts user to enter different types of ticket sales
//  then displays the ticket price and tickets sold.  Then calculates
//  the total amount of tickets sold and total amount of money made.
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
	
	//Declare variables

	int box;
	int side;
	int prem;
	int gen;

	int totalbox;
	int totalside;
	int totalprem;
	int totalgen;

	int numberOfTicketsSold;
	int totalsale;

	//Outputs
	
	cout << "Enter the amount of box tickets sold: ";
	cin >> box;

	cout << "Enter the amount of sideline tickets sold: ";
	cin >> side;

	cout << "Enter the amount of premium tickets sold: ";
	cin >> prem;

	cout << "Enter the amount of general admission tickets sold: ";
	cin >> gen;
	cout << endl;

	//Output mapping
	
	cout << setw(3) << 250 << setw(5) << box << endl;
	cout << setw(3) << 100 << setw(6) << side << endl;
	cout << setw(3) << 50 << setw(6) << prem << endl;
	cout << setw(3) << 25 << setw(6) << gen << endl << "\n";

	//Calculations

	totalbox = 250 * box;
	totalside = 100 * side;
	totalprem = 50 * prem;
	totalgen = 25 * gen;

	totalsale = totalbox + totalside + totalprem + totalgen;
	numberOfTicketsSold = box + side + prem + gen;

	//Total outputs

	cout << "The total amount of tickets sold is: " << numberOfTicketsSold << endl;
	cout << "The total sale amount is : " << totalsale << endl << "\n";

	return 0;

}
