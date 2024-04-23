// Array.cpp
#include "Array.h"
#include <iostream>

int* InitArray(int size) {
    return new int[size];
}

void CreateSequence(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += i;
        array[i] = sum;
    }
}

int* ChangeArraySize(int* array, int oldSize, int newSize) {
    int* newArray = new int[newSize];
    for (int i = 0; i < oldSize; ++i) {
        newArray[i] = array[i];
    }
    delete[] array; // Zwolnij starą tablicę
    return newArray;
}

void DeleteArray(int* array) {
    delete[] array;
}
