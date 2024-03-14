#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

void newMultQuestion(int);
void newAddQuestion(int);
void newSubQuestion(int);


int main(void){
    srand(time(NULL));
    int answer = 0;
    int difficulty = 0;
    int type = 0;
    printf("%s","Please enter difficulty: ");
    scanf("%d",&difficulty);
    printf("%s","Please enter type (1 = addition, 2 = subtraction, 3 = multiplication, 4 = random mix): ");
    scanf("%d",&type);
    if (type == 3){
        while(true){
            newMultQuestion(difficulty);
            puts("Very Good!");
        }
    } else if (type == 2){
        while(true){
            newSubQuestion(difficulty);
            puts("Very Good!");
        }
    } else if (type == 1){
        while(true){
            newAddQuestion(difficulty);
            puts("Very Good!");
        }
    } else if (type == 4){
        int randnum = 0;
        while (true){
            randnum = rand()%3;
            if(randnum == 0){
                newMultQuestion(difficulty);
            } else if (randnum == 1){
                newSubQuestion(difficulty);
            } else {
                newAddQuestion(difficulty);
            }
            puts("Very Good!");
        }
    } else {
        puts("invalid type");
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
void newSubQuestion(int diff){
    int num1 = rand() % (int)pow(10.0,(double)diff) + 1;
    int num2 = rand() % (int)pow(10.0,(double)diff) + 1;
    int ans = num1 - num2;
    int guess = 0;
    printf("How much is %d minus %d?\n",num1,num2);
    printf("%s","Please enter your guess here: ");
    scanf("%d",&guess);
    while (guess != ans){
        puts("No. Please try again.");
        printf("%s","Please enter your guess here: ");
        scanf("%d",&guess);
    }
}
void newAddQuestion(int diff){
    int num1 = rand() % (int)pow(10.0,(double)diff) + 1;
    int num2 = rand() % (int)pow(10.0,(double)diff) + 1;
    int ans = num1 + num2;
    int guess = 0;
    printf("How much is %d plus %d?\n",num1,num2);
    printf("%s","Please enter your guess here: ");
    scanf("%d",&guess);
    while (guess != ans){
        puts("No. Please try again.");
        printf("%s","Please enter your guess here: ");
        scanf("%d",&guess);
    }
}