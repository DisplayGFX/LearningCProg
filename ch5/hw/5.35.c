#include <stdio.h>

int fibonacci(int);

int main (void){
    printf("10th Fib: %d",fibonacci(10));
}

int fibonacci(int nth){
    int first = 0;
    int second = 1;
    int sum = 0;
    if (nth == 1){
        return first;
    } else if (nth == 2){
        return second;
    } else if (nth < 1){
        puts("invalid configuration");
        return 0;
    }

    for(int i = 3;i<=nth;i++){
        printf("%d\t%d\t%d\t",i,first,second);
        sum = first + second;
        first = second;
        second = sum;
        printf("%d\n",sum);
    }
    return sum;
}