#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdio.h>
#include <iostream>

#include "../utils/print.h"
#include "const.h"

using namespace std;

void remove(int array[], int pos, int& size);
void printArray(int array[], int size);
void pushStart(int array[], int value, int &size);
void pushEnd(int array[], int value, int &size);
void pop(int& size);

void pushEnd(int array[], int value, int &size){
    array[size++] =  value;
}

void pop(int& size){
    if (size != 0)
        size--;
    else
        println("minimal size...");
}

void pushStart(int array[], int value, int &size){
    if (size < TAM){
        size++;
        for (int i = size; i > 0; i--){
            array[i] = array[i-1];
        }
        array[0] = value;
    }
}

void remove(int array[], int pos, int& size)
{
    for (int i = pos; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
}

void printArray(int array[], int size)
{
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