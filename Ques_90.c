/*
    Topic : WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND 
            EXCLUDING SPACES USING POINTERS.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<string.h>

int main() {
    printf("Enter the string : ");
    char str[100];
    scanf("%[^\n]",str);
    char *ptr = str;
    int len_with_spaces = 0, len_without_spaces = 0;
    while(*ptr != '\0') {
        len_with_spaces++;
        ptr++;
    }
    printf("Length including spaces : %d\n",len_with_spaces);
    char *ptr1 = str;
    while(*ptr1 != '\0') {
        if(*ptr1 == ' ') {
            ptr1++;
            continue;
        } else {
            len_without_spaces++;
            ptr1++;
        }
    }
    printf("Length excluding spaces : %d\n",len_without_spaces);
    return 0;
}