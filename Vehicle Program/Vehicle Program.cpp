// Jonah Meoak
// CIS 1202 M01
// April 26 2026
// Vehicle Program with Inheritance for car and truck classes that doesn't actually do anything

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "car.h" // just realized I named the file "car.h" instead of "Car.h", tsk tsk tsk
#include "Truck.h"

template <typename T>
T getGenericNumInput();

using namespace std;

int main()
{
	cout << "Vehicle Program\n";

	int year;
	string manufacturer;
	cout << "\nVehicle:\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	year = getGenericNumInput<int>();
	Vehicle v(manufacturer, year);
	v.displayInfo();

	cout << "\nCar:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	year = getGenericNumInput<int>();
	int doors;
	cout << "Enter the number of doors: ";
	doors = getGenericNumInput<int>();
	Car c(manufacturer, year, doors);
	c.displayInfo();

	cout << "\nTruck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	year = getGenericNumInput<int>();
	double cargoCapacity;
	cout << "Enter the cargo capacity: ";
	cargoCapacity = getGenericNumInput<double>();
	Truck t(manufacturer, year, cargoCapacity);
	t.displayInfo();

}

template <typename T>
T getGenericNumInput()
{
	T userNum;

	cin >> userNum;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nInvalid input. Enter a number: ";
		cin >> userNum;
	}

	return userNum;
}