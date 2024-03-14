#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void){
    bool isPrime = false;
    for(int i = 2;i<=100;i++){ // 1 is not a prime number, fun fact.
        isPrime = true;
        for(int j = 2; j<= (int)sqrt(i);j++){
            if((i%j) == 0){
                isPrime = false;
            }
        }
        if (isPrime){
            printf("%d\n",i);
        }
    }
}