/*
    Topic : WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF 
            VOWELS PRESENT IN THE FILE.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowel_count = 0;

    file = fopen("99.txt", "r");

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // to check for vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
    }

    fclose(file);
    printf("Total number of vowels in the file: %d\n", vowel_count);

    return 0;
}
