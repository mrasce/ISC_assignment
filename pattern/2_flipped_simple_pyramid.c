/*
12345*
1234**
123***
12****
1*****
******
*/
#include<stdio.h>
#define LEN 10
#define CHAR '*'
int main(void){
    int lines=LEN;
    while(lines--){
        // print the line
        int i=lines;
        while(i--){
            printf("  ");
        }
        int j=LEN-lines;
        while(j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}