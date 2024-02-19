#ifndef ARITMETHIC_H
#define ARITMETHIC_H

#include <iostream>

void swap(int& a, int& b);

void swap(int& a, int& b){
     a += b;
     b = a-b;
     a -= b;
}

#endif