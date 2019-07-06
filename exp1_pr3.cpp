#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float netBalance, payment, d1, d2, averageDailyBalance, interest, interestRate;
	cout << fixed << showpoint << setprecision(2);

	cout << "This program calculates the interest on a credit card's unpaid balance using the average daily.";

	cout << "\n\nEnter Net Balance: Php ";
	cin >> netBalance;
	cout << "\nEnter Payment: Php ";
	cin >> payment;
	cout << "\nEnter the number of days in the billing cycle: ";
	cin >> d1;
	cout << "\nEnter the number of days payment is made before the billing cycle: ";
	cin >> d2;

	averageDailyBalance = ((netBalance * d1) - (payment * d2)) / d1;

	cout << "\nEnter the Interest Rate: ";
	cin >> interestRate;

	interest = (averageDailyBalance * interestRate);

	cout << "\n\nThe interest on the unpaid balance is Php " << interest << ".";

	_getch();
	return 0;
}