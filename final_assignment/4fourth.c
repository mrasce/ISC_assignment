/*
Write a program to read a number of units of length (a float) and print out the area of
a circle of that radius. Assume that the value of pi is 3.14159 (an appropriate
declaration will be given you by ceilidh - select setup).
Your output should take the form: The area of a circle of radius ... units is .... units.
If you want to be clever, and have looked ahead in the notes, print the message Error:
Negative values not permitted. if the input value is negative.
*/
#include<stdio.h>
#define PI 3.14159
int main(void){
    // defining radius
    float radius=0;
    // taking radius from user
    printf("Enter radius of circle (unit) : ");
    scanf("%f",&radius);
    // checking if the radius is negative
    while(radius<0){
        printf("Error : Negative values not perfmitted.\n");
        // take the input again
        printf("Enter radius of circle (unit) : ");
        scanf("%f",&radius);
    }
    // printing the area of circle
    printf("The area of a circle of radius %f units is %f units.\n",radius,PI*radius*radius);
    return 0;
}