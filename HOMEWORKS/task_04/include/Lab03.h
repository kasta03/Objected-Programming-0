#ifndef LAB_03
#define LAB_03

#include <iostream>
#include <cstring>

using namespace std;

void AddStudent(int *numberOfStudents, char ***namesList, int **yearsList, const char *name, int year)
{
        if (*numberOfStudents == 0)
        {
                *yearsList = new int[1];
                **yearsList = year;
                *namesList = new char *[1];
                **namesList = new char[strlen(name) + 1];
                strcpy(**namesList, name);
        }
        else
        {
                int *newYearsList = new int[*numberOfStudents + 1];
                char **newNamesList = new char*[*numberOfStudents + 1];
                for (int i = 0; i < *numberOfStudents; i++)
                {
                        *(newYearsList + i) = (*(*yearsList) + i);
                        *(newNamesList + i) = (*(*namesList) + i);
                }
                delete[] *yearsList;
                delete[] **namesList;
                *yearsList = newYearsList;
                *namesList = newNamesList;
                *(newYearsList + *numberOfStudents) = year;
                (*(*namesList + *numberOfStudents)) = new char[strlen(name) + 1];
                strcpy((*(*namesList + *numberOfStudents)), name);
        }
}

void Cat(int n, char** namesList)
{
    for (int i = 0; i < n; i++)
    {
        cout << (*namesList)[i] << endl;
    }
}

void Cat(int n, int* yearsList)
{
    for (int i = 0; i < n; i++)
    {
        cout << yearsList[i] << endl;
    }
}


#endif