#include "Student.h"

int Student::nextID = 1;

Student::Student(int id) : studentID(id) {}

int Student::getStudentID() const 
{
    return studentID;
}

void Student::addGrade(Grade* grade) 
{
    grades.push_back(grade);
}

void Student::print() const 
{
    std::cout << "Student ID=" << studentID << " oceny:";
    std::cout << std::endl;
}






    // for (const auto& grade : grades)
    // {
    //     std::cout << " " << grade->getValue();
    // }
