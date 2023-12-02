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
    double **matrix1 = (double **) malloc (rows * sizeof(double *));
    for (int i = 0; i < rows; ++i) {
        matrix1[i] = (double *)malloc(cols * sizeof(double));
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
    double **matrix2 = (double **)malloc(rows1 * sizeof(double *));
    for (int i = 0; i < rows1; ++i) {
        matrix2[i] = (double *)malloc(cols1 * sizeof(double));
    }

    // Input elements into the second matrix
    cout<<"Input for Second Matrix:\n\n";
    inputMatrix(matrix2, rows1, cols1);

    //Allocate memory for the summation matrix 
    double **sum=(double **)malloc(rows* sizeof(double *));
    
    for (int i=0;i<rows;i++){
        sum[i]=(double *)malloc(cols* sizeof(double));
    }

    //alocate memory for the subtraction matrix
    double **sub=(double **)malloc(rows* sizeof(double *));
    
    for (int i=0;i<rows;i++){
        sub[i]=(double *)malloc(cols* sizeof(double));
    }

    //alocate memory for the multiplication matrix
    double **mul=(double **)malloc(rows* sizeof(double *));
    
    for (int i=0;i<rows;i++){
        mul[i]=(double *)malloc(cols1* sizeof(double));
    }

    //alocate memory for the inverse matrix
    double **inverse=(double **) malloc(rows* sizeof(double *));

    for(int i=0; i<rows ; i++){
        inverse[i]=(double *)malloc(2*cols* sizeof(double));
    }
   
   
   

    int close;
    while(1){
        cout<<"\nPress 1 for addition\n";
        cout<<"Press 2 for subtraction\n";
        cout<<"Press 3 for multiplication\n";
        cout<<"Press 4 for row reduction\n";
        cout<<"Press 5 for determinante\n";
        cout<<"Press 6 for inverse\n";
        cout<<"Press 0 for close\n";
        cin>>close;
        if(close==1){
            if(rows==rows1 && cols==cols1){
                addMatrices(matrix1 ,matrix2, sum, rows,cols);
            }
            else{
                cout<<"Matrix addition can't possible";
            }
            
        }

        if(close==2){
            if(rows==rows1 && cols==cols1){
                subMatrices(matrix1 ,matrix2,sub,rows,cols);
               
            }
            else{
                cout<<"Matrix subtraction can't possible";
            }
    
        }

        if(close==3){
            if(cols==rows1){
                mlpMatrices(matrix1 ,matrix2,mul ,rows,cols1, cols);
                
            }
            else{
                cout<<"Matrix multiplication can't possible";
            }
            
        }
       
        if(close==4){
            
             rowReduction(matrix1,rows,cols);
        }

        if(close==5){
            cout<<"Determinant of matrix 2\n";
            determinate(matrix2,rows);
        }

        // if(close==6){
        //     int n;
        //     cin>>n;
        //     inputMatrix(inverse,n,n);
        //     inverseMatrix(inverse,n*2);
        // }
        if( close==0){
            break;
        }
    }

}


