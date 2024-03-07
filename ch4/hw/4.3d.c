#include <stdio.h>

int main(void){
    int i = 1;
    while (i<=20){
        printf("%d ",i);
        if (i%5 == 0){
            puts("");
        }
        i++;
    }
}