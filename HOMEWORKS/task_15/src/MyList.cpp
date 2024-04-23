#include <iostream>
#include <cstring>
#include "MyList.h"

using namespace std;


void init(MyList* list, const char* string)
{
    list->listName = string;
    list->head = nullptr;
}

void append(MyList* list, const char* string)
{
    if(list->head == nullptr)
    {
        list->head = new Node;
        list->head->data = new char[strlen(string) + 1];
        strcpy(list->head->data, string);
        list->head->next = nullptr;
    }
    else
    {
        Node* curr = new Node;
        curr->data = new char[strlen(string) + 1];
        strcpy(curr->data, string);
        curr->next = list->head;
        list->head = curr;
    }
}

bool empty(const MyList* ptr)
{
    if (ptr->head == nullptr)
        return true;
    else
        return false;
}

void print(const MyList* ptr)
{
    Node* curr = ptr->head;
    while(curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}