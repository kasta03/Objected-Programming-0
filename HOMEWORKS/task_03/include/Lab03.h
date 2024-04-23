#pragma once

#include <iostream>
#include <cstring>

void AddStudent(int *numberOfStudents, char ***namesList, int **yearsList, const char *name, int year)
{
    int *newYearsList = new int[*numberOfStudents + 1];
    char **newNamesList = new char *[*numberOfStudents + 1];
    for (int i = 0; i < *numberOfStudents; i++)
    {
        *(newYearsList + i) = *((*yearsList) + i);
        *(newNamesList + i) = *((*namesList) + i);
    }
    delete[] *yearsList;
    delete[] *namesList;
    *yearsList = newYearsList;
    *namesList = newNamesList;
    newYearsList [*numberOfStudents] = year;
    (*(*namesList + *numberOfStudents)) = new char[strlen(name) + 1];
    strcpy((*(*namesList + *numberOfStudents)), name);
    ++*numberOfStudents;
}

void Cat(int n, char **namesList)
{
    for (int i = 0; i < 3; ++i)
    {
        std::cout << *(namesList + i) << std::endl;
    }
}

void Cat(int n, int *yearsList)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << *(yearsList + i) << std::endl;
    }
}

void ClearList(int num, char*** names)
{
    for (int i = 0; i < num; ++i)
    {
        delete[](*names)[i];
    }
    delete[]* names;
}

void ClearList(int , int** years)
{
    delete[]* years;
}