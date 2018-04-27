//==========================================================
//
//  Title:      Lab04
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       9/26/16
//  Description: reads data from specified file then outputs
//  data into the file Output.dat
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
	ifstream inFile;
	ofstream outFile;
	
	//Declare variables

	double currentSalary;
	double currentSalary2;
	double currentSalary3;
	int percentPay;
	int percentPay2;
	double percentPay3;
	string firstName;
	string firstName2;
	string firstName3;
	string lastName;
	string lastName2;
	string lastName3;

	//Open files

	inFile.open("Input.txt");
	outFile.open("Output.out");
	outFile << fixed << setprecision(2);

	//Read data and output data
	
	cout << "Processing Data" << endl;

	inFile >> lastName >> firstName >> currentSalary >> percentPay;
	outFile << firstName << " " << lastName << " " << currentSalary << " " << percentPay << endl;

	inFile >> lastName2 >> firstName2 >> currentSalary2 >> percentPay2;
	outFile << firstName2 << " " << lastName2 << " " << currentSalary2 << " " << percentPay2 << endl;

	inFile >> lastName3 >> firstName3 >> currentSalary3 >> percentPay3;
	outFile << firstName3 << " " << lastName3 << " " << currentSalary3 << " " << percentPay3 << endl;
	
	inFile.close();
	outFile.close();

	return 0;
}
