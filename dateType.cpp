#include "dateType.h"
#include <iostream>

using namespace std;

dateType::dateType(int month, int day, int year) {
	setDate(month, day, year);
}

void dateType::setDate(int month, int day, int year) {
	setMonth(month);
	setYear(year);
	setDay(day);
}

void dateType::setMonth(int m) {
	if (m >= 1 && m <= 12) {
		month = m;
	}
	else {
		cout << "Invalid month, defaulting to January" << endl;
		month = 1;
	}
}

void dateType::setDay(int d) {
	if (d >= 1 && d <= daysInMonth(year, month)) {
		day = d;
	}
	else {
		cout << "Invalid day, defaulting to 1" << endl;
		day = 1;
	}
}

void dateType::setYear(int y) {
	if (y >= 1900) {
		year = y;
	}
	else {
		cout << "Invalid year, defaulting to 1900" << endl;
		year = 1;
	}
}

int dateType::getMonth() const{
	return month;
}

int dateType::getDay() const {
	return day;
}

int dateType::getYear() const {
	return year;
}

bool dateType::leapYear(int year) const {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}
}

int dateType::daysInMonth(int year, int month) const {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		return 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	else {
		if (leapYear(year)){
			return 29;
		}
		else {
			return 28;
		}
	}
}

void dateType::print() const {
	cout << month << "-" << day << "-" << year << endl;
}

int dateType::daysPassed() const {
	int days = day;
	for (int i = 1; i < month; ++i) {
		days += daysInMonth(year, i);
	}
	return days;
}

int dateType::daysUntil() const {
	return daysInYear(year) - daysPassed();
}

void dateType::setFutureDate(int days) {
	int totalDays = daysPassed() + days;
	while (totalDays > daysInYear(year)) {
		totalDays = totalDays - daysInYear(year);
		year++;
	}
	int m = 1;
	while (totalDays > daysInMonth(year, m)) {
		totalDays -= daysInMonth(year, m);
		m++;
	}
	month = m;
	day = totalDays;
}

int dateType::daysInYear(int year) const {
	if (leapYear(year)) {
		return 366;
	}
	else {
		return 365;
	}
}