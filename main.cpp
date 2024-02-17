#include <iostream>
#include <stdio.h>
#include <tuple>

#include "source/arrays.h"
#include "utils/print.h"

using namespace std;

const int TAM = 100;

int main(){
    int size = 12;
    int array[TAM]{1,2,3,4,5,6,7,8,9,10,11,12};
    
    printArray(array, size);
    remove(array, 1, size);
    printArray(array, size);
}
