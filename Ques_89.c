/*
    Topic : WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF 
            ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
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

    printf("Copied array in opposite order is : ");
    

    int *ptr = arr; // ptr points to first element of array crr
    int *ptr1 = brr; // ptr1 points to first element of array brr
    int i = 0;
    while(i < n) {
        *ptr1 = *ptr;
        ptr++;
        ptr1++;
        i++;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ",brr[i]);
    }
    return 0;
}