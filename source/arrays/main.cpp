#include <iostream>
#include <stdio.h>

#include "arrays.h"
#include "../utils/print.h"
#include "const.h"

using namespace std;

void printOptions();
void menu(int array[], int &size);

int main()
{
    int size = 12;
    int array[TAM]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printArray(array, size);
    while (true)
    {
        menu(array, size);
    }
}

void menu(int array[], int &size)
{
    int option;
    printOptions();
    cin >> option;

    switch (option)
    {
    case 1:
        int value;
        print("Agregar elemento, valor: ");
        cin >> value;
        pushStart(array, value, size);
        printArray(array, size);
        break;
    case 2:
        println("Popeando array... ");
        pop(size);
        printArray(array, size);
        break;
    case 3:
        print("Agregar elemento al final, valor: ");
        cin >> value; 
        pushEnd(array, value, size);
        printArray(array, size);
        break;
    default:
        println("exit...");
        break;
    }
}

void printOptions()
{
    printlnAll(
        "\nOptions: ",
        "1. pushStart",
        "2. Pop array");
}
