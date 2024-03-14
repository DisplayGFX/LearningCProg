#include <stdio.h>

void printSquare(int,char);

int main(void){
    printSquare(4,'#'); //to pass a char instead of a string, single quotes are needed.
}

void printSquare(int size,char fillCharacter){
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            printf("%c",fillCharacter);
        }
        puts("");
    }
}