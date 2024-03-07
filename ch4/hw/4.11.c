#include <stdio.h>
#include <math.h>

int main(void){
    int small = INFINITY;
    int num = 0;
    int input = 0;
    printf("%s","Please input number of digits to find the smallest:");
    scanf("%d",&num);
    for(int i = 1; i <= num;i++){
        printf("%s","Please input number:");
        scanf("%d",&input);
        if (input < small){
            small = input;
        }
    }
    printf("The smallest of your numbers is %d\n",small);
}