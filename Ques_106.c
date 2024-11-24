/*
    Topic : CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, 
            QUANTITY, PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT 
            TAKES READ ITEM_NAME, QUANTITY AND PRICE AS INPUT AND CALCULATE 
            AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

 struct item {
        char item_name[30];
        int quantity;
        float price;
        float amount;
    };

struct item payment(struct item x) {
    printf("Enter item name : ");
    scanf("%[^\n]",x.item_name);
    printf("Enter the quantity of '");
    printf("%s' : ",x.item_name);
    scanf("%d",&x.quantity);
    printf("Enter the price of '");
    printf("%s' : ",x.item_name);
    scanf("%f",&x.price);
    x.amount = (x.quantity) * (x.price);
    printf("The Amount to be paid is : %f\n",x.amount);
}

int main() {
   
    struct item i;
    i = payment(i);
    return 0;
}