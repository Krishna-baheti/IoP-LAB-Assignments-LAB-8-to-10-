/*
    Topic : WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING 
            USING POINTERS. THE PERMUTATIONS OF THE STRING ARE: 
            ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD
            CBDA CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);  // Print the permutation when all characters are fixed
    } else {
        for (int i = left; i <= right; i++) {
            // Swap the current character with the first character
            swap(&str[left], &str[i]);
            
            // Recursively call permute for the next position
            permute(str, left + 1, right);
            
            // Backtrack to undo the swap
            swap(&str[left], &str[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    
    int n = strlen(str);
    
    printf("All permutations of the string are:\n");
    permute(str, 0, n - 1);
    
    return 0;
}
