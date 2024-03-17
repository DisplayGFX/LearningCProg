#include <stdio.h>
#define SIZE 10

int main(void){
    //b
    double fractions[SIZE] = {}; // should all initialize to zero

    //c
    printf("Array element 4: %lf\n",fractions[4]);

    //d
    fractions[9] = 1.667;

    //e
    //seventh element, thats number 6
    fractions[6] = 3.333;

    //f
    printf(
        "Array element 6: %lf\n"
        "Array element 9: %lf\n",
        fractions[6],fractions[9]);
    
    puts("");
    //g
    for(size_t i = 0; i < SIZE; i++){
        printf("Array element %zu: %lf\n",i,fractions[i]);
    }

}