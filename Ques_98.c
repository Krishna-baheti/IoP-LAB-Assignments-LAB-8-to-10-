/*
    Topic : WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER 
            USING DYNAMIC MEMORY ALLOCATION.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix1, **matrix2, **result;
    int row1, col1, row2, col2;
    
    // Input for dimensions of matrix1
    printf("Enter number of rows and columns for matrix 1: ");
    scanf("%d %d", &row1, &col1);
    
    // Input for dimensions of matrix2
    printf("Enter number of rows and columns for matrix 2: ");
    scanf("%d %d", &row2, &col2);
    
    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible."); 
    }
    
    // Allocate memory for matrices dynamically
    matrix1 = (int**)malloc(row1 * sizeof(int*));
    for (int i = 0; i < row1; i++) {
        matrix1[i] = (int*)malloc(col1 * sizeof(int));
    }
    
    matrix2 = (int**)malloc(row2 * sizeof(int*));
    for (int i = 0; i < row2; i++) {
        matrix2[i] = (int*)malloc(col2 * sizeof(int));
    }
    
    result = (int**)malloc(row1 * sizeof(int*));
    for (int i = 0; i < row1; i++) {
        result[i] = (int*)malloc(col2 * sizeof(int));
    }
    
    // Input elements of matrix1
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input elements of matrix2
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Display the result matrix
    printf("\nResultant matrix after multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

