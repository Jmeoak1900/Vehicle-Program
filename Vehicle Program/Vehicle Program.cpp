// Vehicle Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	int year;
	string manufacturer;
	cout << "\nVehicle:\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	year = getGenericNumInput<int>();
	Vehicle v(manufacturer, year);
	v.displayInfo();

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