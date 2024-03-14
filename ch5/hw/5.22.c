#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printDigits(int);

int main(void){

    //test to prove this log10 works as expected
    // int magtest = 1;
    // double mag = floor(log10(magtest));
    // printf("the digits of %d is %lf",magtest,mag+1);
    int integer1 = 0;
    printf("Enter integer: ");
    scanf("%d", &integer1);
    if (1 > integer1 || integer1 > 32767){
        puts("integer out of range");
        exit(1);
    }
    printDigits(integer1);
}

void printDigits(int integer){
    int mag = (int)floor(log10(integer))+1;
    int scale = 0;
    int num = 0;
    for(int i = mag;i>0;i--){\
        scale = pow(10,i-1);
        num = integer/scale;
        printf("%d  ",num);
        integer = integer % scale;
    }
}