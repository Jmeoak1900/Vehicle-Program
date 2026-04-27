#include "Truck.h"
#include <iostream>

Truck::Truck(string manufacturer, int year, double cap) : Vehicle(manufacturer, year)
{
	towingCapacity = cap;
}

double Truck::getTowingCapacity() const
{
	return towingCapacity;
}

void Truck::setTowingCapacity(double cap)
{
	towingCapacity = cap;
}

void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}