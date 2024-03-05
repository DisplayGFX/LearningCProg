#include <stdio.h>
#include <stdlib.h>

int main(void){
    int fact_num = 0;
    int product = 1;


    
    printf("%s","Enter number for factorial:");
    scanf("%d",&fact_num);
    if (fact_num < 0 ){
        puts("input outside of range");
        exit(0);
    }



    while (fact_num>1){
        product *= fact_num;
        fact_num--;
    }
    printf("Factorial of your number is %d\n",product);
}