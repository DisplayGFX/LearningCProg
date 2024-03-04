#include <stdio.h>
#include <stdlib.h>

int main(void){
    int input = 0;
    int x = 10000;
    int remainder = 0;
    int digit = 0;

    puts("Enter in a 5 digit number:");
    scanf("%d", &input);
    if (input >= 100000 || input <= 9999){
        puts("Number is not 5 digits long");
        exit(1);
    }
    remainder = input;
    while (x > 0){
        digit = remainder / x;
        remainder = remainder % x;
        printf("%d ",digit);
        x = x / 10;
    }
    printf("%s","\n");
}