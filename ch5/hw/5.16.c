#include <stdio.h>
#include <stdbool.h>


int integerPower(int,int);

int main(void){
    printf("%d\n",integerPower(2,3));
}

int integerPower(int base, int exponent){
    bool neg = false;
    int product = base;
    if (exponent == 0){
        return 1;
    }
    if (exponent < 0){
        // any integer raised to a negative integer exponent will always be less than 1
        puts("cannot return a less than a whole number, negative exponents invalid");
        return 0;
    }
    //what if the base is zero, would that change things? I dont think so, cause its always zero.
    for (int i = 1;i < exponent;i++){
        product *= base;
    }
    return product;
}