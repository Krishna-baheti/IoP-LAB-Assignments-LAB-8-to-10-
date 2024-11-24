/*
    Topic : WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST 
            OF GIVEN LIST OF N INTEGERS.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    int *ptr = arr;
    int max = *ptr;
    int i = 0;
    while(i < n) {
        if(*ptr > max) {
            max = *ptr;
        }
        ptr++;
        i++;
    }
    printf("Maximum element is : %d\n",max);
    return 0;
}