//	ICT1103_Assignment2.cpp : Defines the entry point for the console application.
//	==============================================================================
//	IICP DICTN
//	ICT1103 Structured Programming
//	AUGUST 2014
//
//	Collaborative Authors: Adrian Khor, Jasmine Chang, Adrian Tai, Fong Zhijing, Elvis Chew
//	Created date: 19/10/2014 23:22
//	Last revised: 23/10/2014 22:10
//

/* Precompiled header, imported header(if any), imported libraries */
#include "stdafx.h"		// Microsoft Visual C++ precompiled header
#include <iostream>		// Standard I/O library
#include <iomanip>		// I/O Manipulation library
#include <string>		// String library
#include <fstream>		// File stream library

using namespace std;

/* Function prototypes	*/
void menu_CompanyTitle(string cname);
void menu_MainMenu();


/*	Main function #START#*/
int _tmain(int argc, _TCHAR* argv[])
{
	const string compName="DOCEL HOTEL (M) PENANG";
	/* Reusable error message strings START */
	// Error messages strings are local to main function, hence it's not accessible by other function

	const string errttl = "ERROR!";

	const string errmsg [] = {
	"Error!", // errmsg[0]
	"", // errmsg[1]
	"", // errmsg[2]
	};

	/* Reusable error message strings END */
	
	menu_CompanyTitle(compName);
	menu_MainMenu();
	
	return 0;
}
/*	Main function #END#	*/

/* Menu - Company Title */
void menu_CompanyTitle(string cname)
{
	cout << "\t\t" << "***********************************" << endl;
	cout << "\t\t" << "**    " << cname << "	 **" << endl;
	cout << "\t\t" << "**	RESERVATION SYSTEM	 **" << endl;
	cout << "\t\t" << "***********************************" << endl << endl;
	cout << "\t" << "WELCOME TO " << cname << " RESERVATION SYSTEM!" << endl;
}

void menu_MainMenu()
{
	cout << "\t\t" << "Program Main Menu: " << endl;
	cout << "\t\t" << "(Type the corresponding number to perform operation.)" << endl;
	cout << endl;

	cout << "\t\t" << "1. " << endl;
}
