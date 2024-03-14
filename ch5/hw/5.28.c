#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int reverseDigits(int);

int main(void){

    int integer1 = 0;
    printf("Enter integer: ");
    scanf("%d", &integer1);
    int rev = reverseDigits(integer1);
    printf("%d",rev);
}

int reverseDigits(int integer){
    if(log10(integer) > 1){
        int returnnum = reverseDigits(integer/10) + integer%10*pow(10,floor(log10(integer))); // kinda suprised I got this first try.
        return returnnum;
    } else{
        return integer;
    }
}