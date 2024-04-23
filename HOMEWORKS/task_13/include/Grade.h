#pragma once
#include <iostream>
#include "Student.h"

class Student;

class Grade 
{
private:
    static int nextID;
    int gradeID;
    std::string subject;
    double value;
    const Student& student;

public:
    Grade(const std::string& subj, double val, const Student& st);
    void print() const;
    double getValue() const;
};
