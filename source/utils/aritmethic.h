#ifndef ARITMETHIC_H
#define ARITMETHIC_H

#include <iostream>

void swap(int& a, int& b);
int cantDigit(int num);
int sumDigit(int num);

int sumDigit(int num){
     int sumDigits{0};
     while (num > 0){
          sumDigits+=num%10;
          num/=10;
     }
     return sumDigits;
}


int cantDigit(int num){
     int digits{0};

     while (num > 0){
          num/=10;
          digits++;            
     }
     return digits;
}

void swap(int& a, int& b){
     a += b;
     b = a-b;
     a -= b;
}

#endif