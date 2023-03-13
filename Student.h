//
// Created by floodd on 02/03/2023.
//

#ifndef CLASSES4B_STUDENT_H
#define CLASSES4B_STUDENT_H
#include<string>

//id, name, age, height.
class Student
{
    int id;
    std::string name;
    int age;
    double height;

public:
    Student();
    Student(int id, std::string name, int age, double height);

    int getId() const;
    std::string getName()const;
    int getAge() const;
    double getHeight()const;

    void setId(int id);
    void setName(std::string name);
    void setAge(int age);
    void setHeight(double height);

};
#endif //CLASSES4B_STUDENT_H
