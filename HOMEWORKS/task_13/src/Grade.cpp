#include "Grade.h"

int Grade::nextID = 1;

Grade::Grade(const std::string& subj, double val, const Student& st)
    : gradeID(nextID++), subject(subj), value(val), student(st) {}

void Grade::print() const 
{
    std::cout << "ID=" << gradeID << " " << subject << " ocena=" << value << " student_ID=" << student.getStudentID() << std::endl;
}
double Grade::getValue() const 
{
    return value;
}