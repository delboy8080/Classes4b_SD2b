//
// Created by floodd on 13/03/2023.
//

#ifndef CLASSES4B_CLOCK_H
#define CLASSES4B_CLOCK_H
#include <iostream>

class Clock {
    int hrs, min, sec;
public:
    Clock();
    Clock(int hrs, int min, int sec);
    void displayCurrentTime();
    std::string getCurrentTime();
    void resetClock() ; // i.e. to 00:00:00
    void setTime( int hh, int mm, int ss );
};


#endif //CLASSES4B_CLOCK_H
