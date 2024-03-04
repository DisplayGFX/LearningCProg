#include <stdio.h>

int main(void){
    int x = 0;
    int y = 0;
    int i = 1;
    int power = 1;
    puts("enter first number:");
    scanf("%d",&x);
    puts("enter second number:");
    scanf("%d",&y);
    while (i <= y){
        power = power * x;
        i++;
    }
    printf("Power is %d",power);
}