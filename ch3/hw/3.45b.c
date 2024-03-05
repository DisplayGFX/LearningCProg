#include <stdio.h>
#include <stdlib.h>

int main(void){
    int prec = 0;
    float sum = 0;

    printf("%s","Enter number for precision of e:");
    scanf("%d",&prec);
    if (prec < 0 ){
        puts("input outside of range");
        exit(0);
    }
    sum += 1;
    while (prec > 0){
        //the factorial number needs to be float, else the below line will be an integer divison, which will always be 0 or 1.
        //float cast is made explicit
        float fact = (float)factorial(prec);
        sum += 1/fact;
        prec--;
    }
    printf("calculated e is %f\n",sum);
}

int factorial(int fact_num){
    int product = 1;
    while (fact_num>1){
        product *= fact_num;
        fact_num--;
    }
    return product;
}