
//from 3.45c.c
//modified to fit request
#include <stdio.h>
#include <stdlib.h>

int main(void){
    for(int i = 1; i <= 5; i++){
        printf("%d\t", factorial(i));
    }
}

int factorial(int fact_num){
    int product = 1;
    while (fact_num>1){
        product *= fact_num;
        fact_num--;
    }
    return product;
}