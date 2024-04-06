#include <iostream>
#include "DayType.h"

string dayType::dayOfWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday" };

void dayType::setDay(string aDay)
{
    int index = 0;
    for (int i = 0; i < 7; i++)
    {
        if (dayOfWeek[i] == aDay)
        {
            index = i;
            break;
        }
    }
    day = dayOfWeek[index];
}

void dayType::print() const
{
    cout << day << endl;
}

string dayType::nextDay()
{
    int index;
    for (int i = 0; i < 7; ++i) {
        if (dayOfWeek[i] == day) {
            index = i;
            break;
        }
    }
    return dayOfWeek[(index + 1) % 7];
}

string dayType::previousDay()
{
    int index;
    for (int i = 0; i < 7; ++i) {
        if (dayOfWeek[i] == day) {
            index = i;
            break;
        }
    }
    return dayOfWeek[(index + 6) % 7];
}

void dayType::addDays(int nDays)
{
    int index;
    for (int i = 0; i < 7; ++i) {
        if (dayOfWeek[i] == day) {
            index = i;
            break;
        }
    }
    index = (index + nDays) % 7;
    if (index < 0) {
        index += 7;
    }
    day = dayOfWeek[index];
}

dayType::dayType(string start)
{
    setDay(start);
}