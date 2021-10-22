#include <iostream>
#include <iomanip>
#include "Display.h"
#include "UserInput.h"


using namespace std;

/* Author - Dane Clark
   Date - 09/29/21
   Airgead Invenstment Banking APP
   
   This program will call from .h files and gather user input on
   inital deposit amount, monthly deposite amount, annual intrest rate,
   and lenth of investment in years. Then that information will be calculated to display
   investment amount without monthly deposites and with monthy deposits, giving
   the user a year by year view of total investment dollars.
   */



int main() {


	char again = 'y'; // set default so program will run

	while (again != 'q') {

		DisplayMenu(); // call the menu function
		UserInfo();	   // calls input function and calculation

		// asks user if they would like to coninue or quit app
		cout << endl << endl << "Would you like to input new numbers? Press any key to continue. Or hit 'q' to quit. ";
		cin >> again;

		// how to quit
		if (again == 'q') {
			cout << endl << endl << "Goodbye.";
			system("PAUSE");
			return 0;
			
		}
		
	}
}

