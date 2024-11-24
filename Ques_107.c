/*
    Topic : IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
            LAST N DIGITS FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) 
            FLIP(12345,3)= 12543 (HERE N=3).
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

void flip(int a[], int size , int n);

int main() {
    printf("Enter the number you want to flip : ");
    int n;
    scanf("%d",&n);
    printf("Enter the how many digits from last you want to flip : ");
    int N;
    scanf("%d",&N);

    // count the number of digits in the entered number and store them in array
    int rem, count = 0, temp = n;
    while(n != 0) {
        count++;
        n = n /10;
    }
    
    int arr[count];
    for(int i = count - 1; i >= 0; i--) {
        rem = temp % 10;
        arr[i] = rem;
        temp = temp / 10;
    }

    // now we will pass arr and count(size of array) and N to flip function

    flip(arr,count,N); // calling flip

    return 0;
}

void flip(int arr[], int count, int N) {
    for(int i = count - N, j = count - 1; i <= j; i++, j--) {
        // swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0; i < count; i++) {
        printf("%d",arr[i]);
    }
}