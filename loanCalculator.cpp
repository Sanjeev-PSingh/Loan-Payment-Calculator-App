/*
	Sanjeev Singh

	lonaCalculator.cpp

	Take the users loan amount, annual interest rate, and term of the loan
	and displays the expected monthly payment, total amount 
	to be paid, and the total interst to be paid

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Variables
string Name, Institution, Date;
double loanAmount, interest, monthlyPayment, total, totalInt, rate, rateFormula, monthint;
int No_payments, term;

//Main Code
int main()
{
	//Title and User inputs 

	cout << "Loan Payment Calculator ..." << endl;
	cout << "" << endl;
	cout << "Please enter the following information:" << endl;
	cout << "" << endl;
	cout << "Borrower's Name:               ";
	getline(cin, Name);
	cout << "Loaning Institution:           ";
	getline(cin, Institution);
	cout << "" << endl;
	cout << "Loan Amount ($):               ";
	cin >> loanAmount;
	cout << "Annual Interest Rate (%):      ";
	cin >> interest;
	cout << "Term of Loan (years):          ";
	cin >> term;
	cout << "" << endl;
	cin.ignore(1, '/n');
	cout << "Date of Report:                ";
	getline(cin, Date);
	cout << "" << endl;
	cout << "-----------------------------------------------------" << endl;

	cout << "Loan Payment Summary Report";
	cout << "" << endl;
	cout << Institution << setw(35) << Name << endl;
	cout << "Annual Interest Rate: " << interest << "%" << endl;
	cout << "Date: " << Date << endl;
	cout << "" << endl;
	cout << "Loan Amount: " << setw(21) << "                             $ " << setprecision(2) << fixed << loanAmount << endl;

	// Math to find vaues for Monthly interest rate, 
	// Monthly Payment, Total amount to pay and Total interst
	rate = (interest / 12)/ 100;
	No_payments = term * 12;
	rateFormula = rate + 1;
	monthlyPayment = ((rate * pow(rateFormula, No_payments)) / (pow(rateFormula, No_payments) - 1)) * loanAmount;
	total = monthlyPayment * No_payments;
	totalInt = total - loanAmount;
	monthint = interest / 12;
	
	cout << "Monthly Interest Rate:           " << setw(19) << setprecision(2) << monthint << "%" << endl;
	cout << "Number of Payments:           " << setw(23) << No_payments << endl;
	cout << "Monthly Payment: " << "                         $ " << setw(9) << setprecision(2) << monthlyPayment << endl;
	cout << "" << endl;
	
	
	cout << "Total Amount to Pay: " << "                     $ " << setw(9) << setprecision(2) << total << endl;
	cout << "Total Interest: " << "                          $ " << setw(9) << setprecision(2) << totalInt;

	cout << "" << endl;
	cout << "-----------------------------------------------------" << endl;

	return 0;
}