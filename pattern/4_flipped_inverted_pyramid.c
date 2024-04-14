/*
*****
1****
12***
123**
1234*
*/
#include<stdio.h>
#define LEN 10

int main(void){
    int lines=LEN;
    while(lines){
        // print the line
        int i=LEN-lines;
        while(i--){
            // print gap
            printf("  ");
        }
        i=lines;
        while(i--){
            // print character
            printf("* ");
        }
        printf("\n");
        lines--;
    }
    return 0;
}