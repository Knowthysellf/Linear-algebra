#ifndef MY_HEADER_H
#define MY_HEADER_H
#include<iostream>
using namespace std;
void inputMatrix(int **matrix, int rows, int cols) {
    cout<<"\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin>>matrix[i][j];
        }
    }
}

void addMatrices( int **matrix1 ,int **matrix2, int **sum, int rows, int cols){
    for(int i=0; i<rows;i++){
        for (int j=0;j<cols;j++){
        sum[i][j] = matrix1[i][j]+ matrix2[i][j];
        }
    }
}


void subMatrices( int **matrix1 ,int **matrix2, int **sub, int rows, int cols){
    for(int i=0; i<rows;i++){

        for (int j=0;j<cols;j++){
        sub[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
}

void printMatrix(int **matrix , int rows , int cols ){
    cout<<"Matrix elements:\n";
    for(int i=0;i<rows ;i++){
        for( int j=0;j<cols ;j++){
            cout<< matrix [i][j]<<"\t";
        }
        cout<<"\n";
    }
}

#endif
