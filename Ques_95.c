/*
    Topic : WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE 
            NUMBER, EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A 
            STRUCTURE POINTER AND AN ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM 
            SHOULD READ ‘N’ EMPLOYEE DETAILS AND PRINT THE LIST OF ALL EMPLOYEE 
            ALONG WITH THE BASIC A PAY.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    struct employee {
        char employee_name[50];
        int employee_number;
        int basic_pay;
    };
    printf("Enter the value of N (number of employees): ");
    int n;
    scanf("%d",&n);

    printf("ENTER INFO OF EMPLOYEES : \n\n\n");

    struct employee employ[50];
    for(int i = 0; i < n; i++) {
         printf("Enter employee name : ");
        scanf(" %[^\n]",employ[i].employee_name);
        printf("Enter employee number : ");
        scanf("%d",&employ[i].employee_number);
        printf("Enter the basic pay : ");
        scanf("%d",&employ[i].basic_pay);
        printf("\n\n");
    }

    printf("\n\n\n__________________________________\n\n\n");
    printf("DETAILS OF EMPLOYEES : \n\n\n\n");

    for(int i = 0; i < n; i++) {
        printf("Employee name : ");
        puts(employ[i].employee_name);
        printf("Employee number : ");
        printf("%d",employ[i].employee_number);
        printf("\nBasic pay of employee : ");
        printf("%d",employ[i].basic_pay);
        printf("\n\n\n");
    }

    return 0;
}