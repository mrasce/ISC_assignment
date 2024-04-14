#include<stdio.h>
#define PAT "*"
#define LEN 10
int main(void){
    for(int i=0;i<LEN;i++){
        for(int j=0;j<=i;j++){
            printf(PAT);
        }
        printf("\n");
    }
    return 0;
}