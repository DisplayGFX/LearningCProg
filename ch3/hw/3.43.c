#include <stdio.h>

int main(void){
    int x = 0;
    int y = 0;
    int z = 0;
    puts("enter first number:");
    scanf("%d",&x);
    puts("enter second number:");
    scanf("%d",&y);
    puts("enter third number:");
    scanf("%d",&z);

    //This problem of "given three numbers representing sides, figure out if they can make a triangle"
    //is from the triangle inequality theorum
    //the sum of two sides must be greater than the third to make a triangle.
    //((x+y>z)&&((x+z)>y)&&((y+z)>x))

    if ((x+y>z)&&((x+z)>y)&&((y+z)>x)){
        puts("This set of numbers can create a triangle");
    } else {
        puts("this set of numbers cannot make a triangle");
    }
}