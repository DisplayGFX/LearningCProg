#include <stdio.h>
#include <stdbool.h>


//fun fact, technically this is returning 1 or zero, as bool is defined as 1 for true or 0 false.
//also, I like bools more than ints
bool isEven(int);

int main(void){
    printf("1 is %s\n",isEven(1)?"even":"odd");
    printf("2 is %s\n",isEven(2)?"even":"odd");
    printf("3 is %s\n",isEven(3)?"even":"odd");
    printf("4 is %s\n",isEven(4)?"even":"odd");
    printf("5 is %s\n",isEven(5)?"even":"odd");
}

bool isEven(int input){
    return (input+1)%2?true:false;
}