#include <stdio.h>

int main(void){
    int N = 1;
    puts("N\t10*N\t100*N\t1000*N");
    while(N<11){
        printf("%d\t%d\t%d\t%d\n",N,10*N,100*N,1000*N);
        N++;
    }
}