//
// Created by floodd on 13/03/2023.
//

#include "Clock.h"
Clock::Clock()
{
    hrs = min =sec = 0;
}
Clock::Clock(int hrs, int min, int sec)
{
    this->hrs = hrs;
    this->min = min;
    this->sec = sec;
}

void Clock::displayCurrentTime()
{
    std::cout << hrs << ":"<<min<<":"
    <<sec<<std::endl;
}
std::string Clock::getCurrentTime()
{
    return std::to_string(hrs) + ":"+
            std::to_string(min) + ":"+
            std::to_string(sec);
}

void Clock::resetClock()
{
    hrs = min = sec = 0;
}
void Clock::setTime( int hh, int mm, int ss )
{
    this->hrs = hh;
    this->min = mm;
    this->sec = ss;
}