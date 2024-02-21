#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdio.h>
#include <iostream>

#include "../utils/print.h"
#include "../utils/aritmethic.h"
#include "const.h"

using namespace std;

void remove(int array[], int pos, int &size);
void printArray(int array[], int size);
void pushStart(int array[], int value, int &size);
void pushEnd(int array[], int value, int &size);
void pop(int &size);
void bubbleSort(int array[], int size);
void recursiveInsertionSort(int *array, int size);
void selectionSort(int *array, int size);
int binarySearch(int *array, int value, int size);
void insertOrdered(int *array, int value, int &size);
void desplazar(int *array, int pos, int &size);

void desplazar(int *array, int pos, int &size){
    for (int i = size; i > pos; i--){
        array[i] = array[i - 1];
    }
    array[pos] = -1;
    size++;
}

void insertOrdered(int *array, int value, int &size){
    bool flag = true; 
    int i=0;

    while(i<size && flag){
        if(value >= array[i])
            i++;
        else {
            desplazar(array, i, size);
            array[i] = value;
            flag = false;
        }
    }
    if(i==size){
        size++;
        array[i]=value;
    }
}

int binarySearch(int *array, int value, int size)
{
    bool flag = true;
    int index=-1;
    int middle = size/2, tope = size, base = 0;

    while (flag){
        if(middle > tope || middle < 0 || middle == base){
            flag = false;
        }
        
        if(value < array[middle]){
            if(value == array[middle-1]){
                flag = false;
                index = middle-1;
            }
            size = middle;
            middle=(size+base)/2;
        }else{
            if(value == array[middle]){
                flag = false;
                index = middle;
            }
            base = middle;
            middle = (size+middle)/2;
        }
    }
    return index;
}


void selectionSort(int *array, int size){
    for(int i=0; i<size; i++){
        int minor = array[i], pos;
        for (int j = i; j < size; j++){
            if(minor > array[j]){
                pos = j;
                minor = array[j];
            }
        }
        if(minor < array[i])
            swap(array[i], array[pos]);
    }
}

void recursiveInsertionSort(int *array, int size){
    for (int i = 1; i < size; i++){
        if (array[i] < array[i - 1]){
            swap(array[i], array[i - 1]);
            recursiveInsertionSort(array, i);
        }
    }
}

void bubbleSort(int array[], int size)
{
    while (size >= 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
                swap(array[i], array[i + 1]);
        }
        size--;
    }
}

void pushEnd(int array[], int value, int &size)
{
    array[size++] = value;
}

void pop(int &size)
{
    if (size != 0)
        size--;
    else
        println("minimal size...");
}

void pushStart(int array[], int value, int &size)
{
    if (size < TAM)
    {
        size++;
        for (int i = size; i > 0; i--)
        {
            array[i] = array[i - 1];
        }
        array[0] = value;
    }
}

void remove(int array[], int pos, int &size)
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