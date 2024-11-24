/*
    Topic : WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C 
            LANGUAGE:
    A. COPY ONE STRING INTO ANOTHER
    B. COMPARE TWO STRINGS
    C. CONCAT TWO STRINGS
    D. REVERSE A GIVEN STRING
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {

    // COPY
    printf("Enter the string you want to copy : ");
    char str[100];
    scanf(" %[^\n]",str);
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    len++; // also count null character
    char str2[len];
    for(int i = 0; i < len; i++) {
        str2[i] = str[i];
    }
    printf("Copied string is : ");
    printf("%s\n",str2);

    // END

    printf("\n\n");

    // COMPARE

    printf("Enter the strings you want to compare : \n");
    printf("Enter string 1 : ");
    char str3[100];
    scanf(" %[^\n]",str3);
    printf("Enter string 2 : ");
    char str4[100];
    scanf(" %[^\n]",str4);
    
    int flag = 0, i = 0;
    while(str3[i] != '\0' && str4[i] != '\0') {
        if(str3[i] > str4[i]) {
            flag = 1;
            break;
        } else if(str3[i] < str4[i]) {
            flag = 2;
            break;
        }
        i++;
    }
    if(flag == 0) {
        printf("\nTwo strings are equal\n");
    } else if(flag == 1) {
        printf("\nString 1 is greater than String 2\n");
    } else {
        printf("\nString 2 is greater than String 1\n");
    }

    // END

    printf("\n\n");

    // CONCAT 

    printf("Enter the strings you want to concatenate : \n");
    printf("Enter string 1 : ");
    char str5[100];
    scanf(" %[^\n]",str5);
    int len1 = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        len1++;
    }
    printf("Enter string 2 : ");
    char str6[100];
    scanf(" %[^\n]",str6);
    int len2 = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        len2++;
    }
   
    int k = 0, j = 0;
    while(str5[k] != '\0')
        k++;
    while(str6[j] != '\0') {
        str5[k] = str6[j];
        j++;
        k++;
    }
    str5[k] = '\0';
    printf("Concatenated string is %s\n",str5);

    // END

    printf("\n\n");

    // REVERSE

    printf("Enter the string you want to reverse : ");
    char str8[100];
    scanf(" %[^\n]",str8);
    int len3 = 0;
    for(int i = 0; str8[i] != '\0'; i++) {
        len3++;
    }
    for(int i = 0, j = len3 - 1; i <= j; i++, j--) {
        char temp = str8[i];
        str8[i] = str8[j];
        str8[j] = temp;
    }

    printf("The reversed string is : %s\n",str8);
    printf("\n\n");

    // END 
    return 0;
}


