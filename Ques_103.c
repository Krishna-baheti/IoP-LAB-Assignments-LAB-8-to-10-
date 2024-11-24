/*
    Topic : WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF 
            TWO GIVEN NUMBERS.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

#define MAX(x,y) ((x>y)?x:y) // defining a macro using conditional operator

int main()
{
	int a,b,max;
	
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);	
	
	max = MAX(a,b);
	printf("Maximum number is: %d\n",max);
	
	return 0;
}
