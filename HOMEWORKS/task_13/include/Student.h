#pragma once

#include <iostream>
#include <vector>
#include "Grade.h"

class Grade;

class Student 
{
private:
    static int nextID;
    int studentID;
    std::vector<Grade*> grades;

public:
    Student(int id);
    int getStudentID() const;
    void addGrade(Grade* grade);
    void print() const;
};

