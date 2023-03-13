#include "Student.h"

Student::Student()
{
    this->id = 1;
    this->name = "Jane Doe";
    this->age = 21;
    this->height = 1.4;
}
Student::Student(int id, std::string name, int age, double height)
: id{id}, name{name}, age{age}, height{height}
{}

int Student::getId() const
{
    return id;
}
std::string Student::getName()const
{
    return name;
}
int Student::getAge() const
{
    return age;
}
double Student::getHeight()const
{
    return height;
}

void Student::setId(int id)
{
    this->id = id;
}
void Student::setName(std::string name)
{
    this->name = name;
}
void Student::setAge(int age)
{
    this->age = age;
}
void Student::setHeight(double height)
{
    this->height = height;
}
