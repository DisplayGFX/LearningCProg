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

    //all of the conditions that the program should print an asterisk
    //when y is either 1 or at the end of the box
    //when x is either 1 or at the end of the box

    //more formal logic
    // y == 1 || y == side
    // x == 1 || x == side

    //combined logic
    //(y == 1 || y == side) || (x == 1 || x == side)

    int y = 1;
    while (y <= side){
        int x = 1;
        while (x<=side){
            if ((y == 1 || y == side) || (x == 1 || x == side)){
                printf("%s","*");
            }
            else{
                printf("%s"," ");
            }
            x++;
        }
        puts("");
        y++;
    }
}

