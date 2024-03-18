#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 20

int main(void){
    int input[SIZE];
    int in = 0;
    for (size_t i = 0; i < SIZE;i++){
        printf("%s","Please input a number between 10 and 100");
        scanf("%d",&in);
        if (in < 10 || in > 100){
            puts("Invalid input, please try again");
            exit(1);
        } else {
            input[i] = in;
        }
        //as far as the algo is concerned, we print here.
        //but "use the smallest possible array"
        //do we need an array? if the only concern is array size
        //then the algorithm can be as time inefficent as I want
        bool unique = true;
        for(size_t s = 0; s < i; s++){
            if ( input[s] == input[i]){
                unique = false;
            }
        }
        if (unique){
            printf("%d ",input[i]);
        }

        //I'm sure the intention of the question was
        //"print all of the unique numbers each time a number is read"
        //but thats not how it was worded.
    }
}