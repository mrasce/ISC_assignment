/*
a a a *
a a * * *
a * * * * *
* * * * * * *
*/
#include<stdio.h>
#define LEN 2
int main(void){
    int lines=LEN;
    while(lines--){
        // print line
        int i=lines;
        while(i--){
            printf("  ");
        }
        int j=(LEN-lines)*2-1;
        while(j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}