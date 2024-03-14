#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

int main(void){
    while(true){        
        srand(time(NULL));
        int num = rand()%1000+1;
        int guess = 0;
        puts("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.");
        printf("%d",num);
        while (num != guess){
            if (guess != 0){
                if(guess < num){
                    puts("Too low. Try again.");
                } else if (guess > num){
                    puts("Too high. Try again.");
                }
            }
            scanf("%d",&guess);
        }
        char input[10];
        puts("Execellent! You guessed the number!\nWould you like to play again (y or n)?");
        scanf("%3s",input); // limits input to the first 3 characters. If they entered way more, thats the users issue.
        if (strcmp(input,"y") != 0){
            break;
        }
    }
}