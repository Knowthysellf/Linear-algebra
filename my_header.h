#ifndef MY_HEADER_H
#define MY_HEADER_H
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void inputMatrix(int **matrix, int rows, int cols) {
    cout<<"Enter elements of the matrix:\n";
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

void mlpMatrices(int **matrix1 ,int **matrix2, int **mul, int rows, int cols1 ,int cols ){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols1;j++){
            mul[i][j]=0;
            for(int k=0;k<cols;++k){
                mul[i][j]+= matrix1[i][k]*matrix2[k][j];
            }
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

void rowReduction (int **matrix ,int rows, int cols){
    for (int i=0;i<rows;i++){
        double diagonalElement= matrix[i][i];
        for(int j=0;j<cols;j++){
            //make the daigonal element 1 
            matrix[i][j]/=diagonalElement;
        }
        for (int k=0;k<rows;k++){
            if(k!=i){
                double factor= matrix[k][i];
                for(int j=0;j<cols;j++){
                    //make other element zero
                    matrix[k][j]-=factor*matrix[i][j];
                }
            }
        }
    }
    printMatrix(matrix,rows,cols);

}

#endif
