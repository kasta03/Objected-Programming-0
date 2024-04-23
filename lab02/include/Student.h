#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

// struktura TStudent, zawiera dane "_id" i wskaznik do nastepnego elementu listy
struct TStudent 
{
    int _id;
    TStudent* _next;
};

// inicjalizuje studenta
TStudent* InitTStudent();

// funkcja wyswietla zawartosc listy
void show(const TStudent* head);

// przesuwa studenta w liscie
void push_front(TStudent** head, int id);

// czysci zaalokowana dynamicznie pamiec dla elementow listy
void clear(TStudent** head);

#endif