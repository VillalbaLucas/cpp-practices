#include <iostream>
#include <stdio.h>

#include "arrays.h"
#include "../utils/print.h"
#include "../utils/aritmethic.h"
#include "const.h"

using namespace std;

void printOptions();
void menu(int array[], int &size);

int main()
{
    int size = 12;
    int size_messy = 11;
    int array[TAM]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int array_messy[TAM]{0, 41, 5, 4, 232, 7, 84, 91, 10, 1, 0};

    while (true)
    {
        menu(array_messy, size_messy);
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
        printArray(array, size);
        pushStart(array, value, size);
        printArray(array, size);
        break;
    case 2:
        printArray(array, size);
        println("Popeando array... ");
        pop(size);
        printArray(array, size);
        break;
    case 3:
        print("Agregar elemento al final, valor: ");
        cin >> value;
        printArray(array, size);
        pushEnd(array, value, size);
        printArray(array, size);
        break;
    case 4:
        printArray(array, size);
        bubbleSort(array, size);
        printArray(array, size);
        break;
    case 5:
        printArray(array, size);
        recursiveInsertionSort(array, size);
        printArray(array, size);
        break;
    case 6:
        printArray(array, size);
        selectionSort(array, size);
        printArray(array, size);
        break;
    case 7:
        print("Valor a buscar en el array?: ");
        cin >>  value;
        printArray(array, size);
        printAll("index: ", binarySearch(array, value, size));
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
        "1. Push Start",
        "2. Pop array",
        "3. Push End",
        "4. Bubble Sort",
        "5. Recursive Insertion Sort",
        "6. Selection Sort",
        "7. Binary Search"
        );
}
