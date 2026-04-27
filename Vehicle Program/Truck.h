#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	double towingCapacity;
public:
	Truck(string manufacturer, int year, double towingCapacity);
	double getTowingCapacity() const;
	void setTowingCapacity(double towingCapacity);
	void displayInfo() const;
};