/*
    Topic : WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    FILE *file;
    printf("Enter the student name : ");
    char name[100];
    scanf(" %[^\n]",name);
    printf("Enter the roll number : ");
    int roll_number;
    scanf("%d",&roll_number);
    printf("Enter the marks : ");
    float marks;
    scanf("%f",&marks);

    // Open the file in append mode ("a")
    file = fopen("LNMIITSTUDENT.DAT", "a");
    fprintf(file, "Roll Number: %d, Name: %s, Marks: %.2f\n", roll_number, name, marks);
    fclose(file);

    printf("Student details have been appended to 'LNMIITSTUDENT.DAT'.\n");

    return 0;
}
