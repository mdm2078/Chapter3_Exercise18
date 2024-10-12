// Chapter3_Exercise18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	// Declare variables
	double principal, rate, interest, amountInSavings;
	int timesCompounded;

	// Input for principal, interest rate, and number of times compounded
	cout << "Enter the principal amount:$";
	cin >> principal;

	cout << "Enter the interest rate (as a percentage, e.g., 4.25 for 4.25%):";
	cin >> rate;
	rate = rate / 100;  // Convert percentage to decimal

	cout << "Enter the number of times the interest is compunded:";
	cin >> timesCompounded;

	// Calculate amount in savings after interest
	amountInSavings = principal * pow((1 + rate / timesCompounded), timesCompounded);

	// Calculate interest earned
	interest = amountInSavings - principal;

	// Set percision for output
	cout << fixed << setprecision(2);

	// Output the results
	cout << "Interest Rate:" << (rate * 100) << "%" << endl;
	cout << "Time Compounded:" << timesCompounded << endl;
	cout << "Principal:$" << principal << endl;
	cout << "Interest:$" << interest << endl;
	cout << "Amount in Savings:$" << amountInSavings << endl;

	return 0;

}
