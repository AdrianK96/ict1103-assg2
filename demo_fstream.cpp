#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

struct cust_particulars
{
	string name;
	int chkiday;		  // Checkin Day
	int chkimonth;		// Checkin Month
	int chkiyear;		  // Checkin Year
	int chkoday;		  // Checkout Day
	int chkomonth;    // Checkout Month
	int chkoyear;    // Checkout Year
	char nationality;
	string icno;
	string passportno;
	string contactno;
	string email;
	int age;
} customer;

int main()
{
	// Current date/time based on current system
	time_t now = time(0);
	
	// Convert now to string form
	char* currentdate = ctime(&now);
	
	/* ======================================================================= */
	ofstream writeFile; // Write data into text file
	
	// ios::out - Open for output operations.
	// ios::ate - Set the initial position at the end of the file. If this flag is not set to any value, the initial position is the beginning of the file.
	// ios::app - All output operations are performed at the end of the file, appending the content to the current content of the file.
	// OR (|) operator combines the flags ios
	// Opens the text file info.txt for data writing
	writeFile.open("info.txt", ios::out | ios::ate | ios::app);
	
	// If file is successfully opened, then continue operation
	if(writeFile.is_open())
	{
		writeFile << "=====================\n";
		writeFile << "Customer name list \n";
		writeFile << "=====================\n";
		writeFile << "Date generated: " << currentdate << "\n";
		while(customer.name!="0")
		{
			cout << "Enter customer name: ";
			getline(cin, customer.name);
		
			if(customer.name=="0")
				writeFile << "";
			else
				writeFile << customer.name << "\n";
			
		}
		
		cout << "Data has been written into text file!";
		writeFile.close();

	}
	// If file has failed to open, display appropriate error message
	else
	{
		cerr << "ERROR! File not found.";
	}
	
	return 0;
}
