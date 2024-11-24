/*
    Topic : AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT 
            TO DISPLAY THE HEXADECIMAL COLOR CODE.
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
};

void printColorCode(enum Color color) {
    switch(color) {
        case RED:
            printf("Red: #FF0000\n"); // hex code for red
            break;
        case GREEN:
            printf("Green: #00FF00\n");
            break;
        case BLUE:
            printf("Blue: #0000FF\n");
            break;
        case YELLOW:
            printf("Yellow: #FFFF00\n");
            break;
        case BLACK:
            printf("Black: #000000\n");
            break;
        case WHITE:
            printf("White: #FFFFFF\n");
            break;
        default:
            printf("Unknown color\n");
            break;
    }
}

int main() {
    
    // testing function
    printColorCode(RED);
    printColorCode(GREEN);
    printColorCode(BLUE);
    printColorCode(YELLOW);
    printColorCode(BLACK);
    printColorCode(WHITE);

    return 0;
}
