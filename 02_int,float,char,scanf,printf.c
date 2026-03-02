#include <stdio.h>

int main()
{
    // Variable declaration
    int myNumber;
    float myFraction;
    char myName[50]; 

    // Input to user
    //INTEGER
    printf("Enter an integer: ");
    scanf("%d", &myNumber);
    // FRACTION
    printf("Enter a fraction: ");
    scanf("%f", &myFraction);
    // NAME
    printf("What is your name: ");
    scanf("%s", myName);

    // Output
    printf("\n");
    printf("------\n");
    printf("Your number is: %d\n", myNumber);
    printf("Your fraction is: %f\n", myFraction);
    printf("Your name is: %s\n", myName);
    return 0;
}