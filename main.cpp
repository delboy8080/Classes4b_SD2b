#include <iostream>
#include <iomanip>
#include "Student.h"
#include "DayType.h"
#include "Clock.h"

using namespace std;

void display_student_by_value(Student stud)
{
    cout<<setw(15) << "Value" << setw(5) << stud.getId() << setw(20) <<stud.getName() << setw(5)
    << stud.getAge() << setw(8) << stud.getHeight() <<endl;
}
void display_student_by_reference(const Student &stud)
{
    cout<<setw(15) << "Reference" << setw(5) << stud.getId() << setw(20) <<stud.getName() << setw(5)
         << stud.getAge() << setw(8) << stud.getHeight() <<endl;
}
void display_student_by_pointer(const Student *stud)
{
    cout<<setw(15) << "Pointer" << setw(5) << stud->getId() << setw(20) <<stud->getName() << setw(5)
         << stud->getAge() << setw(8) << stud->getHeight() <<endl;
}
int Day_main() {
    DayType dt(6);
    cout << "Current Day: " ;
    dt.printCurrentDay();
    cout << "Next Day:" <<dt.getNextDay() <<endl;
    cout << "Previous Day:"
    <<dt.getPreviousDay() <<endl;

    dt.setCurrentDay(0);
    cout << "Current Day: " ;
    dt.printCurrentDay();
    cout << "Next Day:" <<dt.getNextDay() <<endl;
    cout << "Previous Day:"
         <<dt.getPreviousDay() <<endl;

    dt.setCurrentDay(2);
    cout << "+13 days: " << dt.getFutureDay(13);
    return 0;
}

int main()
{
    Clock clock(23,59,59);
    clock.displayCurrentTime();
    clock.incrementSecondsBy(2);
    cout << clock.getCurrentTime()<<endl;
    clock.resetClock();
    clock.displayCurrentTime();
    clock.setTime(12,30,15);
    clock.displayCurrentTime();

}

void studentMain()
{
    Student stud1;
    Student stud2(2, "Tony Stark", 55, 1.6);

    cout <<setw(15) << "" << setw(5) <<"ID"<< setw(20) <<"Name" << setw(5)
         << "Age" << setw(8) << "Height" <<endl;
    display_student_by_value(stud1);
    display_student_by_value(stud2);
    display_student_by_reference(stud1);
    display_student_by_reference(stud2);
    display_student_by_pointer(&stud1);
    display_student_by_pointer(&stud2);

    Student *stud3 = new Student(3, "Clint Barton", 45, 1.8);
    display_student_by_pointer(stud3);
    cout << "Name: "  << stud3->getName()<<endl;
    stud3->setHeight(1.75);
    display_student_by_pointer(stud3);
    display_student_by_reference(*stud3);
    display_student_by_value(*stud3);
    delete stud3;
    stud3 = nullptr;
}