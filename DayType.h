#pragma once
#include <string>

using namespace std;

class dayType
{
public:
	static string dayOfWeek[7];

	//Precondition - a valid day is supplied (see dayOfWeek)
	//Postcondition - stores day if valid, otherwise stores default
	void setDay(string);

	//Postcondtion - returns value of day
	string getDay() { return day; }

	//Postcondition - displays the value of day
	void print() const;

	//Returns the value of the day after
	string nextDay();

	//Returns the value of the day before
	string previousDay();

	//Precondition - nDays must be a positive integer
	//Postcondition, sets day to a day in the future
	void addDays(int nDays);

	//Constructor
	dayType(string = dayOfWeek[0]);

private:
	string day;

};