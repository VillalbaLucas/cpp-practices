#include <stdio.h>
#include <iostream>

#include "matriz.h"

using namespace std;

const int COL = 100;
const int ROW = 100;

int main(){
    int row=3, col=3;
    int matriz[ROW][COL]{{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};

    printMatriz(matriz, row, col);
    return 0;
}
