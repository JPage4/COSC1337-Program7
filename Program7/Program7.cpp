//********************************************************************
//
//  Author:               Instructor
//
//  Program #:            Seven
//
//  File Name:            Program7.cpp
//
//  Course:               COSC 1337 Programming Fundamentals II
//
//  Due Date:             July 9, 2021
//
//  Instructor:           Prof. Fred Kumi 
//
//  Chapter:              Chapter 7
//
//  Description:
//     An inventory program. You are allowed to modify only line 149.
//     If you modify any other part of the program, you will not
//     receive credit for Program 7.
//
//  Inventory.h   -- contains Inventory class declaration
//
//********************************************************************

#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Inventory.h"

using namespace std;

void testInventory(Inventory&, Inventory&);
void developerInfo();
void holdScreen();

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
	cout << fixed
		<< showpoint
		<< setprecision(2);

	developerInfo();
	Inventory stockItem1;
	Inventory stockItem2(124, 12, 84.95);

	testInventory(stockItem1, stockItem2);

	holdScreen();
	return 0;
}

//*********************************************************************
//
//  Function:     testInventory
// 
//  Description:  A function to the Inventory class
//
//  Parameters:   Two Inventory Objects
//
//  Returns:      N/A 
//
//*********************************************************************
void testInventory(Inventory& stockItem1, Inventory& stockItem2)
{
	// Demonstrate the default constructor
	cout << "\nDemonstrating the default constructor...\n";
	cout << "Item number: " << stockItem1.getItemNumber() << endl;
	cout << "Quantity   : " << stockItem1.getQuantity() << endl;
	cout << "Cost       : " << stockItem1.getCost() << endl;
	cout << "Total Cost : " << stockItem1.getTotalCost() << endl;

	// Now demonstrate the overloaded constructor
	cout << "\nDemonstrating the overloaded constructor...\n";
	stockItem2.setTotalCost();
	cout << "Item number: " << stockItem2.getItemNumber() << endl;
	cout << "Quantity   : " << stockItem2.getQuantity() << endl;
	cout << "Cost       : " << stockItem2.getCost() << endl;
	cout << "Total Cost : " << stockItem2.getTotalCost() << endl;

	// Now demonstrate the member "set" functions
	stockItem2.setItemNumber(243);
	stockItem2.setQuantity(50);
	stockItem2.setCost(9.50);
	stockItem2.setTotalCost();

	cout << "\nDemonstrating the \"set\" functions...\n";
	cout << "Item number: " << stockItem2.getItemNumber() << endl;
	cout << "Quantity   : " << stockItem2.getQuantity() << endl;
	cout << "Cost       : " << stockItem2.getCost() << endl;
	cout << "Total Cost : " << stockItem2.getTotalCost() << endl;

	// Now demonstrate the input validation functions
	cout << "\nDemonstrating the input validation functions...\n";
	stockItem2.setItemNumber(-1);
	stockItem2.setQuantity(-1);
	stockItem2.setCost(-1);
	stockItem2.setTotalCost();

	cout << "\nItem number: " << stockItem2.getItemNumber() << endl;
	cout << "Quantity   :  " << stockItem2.getQuantity() << endl;
	cout << "Cost       :  " << stockItem2.getCost() << endl;
	cout << "Total Cost :  " << stockItem2.getTotalCost() << endl;
}

//*********************************************************************
//
//  Function:     holeScreen
// 
//  Description:  The hold screen function
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//*********************************************************************
void holdScreen()
{
	char ch;

	cout << "\nPress any key to exit... ";
	ch = getch();
}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer information function of the program
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
	cout << "Name:     Jessica Page" << endl;
	cout << "Course:   COSC-1337 Programming Fundamentals II" << endl;
	cout << "Program:  Seven"
		<< endl
		<< endl;
} // End of developerInfo

