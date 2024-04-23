#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

struct TStudent
{
    int _id;
    TStudent *_next;
};

void show(TStudent *head)
{
    cout << "Aktualny stan listy: " << endl;
    if (head == nullptr)
    {
        cout << "Lista jest pusta" << endl;
    }
    else
    {
        while (head != nullptr)
        {
            cout << "id: " << head->_id << endl;
            head = head->_next;
        }
    }
}

TStudent *InitTStudent(void)
{
    TStudent *student = new TStudent;
    student->_id = 0;
    student->_next = nullptr;
    return student;
}

void push_front(TStudent** head, int _id)
{
    TStudent* newStud = new TStudent;
    newStud->_next = *head;
    *head = newStud;
    (*head)->_id = _id;
}

void clear(TStudent** head)
{
    while(*head != nullptr)
    {
        TStudent* curr = *head;
        *head = (*head)->_next;
        delete curr;
    }
}

#endif