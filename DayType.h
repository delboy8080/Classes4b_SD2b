//
// Created by floodd on 02/03/2023.
//
#include <string>
#include <iostream>
#ifndef CLASSES4B_DAYTYPE_H
#define CLASSES4B_DAYTYPE_H


class DayType
{
private:
    std::string *days = new std::string[7]{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"
                                            ,"Friday", "Saturday"};
    int currentDay ;
public:
    DayType();
    DayType(unsigned int day);
    void setCurrentDay(unsigned int day);
    void printCurrentDay();
    std::string getCurrentDay();
    std::string getNextDay();
    std::string getPreviousDay();
    std::string getFutureDay(int x);

   ~DayType()
   {
       delete[] days;
   }
};


#endif //CLASSES4B_DAYTYPE_H
