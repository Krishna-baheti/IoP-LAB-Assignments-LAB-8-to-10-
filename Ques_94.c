/*
    Topic : WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER 
            STRING VARIABLE USING POINTERS.FOR EXAMPLE, ST =”SVNITJAVA” 
            IS COPIED AS “AVAJTINVS”
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<string.h>

int main() {
    printf("Enter the string : ");
    char str[100];
    gets(str);
    char *str2 = str;
    for(int i = 0, j = strlen(str) - 1; i <= j; i++, j--) {
        char temp = str2[i];
        str2[i] = str2[j];
        str2[j] = temp;
    }

    printf("Reversed string is : ");
    printf("%s\n",str2);
    return 0;
}