/*
    Topic : WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED 
            NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    int *x = &n;
    printf("Square of %d is : %d\n",n,(*x)*(*x));
    printf("Cube of %d is : %d\n",n,(*x)*(*x)*(*x));
    return 0;
}