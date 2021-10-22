#include <iostream>
#include <iomanip>
#include "UserInput.h"
using namespace std;

void UserInfo() {

	//Declare variables for input
	float initialInvestment, monthlyDeposit, annualInterest, months, years;

	//Declare variables to store year end total amount, interest, and year end interest
	float totalAmount, interestAmount, yearlyTotalInterest;

	//Get user input
	cout << endl << endl << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount: $";
	cin >> initialInvestment;
	cout << endl<< "Monthly Deposit: $";
	cin >> monthlyDeposit;
	cout << endl << "Annual Interest: %";
	cin >> annualInterest;
	cout << endl << "Number of years: ";
	cin >> years;
	months = years * 12;

	system("PAUSE");


//Update total amount to initial investment
totalAmount = initialInvestment;

void CalculationIntrestOnly(); {

	//Display year end data if no monthly deposits
	cout << endl << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	//Calculate yearly interest and year end total
	for (int i = 0; i < years; i++) {
		//Calculate yearly interest amount
		interestAmount = ((totalAmount) * (annualInterest / 100));

		//Calculate year end total
		totalAmount = totalAmount + interestAmount;

		//Show decimal as dollar amount correctly with set precision to 2 decimal places
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << interestAmount << endl;
	}
}

//Calculate monthly interest and month end total
totalAmount = initialInvestment;

void CalculationMonthly(); {

	//Display year end data with monthly deposits
	cout << endl << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	//Calculate yearly interest and year end total
	for (int i = 0; i < years; i++) {
		//Initialize yearly interest to 0
		yearlyTotalInterest = 0;

		for (int j = 0; j < 12; j++) {
			//Calculate monthly interest amount
			interestAmount = (((totalAmount + monthlyDeposit) * (annualInterest / 100)) / 12);

			//Calculate month end interest
			yearlyTotalInterest = yearlyTotalInterest + interestAmount;

			//Calculate month end total
			totalAmount = totalAmount + monthlyDeposit + interestAmount;
		}

		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearlyTotalInterest << endl;
		}
	}
}
