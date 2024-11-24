/*
    Topic : WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN 
            ASCENDING ORDER USING POINTERS.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<string.h>

int main() {
    // creating array of strings to sort N strings in alphabetical order
    printf("Enter the value of N (number of strings) : ");
    int n;
    scanf("%d",&n);

    char str[n][20];
    for(int i = 0; i < n; i++) {
        printf("Enter string %d : ",i + 1);
        scanf(" %[^\n]",str[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(str[i],str[j]) > 0) {

                // swap str[i] and str[j]
                char dummy[n];
                strcpy(dummy,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],dummy);
            }
            // else no problem, they are already in order
        }
    }

    printf("\nStrings in alphabetical order : \n\n");
    for(int i = 0; i < n; i++) {
        puts(str[i]);
    }

    return 0;
}