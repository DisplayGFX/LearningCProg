#include <stdio.h>
#include <stdbool.h>

int main(void){
    int integer1 = 14;
    int integer3 = 14;
    int integer2 = 5;
    bool truth = false;
    //obvious relational operators are
    //>, <, 
    //obvious equality operators
    //==, !=

    printf("Is %d greater than or equal to %d\n",integer1,integer2);
    truth = integer1 >= integer2;
    printf("statement is %s\n", truth ? "true" : "false");
    printf("Is %d less than or equal to %d\n",integer1,integer2);
    truth = integer1 <= integer2;
    printf("statement is %s\n", truth ? "true" : "false");
}