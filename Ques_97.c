/*
    Topic : WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    printf("Enter the string : ");
    char str[50];
    // always use this to input string
    scanf(" %[^\n]",str);
    char *ptr = str;
    int count_vowel = 0;
    int vowel[10] = {'A','E','I','O','U','a','e','i','o','u'};
    while(*ptr != '\0') {
       for(int i = 0; i < 10; i++) {
        if(*ptr == vowel[i]) {
            count_vowel++;
        }
       }
       ptr++;
    }
    printf("Number of vowels in '");
    printf("%s' ",str);
    printf("is : %d\n",count_vowel);
    return 0;
}