// Input two numbers and work out their sum, average and sum of the squares of the numbers.
#include<stdio.h>

int main(void){
    // defining two floating number
    float num1=0;
    float num2=0;
    float sum=0;
    // reading floating numbers from user
    printf("Enter two number : ");
    scanf("%f %f",&num1,&num2);
    // working out sum , avg and sum of the squares of the numbers 
    sum=num1+num2;
    printf("\nSum of num1 and num2 = %f",sum);
    printf("\nAverage of num1 and num2 = %f",sum/2);
    printf("\nSum of the squares of the numbers = %f\n",((num1*num1)+(num2*num2)));
    return 0;
}