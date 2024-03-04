#include <stdio.h>

int main(void){
    int i = 1;
    while (i <=1000000000){
        if (i%100000000 == 0){
            printf("%d\n",i);
        }
        i++;
    }
}