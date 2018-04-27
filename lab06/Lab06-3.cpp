//==========================================================
//
//  Title:      Lab 06
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       10/3/16
//  Description: Calculates cellular phone bill with prem or reg
//	rates
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

	int accountNumber;
	int	regularMin;
	int	pDayMin;
	int	pNightMin;
	float totalBill = 0;
	char serviceCode;
	char choice = 'y';

	const float R_ACC_FEE = 10.00;
	const float R_RATE = 0.20;
	const float P_ACC_FEE = 25.00;
	const float P_DAY_RATE = 0.10;
	const float P_NIGHT_RATE = 0.05;

	//While loop
	while (choice == 'y' || choice == 'Y')
	{
		
		//Inputs

		cout << "Please enter an account number: ";
		cin >> accountNumber;
		cout << "Please enter a service code: ";
		cin >> serviceCode;

		//if statements

		if (serviceCode == 'r' || serviceCode == 'R')
		{
			cout << "Please enter the number of minutes used: ";
			cin >> regularMin;

			if (regularMin > 50) {
				totalBill = ((regularMin - 50) * R_RATE) + R_ACC_FEE;
			}
			else
			{
				totalBill = R_ACC_FEE;
			}

			cout << "Your bill is: $" << totalBill << endl;

			break;
		}
		else if (serviceCode == 'p' || serviceCode == 'P')
		{
			cout << "Please enter the number of day minutes used: ";
			cin >> pDayMin;
			cout << "Please enter the number of night minutes used: ";
			cin >> pNightMin;
			if (pDayMin > 75)
			{
				totalBill = (pDayMin - 75) * P_DAY_RATE;
			}
			if (pNightMin > 100)
			{
				totalBill = (pNightMin - 100) * P_NIGHT_RATE;
			}
			totalBill += P_ACC_FEE;

			cout << "Your bill is: $" << totalBill << endl;
			break;
		}

		//asks user to try again if invalid input

		cout << "You have entered an invalid service code" << endl;
		cout << "Do you want to try again? (y/n)";
		cin >> choice;

	}
	
	return 0;

}