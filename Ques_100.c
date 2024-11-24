/*
    Topic : A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS 
            STUDENT ROLL NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO 
            CREATE A FILE TO STORE DETAILS OF N STUDENTS.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<string.h>

int main() {
    FILE *file;
    file = fopen("LNMIITSTUDENT.JAVA","w");
    printf("Enter the value of N : ");
    int n;
    scanf("%d",&n);
    struct student {
        char name[100];
        int roll_num;
        int total_marks;
    };
    struct student arr[n];


    for(int i = 0; i < n; i++) {
        printf("Enter details of student %d\n\n",i+1);
        printf("Enter student name : ");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter student roll number : ");
        scanf("%d",&arr[i].roll_num);
        printf("Enter total marks of student : ");
        scanf("%d",&arr[i].total_marks);
        printf("\n\n");
    }

    for(int i = 0; i < n; i++) {
        fprintf(file,"Details of student %d\n",i+1);
        fprintf(file, "Student name : %s\n",arr[i].name);
        fprintf(file, "Student roll number : %d\n",arr[i].roll_num);
        fprintf(file,"Student total marks : %d\n",arr[i].total_marks);
        fprintf(file,"\n");
    }

    fclose(file);
    printf("Student details have been written on file 'LNMIITSTUDENT.JAVA'\n");
    return 0;
}