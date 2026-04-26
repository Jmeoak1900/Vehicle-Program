#pragma once
#include <string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year;
public:
	Vehicle(string manufacturer, int year);
	string getManufacturer() const;
	int getYear() const;
	void setManufacturer(string manufacturer);
	void setYear(int year);
	void displayInfo() const;

};

