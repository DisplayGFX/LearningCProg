#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

void newMultQuestion(int);

int main(void){
    srand(time(NULL));
    int answer = 0;
    int difficulty = 0;
    printf("%s","Please enter difficulty: ");
    scanf("%d",&difficulty);
    while(true){
        newMultQuestion(difficulty);
        puts("Very Good!");
    }
}

void newMultQuestion(int diff){
    int num1 = rand() % (int)pow(10.0,(double)diff) + 1;
    int num2 = rand() % (int)pow(10.0,(double)diff) + 1;
    int ans = num1 * num2;
    int guess = 0;
    printf("How much is %d times %d?\n",num1,num2);
    printf("%s","Please enter your guess here: ");
    scanf("%d",&guess);
    while (guess != ans){
        puts("No. Please try again.");
        printf("%s","Please enter your guess here: ");
        scanf("%d",&guess);
    }
}