#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "This program calculates the total ticket sales after each game." << endl;

	float premium, sideline, box, generalAdmission, totalSaleAmount;
	cout << fixed << showpoint << setprecision(2);

	cout << "\n\nTicket Type" << "\t\tTicket Price" << "\tTickets Sold" << endl;
	cout << "\nPremium" << "\t\t\tPhp 250.00" << "\t";
	cin >> premium;
	cout << "\nSideline" << "\t\tPhp 100.00" << "\t";
	cin >> sideline;
	cout << "\nBox" << "\t\t\tPhp 50.00" << "\t";
	cin >> box;
	cout << "\nGeneral Admission" << "\tPhp 25.00" << "\t";
	cin >> generalAdmission;

	cout << "\n\nTicket Type" << "\t\tTotal Ticket Price";
	cout << "\n\nPremium" << "\t\t\tPhp " << premium * 250;
	cout << "\nSideline" << "\t\tPhp " << sideline * 100;
	cout << "\nBox" << "\t\t\tPhp " << box * 50;
	cout << "\nGeneral Admission" << "\tPhp " << generalAdmission * 25;

	totalSaleAmount = (premium * 250) + (sideline * 100) + (box * 50) + (generalAdmission * 25);

	cout << "\n\n\t\t\tTotal Sale Amount: Php " << totalSaleAmount;

	_getch();
	return 0;
}