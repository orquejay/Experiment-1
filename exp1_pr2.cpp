#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float mass, density, volume;
	cout << fixed << showpoint << setprecision(2);

	cout << "This program outputs the volume of an object using G's Formula." << endl;

	cout << "\nEnter mass in grams: ";
	cin >> mass;
	cout << "\nEnter density in grams per cubic centimeter: ";
	cin >> density;
	
	volume = (4 * density) / mass;

	cout << "\nVolume of the object: " << volume << " cubic centimeters";

	_getch();
	return 0;
}