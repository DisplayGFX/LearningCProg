#include <stdio.h>

int main(void){
    long int value1;
    long int value2;
    value1 = 20000;
    //a
    long *lPtr;
    //b
    lPtr = &value1;
    //c
    printf("%li",*lPtr);
    puts("");
    //d
    value2 = *lPtr;
    //e
    printf("%li",value2);
    puts("");
    //f
    printf("%p",&value1);
    puts("");
    //g
    printf("%p",lPtr);
    puts("");
    //yes
}