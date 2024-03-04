#include <stdio.h>

int main(void){
    int i = 1;
    while (i <=100){
        if (i%10 != 0){
            printf("%s ","*");
        } else {
            printf("%s\n","*");
        }
        i++;
    }
}