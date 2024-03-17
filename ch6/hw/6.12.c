#include <stdio.h>

int main(void){
    //a
    //do I need to use loops? okay...

    //yes, not best practice, but to make it easier to look at...
    #define SIZE_A 10

    int counts[SIZE_A];
    for (size_t i = 0 ; i < SIZE_A ; i++){
        counts[i] = 0;
    }
    puts("Part A");
    printf("%s","counts array:");
    for(size_t i = 0; i < SIZE_A ; i++){
        printf("%d  ",counts[i]);
    }

    //b
    #define SIZE_B 15

    int bonus[SIZE_B] = {};
    for(size_t i = 0; i < SIZE_B; i++){
        bonus[i]++;
    }

    puts("Part B");
    printf("%s","bonus array:");
    for(size_t i = 0; i < SIZE_B ; i++){
        printf("%d  ",bonus[i]);
    }

    //c

    #define SIZE_C 12
    float monthlyTemperatures[SIZE_C];
    for(size_t i = 0; i < SIZE_C; i++){
        printf("%s","Please enter monthly tempature:");
        scanf("%f",&monthlyTemperatures[i]);
    }

    //d
    #define SIZE_D 5
    int bestScores[5] = {1,2,3,4,5};
    for(size_t i = 0; i< SIZE_D; i++){
        printf("Score %d: %d\n",i,bestScores[i]);
    }

}