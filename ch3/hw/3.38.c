#include <stdio.h>
#include <stdlib.h>

int main(void){
    int seven = 0;
    printf("%s","Enter number to check for sevens:");
    scanf("%d",&seven);
    if (seven > 99999 ){
        puts("input outside of range");
        exit(0);
    }

    int fifth = seven/10000;
    int fourth = (seven/1000)%10;
    int third = (seven/100)%10;
    int second = (seven/10)%10;
    int first = seven%10;

    int num_seven = 
        (fifth == 7 ? 1 : 0) + 
        (fourth == 7 ? 1 : 0) + 
        (third == 7 ? 1 : 0 ) + 
        (second == 7 ? 1 : 0) + 
        (first == 7 ? 1 : 0);

    printf("Your number contains %d Sevens\n",num_seven);
}