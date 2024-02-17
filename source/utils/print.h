#ifndef PRINT_H
#define PRINT_H
#include <stdio.h>
#include <iostream>

using namespace std;

template<typename T>
void print(const T& output){
    cout << output;
}
template<typename T>
void println(const T& output){
    cout << output << endl;
}
#endif