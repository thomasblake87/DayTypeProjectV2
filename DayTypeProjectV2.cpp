#include <iostream>
#include <string>
#include "DayType.h"
using namespace std;

int main()
{
    string startingDay;
    cout << "Please input the day you would like to start with:" << endl;
    cin >> startingDay;

    dayType day(startingDay);

    cout << "Starting day: ";
    day.print();

    cout << "Previous day: ";
    day.previousDay();
    cout << day.previousDay() << endl;

    cout << "Next day: ";
    day.nextDay();
    cout << day.nextDay() << endl;

    dayType day2("Monday");

    cout << "From constructor with parameters: " << day2.getDay() << endl;

    cout << "After adding 3 days: ";
    day2.addDays(3);
    day2.print();

    cout << "After adding 30 days: ";
    day2.addDays(30);
    day2.print();

    cout << "After adding 365 days: ";
    day2.addDays(365);
    day2.print();

    return 0;

}