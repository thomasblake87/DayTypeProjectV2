#include <iostream>
#include <string>
#include "dateType.h"
using namespace std;

int main()
{
	dateType date;
	date.setDate(1, 1, 1900);

	cout << "Default constructor: ";
	date.print();


	int month, day, year;
	cout << "You will enter your own date." << endl;
	cout << "Month: ";
	cin >> month;
	cout  << "Day: ";
	cin >> day;
	cout  << "Year: ";
	cin >> year;

	date.setDate(month, day, year);

	cout << "Constructor: ";
	date.print();

	cout << "Number of days passed: ";
	cout << date.daysPassed() << endl;
	cout << "Number of days left in the year: ";
	cout << date.daysUntil() << endl;

	cout << "Number of days in month: ";
	cout << date.daysInMonth(year, month) << endl;

	int days;
	cout << "How many days in the future would you like to advance? ";
	cin >> days;

	date.setFutureDate(days);

	cout << "After " << days << " days, the date will be: ";
	date.print();

	cout << "Reseting year to 2000: ";
	year = 2000;
	date.setDate(month, day, year);
	cout << year << endl;
	date.print();

	cout << "Reseting month to 2: ";
	month = 2;
	date.setDate(month, day, year);
	cout << month << endl;
	date.print();

	cout << "Reseting day to 29: ";
	day = 29;
	date.setDate(month, day, year);
	cout << day << endl;
	date.print();

	cout << "Reseting year to 2001: ";
	year = 2001;
	date.setDate(month, day, year);
	cout << year << endl;
	date.print();
}