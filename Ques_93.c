/*
    Topic : WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS 
            IN A GIVEN STRING.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<string.h>

int main() {
    printf("Enter the string : ");
    char str[100];
    gets(str);
    char *ptr = str;
    int spaces = 0;
    while(*ptr != '\0') {
       if(*ptr == ' ') {
            spaces++;
       }
       ptr++;
    }
    printf("Number of words in string : %d",spaces + 1);
}