#ifndef MY_HEADER_H
#define MY_HEADER_H
#include<iostream>
void inputMatrix(int **matrix, int rows, int cols) {
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


#endif
