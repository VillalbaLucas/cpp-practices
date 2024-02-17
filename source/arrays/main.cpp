#include <iostream>
#include <stdio.h>

#include "arrays.h"
#include "../utils/print.h"

using namespace std;

void printOptions();
void menu(int array[], int &size);


const int TAM = 100;

int main(){
    int size = 12;
    int array[TAM]{1,2,3,4,5,6,7,8,9,10,11,12};
    
    printArray(array, size);
    while (true){
        menu(array, size);
    }
    
}

void menu(int array[], int &size){
    int option;
    printOptions();
    cin >> option;

    switch (option){
    case 1: 
            int value;
            print("Agregar elemento, valor: ");
            cin >> value;
            push(array, value, size);
            printArray(array, size);
        break;
    case: 
         
    default:
        println("exit...");
        break;
    }
}

void printOptions(){
    println("\nOptions: ");
    println("1. push");
}
