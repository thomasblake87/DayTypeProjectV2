#pragma once
class dateType
{
public:
	dateType(int month = 1, int day = 1, int year = 1900);
	void setDate(int month, int day, int year);
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);

	int getMonth() const;
	int getDay() const;
	int getYear() const;

	bool leapYear(int year) const;
	int daysInMonth(int year, int month) const;
	void print() const;
	int daysPassed() const;
	int daysUntil() const;
	void setFutureDate(int days);
private:
	int month;
	int day;
	int year;

	int daysInYear(int year) const;
};