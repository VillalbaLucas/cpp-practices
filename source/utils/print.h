#ifndef PRINT_H
#define PRINT_H
#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
void print(const T &output)
{
    cout << output << " ";
}
template <typename T>
void println(const T &output)
{
    cout << output << endl;
}
void printAll(){
    println("");
}
template <typename T, typename... Args>
void printAll(const T& t, const Args&... args){
    print(t);
    printAll(args...);
}
void printlnAll(){
    print("");
}
template <typename T, typename... Args>
void printlnAll(const T& t, const Args&... args){
    println(t);
    printlnAll(args...);
}

#endif