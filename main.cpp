#include "my_header.h"
#include <iostream>
using namespace std;
int main() {
    //first matrix
    int rows, cols;
    cout<<"For First Matrix\nEnter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;

    // Allocate memory for the first matrix
    int **matrix1 = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        matrix1[i] = (int *)malloc(cols * sizeof(int));
    }

    // Input elements into the first matrix
    cout<<"Input for First Matrix:\n\n";
    inputMatrix(matrix1, rows, cols);

    //second matrix
    int rows1, cols1;

    cout<<"For Second Matrix:\n";
    cout<<"Enter number of rows: ";
    cin>>rows1;

    cout<<"Enter number of columns: ";
    cin>>cols1;
    // Allocate memory for the second matrix
    int **matrix2 = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows; ++i) {
        matrix2[i] = (int *)malloc(cols1 * sizeof(int));
    }

    // Input elements into the second matrix
    cout<<"Input for Second Matrix:\n\n";
    inputMatrix(matrix2, rows1, cols1);


}


