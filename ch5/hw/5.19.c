#include <stdio.h>

void printSquare(int);

int main(void){
    printSquare(4);
}

void printSquare(int size){
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            printf("%s","*");
        }
        puts("");
    }
}