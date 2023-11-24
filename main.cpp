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
    int **matrix1 = (int **) malloc (rows * sizeof(int *));
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
    for (int i = 0; i < rows1; ++i) {
        matrix2[i] = (int *)malloc(cols1 * sizeof(int));
    }

    // Input elements into the second matrix
    cout<<"Input for Second Matrix:\n\n";
    inputMatrix(matrix2, rows1, cols1);

    //Allocate memory for the summation matrix 
    int **sum=(int **)malloc(rows* sizeof(int *));
    
    for (int i=0;i<rows;i++){
        sum[i]=(int *)malloc(cols* sizeof(int));
    }

    //alocate memory for the subtraction matrix
    int **sub=(int **)malloc(rows* sizeof(int *));
    
    for (int i=0;i<rows;i++){
        sub[i]=(int *)malloc(cols* sizeof(int));
    }

    //alocate memory for the multiplication matrix
    int **mul=(int **)malloc(rows* sizeof(int *));
    
    for (int i=0;i<rows;i++){
        sub[i]=(int *)malloc(cols1* sizeof(int));
    }


    int close;
    while(1){
        cout<<"\nPress 1 for addition\n";
        cout<<"Press 2 for subtraction\n";
        cout<<"Press 3 for multiplication\n";
        cout<<"Press 0 for close\n";
        cin>>close;
        if(close==1){
            if(rows==rows1 && cols==cols1){
                addMatrices(matrix1 ,matrix2, sum, rows,cols);
                printMatrix(sum ,rows,cols);
            }
            else{
                cout<<"Matrix addition can't possible";
            }
            
        }

        if(close==2){
            if(rows==rows1 && cols==cols1){
                subMatrices(matrix1 ,matrix2,sub,rows,cols);
                printMatrix(sub ,rows,cols);
            }
            else{
                cout<<"Matrix subtraction can't possible";
            }
    
        }

        if(close==3){
            if(cols==rows1){
                mlpMatrices(matrix1 ,matrix2,mul ,rows,cols1, cols);
                printMatrix(mul ,rows,cols1);
            }
            else{
                cout<<"Matrix multiplication can't possible";
            }
            
        }
    }

}


