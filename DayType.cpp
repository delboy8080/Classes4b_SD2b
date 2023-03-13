//
// Created by floodd on 02/03/2023.
//

#include "DayType.h"
DayType::DayType()
{
    currentDay = 0;
}
DayType::DayType(unsigned int day)
{
    currentDay = day%7;
}
void DayType::setCurrentDay(unsigned int day)
{
    currentDay = day%7;
}
void DayType::printCurrentDay()
{
    std::cout << "The Current Day is "<< days[currentDay] <<std::endl;
}
std::string DayType::getCurrentDay()
{
    return days[currentDay];
}
std::string DayType::getNextDay()
{
    return days[(currentDay+1)%7];
}
std::string DayType::getPreviousDay()
{
    return days[(currentDay-1+7)%7];
}
std::string DayType::getFutureDay(int x)
{
    return days[(currentDay+x)%7];
}