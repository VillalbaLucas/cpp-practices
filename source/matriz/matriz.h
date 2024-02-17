#ifndef MATRIZ_H
#define MATRIZ_H

#include "stdio.h"

#include "../utils/print.h"

void printMatriz(int matriz[][100], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            std::cout << matriz[i][j] << ", ";
        print("\n");
    }
}

#endif