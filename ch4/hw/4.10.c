#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){
    int sum = 0;
    int cnt = 0;
    int input = 0;
    while(true){
        printf("%s","Please input number to average (enter 9999 to end):");
        scanf("%d",&input);
        if (input == 9999){
            break;
        }
        sum += input;
        cnt++;
    }
    if (cnt == 0){
        puts("You have entered no numbers");
        exit(0);
    }
    printf("The average of your numbers is %d\n",sum/cnt);
}