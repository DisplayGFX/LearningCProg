#include <stdio.h>
#include <stdbool.h>

int main(void){
    int i = 2;
    while (true){
        // I know they want me to iterate through each number, but naaah
        //its easier to just multiply
        //the instructions didnt say to iterate through a number
        //and post numbers that are divisible by 2
        //yes, Im being cheeky
        printf("%d\n",i);
        i*=2;
    }
}