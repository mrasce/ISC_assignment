/*
* * * * * * *
1 * * * * *
1 2 * * * 
1 2 3 *
*/
#include<stdio.h>
#define LEN 10
int main(void){
    int lines=LEN;
    while(lines--){
        // print line

        // print gap    
        int i=LEN-lines-1;
        while(i--){
            printf("  ");
        }
        // print char
        i=lines*2+1;
        while(i--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}