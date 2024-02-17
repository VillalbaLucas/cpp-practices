#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdio.h>
#include <iostream>

#include "../utils/print.h"

using namespace std;

void remove(int array[], int size);
void printArray(int array[], int size);

void remove(int array[], int pos, int &size){
    for (int i = pos; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
}

void printArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            print("{ ");
        cout << array[i] << ", ";
        if (i == size - 1)
            println("}");
    }
}


#endif