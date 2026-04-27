#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string manufacturer, int year)
{
	this->manufacturer = manufacturer;
	this->year = year;
}

string Vehicle::getManufacturer() const
{
	return manufacturer;
}

int Vehicle::getYear() const
{
	return year;
}

void Vehicle::setManufacturer(string manufacturer)
{
	this->manufacturer = manufacturer;
}

void Vehicle::setYear(int year)
{
	this->year = year;
}

void Vehicle::displayInfo() const
{
	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << year << endl;
}