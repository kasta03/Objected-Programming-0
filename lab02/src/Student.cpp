#include "Student.h"
#include <iostream>

TStudent* InitTStudent() {
    TStudent* student = new TStudent;
    student->_id = 0;
    student->_next = nullptr;
    return student;
}

void show(const TStudent* head) {
    std::cout << "Aktualny stan listy:" << std::endl;
    if (head == nullptr) {
        std::cout << "Lista jest pusta" << std::endl;
    }
    else {
        const TStudent* current = head;
        while (current != nullptr) 
        {
            std::cout << "id: " << current->_id << std::endl;
            current = current->_next;
        }
        std::cout << std::endl;
    }
}

void push_front(TStudent** head, int id) {
    TStudent* newStudent = new TStudent;
    newStudent->_id = id;
    newStudent->_next = *head;
    *head = newStudent;
}

void clear(TStudent** head) {
    while (*head != nullptr) {
        TStudent* temp = *head;
        *head = (*head)->_next;
        delete temp;
    }
}