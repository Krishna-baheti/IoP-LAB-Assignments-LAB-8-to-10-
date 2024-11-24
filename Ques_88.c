/*
    Topic : WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY 
            USING POINTERS.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/


#include<stdio.h>

int main() {
    printf("Enter the size of array : ");
    int n;
    scanf("%d",&n);
    printf("Enter the elements of array : ");
    int arr[n], brr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    
    int *ptr = arr;

    printf("Copied array is : ");
    for(int i = 0; i < n; i++) {
        brr[i] = *ptr;
        printf("%d ",brr[i]);
        ptr++;
    }
    return 0;
}