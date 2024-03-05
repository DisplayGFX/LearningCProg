#include <stdio.h>

int main(void){
    int x = 0;
    int y = 0;
    int z = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    puts("enter first number:");
    scanf("%d",&x);
    puts("enter second number:");
    scanf("%d",&y);
    puts("enter third number:");
    scanf("%d",&z);

    //Pythagorean's theorem 
    // a^2 + b^2 == c^2
    //however, there is nothing that indicates which side is which. so, simply, take the largest of the 3, 
    // and set the other two to be a and b
    // but what happens if two of the 3 are equal. what about all 3 are equal
    // greater than or equal should catch this edge case in combination with else if making conditions exclusive

    if ((x>=y)&&(x>=z)){//x is largest
        c = x;
        a = y;
        b = z;
    } else if ((y>=x)&&(y>=z)){//y is largest
        c = y;
        a = x;
        b = z;
    } else if ((z>=x)&&(z>=y)){//z is largest
        c = z;
        a = x;
        b = y;
    } else {
        puts("how did you get here?");
    }

    if ((a*a + b*b) == (c*c)){
        puts("This set of numbers can create a right triangle");
    } else {
        puts("this set of numbers cannot make a right triangle");
    }
}