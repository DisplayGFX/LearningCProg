#include <stdio.h>
#include <stdbool.h>


int power(int,int);

int main(void){
    printf("%d\n",power(2,3));
}

int power(int base, int exponent){
    //what if the base is zero, would that change things? I dont think so, cause its always zero.
    if (exponent > 1){
        return (base * power(base,(exponent-1)));
    } else if (exponent == 1){
        return base;
    } else if (exponent < 1){
        puts("what did you do?");
        return 0;
    }
}