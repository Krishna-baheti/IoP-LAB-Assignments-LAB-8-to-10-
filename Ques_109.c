/*
    Topic : MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
            A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE 
            VALUE WE HAVE TO MODIFY)
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
 
	printf("Enter number : ");
    int num;
    scanf("%d",&num);
	int *ptr = &num;

	printf("Value of num: %d\n", num);
	printf("Value of num: (using pointer): %d\n", *ptr);

	printf("Enter modified value : ");
    int mod;
    scanf("%d",&mod);
    *ptr = mod;

	printf("Value of num: %d\n", num);
	printf("Value of num (using pointer): %d\n", *ptr);

	return 0;
}
