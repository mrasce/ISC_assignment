/*
Given as input a floating (real) number of centimeters, print out the equivalent
number of feet (integer) and inches (floating, 1 decimal), with the inches given to an
accuracy of one decimal place.

Assume 2.54 centimeters per inch, and 12 inches per foot.

If the input value is 333.3, the output format should be:

333.3 centimeters is 10 feet 11.2 inches.
*/
#include<stdio.h>

int main(void){
    // declaring varibles for cm (float), feet (int) and inches ( float )
    float cm=0;
    float feet=0;
    float inch=0;
    // taking user input for centimeter
    printf("Enter number of centimeters : ");
    scanf("%f",&cm);
    // calucating feet and inches
    inch=cm/2.54;
    feet=inch/12.0;
    printf("%f centimeters is %.0f feet %.1f inches",cm,feet,inch);
    return 0;
}