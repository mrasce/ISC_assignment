/*
Write a program to read two integers with the following significance.

The first integer value represents a time of day on a 24 hour clock, so that 1245
represents quarter to one mid-day, for example.

The second integer represents a time duration in a similar way, so that 345 represents
three hours and 45 minutes.

This duration is to be added to the first time, and the result printed out in the same

notation, in this case 1630 which is the time 3 hours and 45 minutes after 12.45.

Typical output might be Start time is 1415. Duration is 50. End time is 1505.
*/
#include<stdio.h>
int main(void){
    // defining time and duration
    int time,duration,hrs,min;
    // reading user time
    printf("Enter Star time : ");
    scanf("%d",&time);
    printf("Enter Duration : ");
    scanf("%d",&duration);
    // adding duration to time
    hrs=time/100;
    hrs+=duration/100;
    min=time%100;
    min+=duration%100;
    if(min>=60){
        min-=60;
        hrs++;
    }
    if(hrs>=24){
        hrs-=24;
    }
    printf("Start time : %d. Duration is %d. End time is %d.\n",time,duration,(hrs*100)+(min));
    return 0;
}