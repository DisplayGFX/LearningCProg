#include <stdio.h>
#include <stdlib.h>

int main(void){
    int prec = 10;
    float sum = 0;
    float x = 0;
    printf("%s","Enter number for e to your number:");
    scanf("%f",&x);
    sum += 1;
    while (prec > 0){
        //the factorial number needs to be float, else the below line will be an integer divison, which will always be 0 or 1.
        //float cast is made explicit
        float fact = (float)factorial(prec);
        float xcnt = prec;
        float xprod = 1;
        while(xcnt > 0){
            xprod *= x;
            xcnt--;
        }
        sum += xprod/fact;
        prec--;
    }
    printf("calculated e to %.0f is %f\n",x,sum);
}

int factorial(int fact_num){
    int product = 1;
    while (fact_num>1){
        product *= fact_num;
        fact_num--;
    }
    return product;
}