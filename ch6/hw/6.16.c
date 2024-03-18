#include <stdio.h>

int main(void){
    int sales[3][5];
    int counter = 0;
    for (size_t row = 0; row <= 2; ++row) {
        for (size_t column = 0; column <= 4; ++column) {
            counter++;
            printf("%d: sales[%zu][%zu]\n",counter,row,column);
        }
    }       
}