//==========================================================
//
//  Title:      Lab09
//  Course:     CSC 1101
//  Lab Number: 004
//  Author:     Pemching Kue
//  Date:       10/11/16
//  Description: reads from file and calculates rectangle area
//	and circle area and circumference
//    
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib>  // For several general-purpose functions
#include <fstream>  // For file handling
#include <iomanip>  // For formatted output
#include <iostream>  // For cin, cout, and system
#include <string>  // For string data type
#include <cmath>
using namespace std;  // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
	ifstream inFile;
	ofstream outFile;

	//Declare Variables

	double length;
	double width;
	double radius;

	inFile.open("inData.txt");
	outFile.open("Output.out");

	cout << "Processing Data..." << endl;

	inFile >> length >> width;
	outFile << "Rectangle: " << endl;
	outFile << "Length = " << length << " width = " << width << " area = " << length*width << endl;

	inFile >> radius;
	outFile << "Circle: " << endl;
	outFile << "Radius = " << radius << " area = " << (3.14 * pow(radius, 2)) << " circumference = " << (radius * 2 * 3.14) << endl;

	inFile.close();
	outFile.close();

	return 0;

}