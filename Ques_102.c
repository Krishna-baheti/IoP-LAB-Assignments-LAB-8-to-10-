/*
    Topic : WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES 
            IN A TEXT FILE.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *ptr;
    char filename[100];
    char ch;
    int char_count = 0, word_count = 0, line_count = 0, noOfSpaces = 0;

    ptr = fopen("99.txt","r");

    while ((ch = fgetc(ptr)) != EOF) {
        // Count characters
        char_count++;

        // Count lines
        if (ch == '\n') {
            line_count++;
        }
        if(ch == ' ') {
            noOfSpaces++;
        }
    }
    word_count = noOfSpaces + 1 + 1; // one last space won't be counted

    printf("Total characters : %d\n",char_count);
    printf("Total words : %d\n",word_count);
    printf("Total lines : %d\n",line_count);

    return 0;
}