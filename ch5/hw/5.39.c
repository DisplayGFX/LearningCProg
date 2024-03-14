#include <stdio.h>

int gcd(int,int);

int main(void){
    printf("GCD of 64 and 32 is %d",gcd(64, 32));
}

int gcd(int x, int y){
    if (y == 0){
        return x;
    } else{
        return gcd(y,x%y);
    }
}