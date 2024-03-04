#include <stdio.h>

int main(void){
    int A = 3;
    puts("A\tA+2\tA+4\tA+6");
    while(A<=15){
        printf("%d\t%d\t%d\t%d\n",A,A+2,A+4,A+6);
        A+= 3;
    }
}