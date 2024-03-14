#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int flip(void);

int main(void){
    srand(time(NULL));
    int thisFlip = -1;
    int headCount = 0;
    int tailCount = 0;
    for(int i = 0; i < 100;i++){
        thisFlip = flip();
        if (thisFlip == 1){
            printf("%s","H ");
            headCount++;
        } else if (thisFlip == 0){
            printf("%s","T ");
            tailCount++;
        } else {
            puts("THIS IS NOT MY BEAUTIFUL HOUSE, THIS IS NOT MY BEAUTIFUL WIFE");
        }
    }
    printf("Heads: %d\tTails: %d\n",headCount,tailCount);
}

int flip(void){
    return rand()%2;
}