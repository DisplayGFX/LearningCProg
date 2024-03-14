#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void newMultQuestion(void);

int main(void){
    srand(time(NULL));
    int answer = 0;
    while(true){
        newMultQuestion();
        puts("Very Good!");
    }
}

void newMultQuestion(void){
    int num1 = rand()
    %10 + 1; // lets have mercy on the poor kids
    int num2 = rand()%10 + 1;
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