#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	int doors;
public:
	Car(string manufacturer, int year, int doors);
	int getDoors() const;
	void setDoors(int doors);
	void displayInfo() const;
};

