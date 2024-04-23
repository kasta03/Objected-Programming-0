#ifndef MYLIST
#define MYLIST

#include <iostream>
#include <cstring>

using namespace std;

struct Node
{
    char* data;
    Node* next;
};

struct MyList
{
    Node* head;
    const char* listName;
};


void init(MyList* list, char* string);

void append(MyList* list, char* string);

void print(const MyList* ptr);

void insertAfter(...);

bool empty(const MyList* ptr);

void replace(MyList* list, const char* string1, const char* string2);

void removeAfter(MyList* list, const char* string1);

void clear(MyList* list);

#endif