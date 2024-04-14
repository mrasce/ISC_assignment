// Write a program to read a "float" representing a number of degrees Celsius, and print
// as a "float" the equivalent temperature in degrees Fahrenheit. Print your results in a
// form such as 100.0 degrees Celsius converts to 212.0 degrees Fahrenheit.
#include<stdio.h>

int main(void){
    // reading temperature in degree C
    float tempC=0;
    float tempF=0;
    printf("Enter Temperature ( Celsius ) : ");
    scanf("%f",&tempC);
    // calculating temperature in Fahrenheit
    tempF=(( 9.0 / 5.0 )*tempC)+32;
    printf("Temperature in Fahrenheit is : %.1f\n",tempF);
    return 0;
}