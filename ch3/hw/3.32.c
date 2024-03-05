#include <stdio.h>
#include <stdlib.h>

int main(void){
    int side = 0;
    printf("%s","Enter length of side:");
    scanf("%d",&side);
    if (side < 1 || side > 20){
        puts("input outside of range");
        exit(0);
    }
    int y = 0;
    while (y < side){
        int x = 0;
        while (x < side){
            printf("%s","*");
            x++;
        }
        puts("");
        y++;
    }
}