#include <stdio.h>

#define SIZE 5

int main(void){
    //a
    int values[SIZE] = {2,4,6,8,10};

    //b
    int *vPtr;

    //c
    for(int i = 0;i < SIZE;i++){
        printf("%d ", values[i]);
    }
    puts("");
    //d
    vPtr = &values[0];
    vPtr = values;

    //e
    for(int i = 0;i < SIZE;i++){
        printf("%d ", *(values + i));
    }
    puts("");

    //f
    for(int i = 0;i < SIZE;i++){
        printf("%d ", *(vPtr + i));
    }
    puts("");

    //g
    for(int i = 0;i < SIZE;i++){
        printf("%d ", vPtr[i]);
    }
    puts("");

    //h
    values[4];
    *(values + 4);
    vPtr[4];
    *(vPtr + 4);

    //i
    //the address starts at 1002500, and is incremented by 3 times the size of the type. so it is 1002500+3*4 or 1002512. value stored there is 8

    //j
    //the address should be starting at 1002500+4*4, or 1002516. so subtracting 4 times the type of int, means it should be 1002500. the value should be 2
}