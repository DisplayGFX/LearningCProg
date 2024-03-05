#include <stdio.h>

int main(void){
    puts("This program demonstrates the difference between pre-decrementing and post-decrementing");
    puts("The only difference between the two print statements is if it is pre-decrementing or post-decrementing");
    puts("both input values will start at 1");
    int postd = 1;
    int pred = 1;
    printf("This line uses pre-decrementing, the value of the variable is %d at this line\n", --pred);
    printf("This line uses post-decrementing, the value of the variable is %d at this line\n", postd--);
}