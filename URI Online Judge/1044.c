#include <stdio.h>
#include <stdlib.h>


void main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a > b){
        if(a % b == 0){
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }else{
        if(b % a == 0){
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
    }
    system("pause");
}