#ifndef MY_HEADER_H
#define MY_HEADER_H
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//input matrix 
void inputMatrix(double **matrix, int rows, int cols) {
    cout<<"Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin>>matrix[i][j];
        }
    }
}

//print matrix 
void printMatrix(double **matrix , int rows , int cols ){
    cout<<"Matrix elements:\n";
    for(int i=0;i<rows ;i++){
        for( int j=0;j<cols ;j++){
            cout<< matrix [i][j]<<"\t";
        }
        cout<<"\n";
    }
}


//matrix addition 
void addMatrices( double **matrix1 ,double **matrix2, double **sum, int rows, int cols){
    for(int i=0; i<rows;i++){
        for (int j=0;j<cols;j++){
        sum[i][j] = matrix1[i][j]+ matrix2[i][j];
        }
    }
     printMatrix(sum,rows,cols);
}

// matrix subtraction 
void subMatrices( double **matrix1 ,double **matrix2, double **sub, int rows, int cols){
    for(int i=0; i<rows;i++){
        for (int j=0;j<cols;j++){
        sub[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
     printMatrix(sub,rows,cols);
}

//matrics multiplication 
void mlpMatrices(double **matrix1 ,double **matrix2, double **mul, int rows, int cols1 ,int cols ){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols1;j++){
            mul[i][j]=0;
            for(int k=0;k<cols;++k){
                mul[i][j]+= matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    printMatrix(mul ,rows,cols1);
}

// determinate 
double determinate (double ** matrix , int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double factor= matrix[j][i]/matrix[i][i];
            for(int k=i;k<n;k++){
                matrix[j][k]-=factor*matrix[i][k];
            }
        }  
    }

    double det =1.0;
    for(int i=0;i<n;i++){
        det*=  matrix[i][i];
    }
    cout<<det<<"\n";

}

// matrix row reduction 
void rowReduction (double **matrix ,int rows, int cols){
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

// void inverseMatrix (double **matrix, int n){
//     for (int i = 0; i < n/2; i++) {
//         for (int j = n; j <n; j++) {
//             if (i==j){
//                 matrix[i][j]=1;
//             }
//             else 
//             matrix [i][j]=0;
//         }
//     }
//     printMatrix(matrix, n,n);
//     rowReduction(matrix,n,n);
// }


#endif
