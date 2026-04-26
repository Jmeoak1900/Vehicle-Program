#include "car.h"
#include <iostream>

Car::Car(string manufacturer, int year, int carDoors) : Vehicle(manufacturer, year)
{
	doors = carDoors;
}

int Car::getDoors() const
{
	return doors;
}

void Car::setDoors(int carDoors)
{
	doors = carDoors;
}

void Car::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << doors << endl;
}