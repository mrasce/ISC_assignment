/*
*****
****1
***12
**123
*1234
*/
#include<stdio.h>
#define LEN 10
int main(void){
    int lines=LEN;
    while(lines){
        int i=lines;
        while(i--){
            printf("* ");
        }
        lines--;
        printf("\n");
    }
    return 0;
}