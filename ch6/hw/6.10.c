#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    int counter[9] ={};
    int salary = 0;
    while(true){
        printf("%s", "Please enter the salary(sentinel is 1):");
        scanf("%d",&salary);
        if (salary == 1){
            break;
        }
        salary -= 200;
        salary /= 100; // int divison rounds to nearest digit
        if (salary < 0){
            puts("AND YOU MAY FIND YOURSELF");
            exit(1);
        } else if (salary > 8){ //$1000 and over
            counter[8]++;
        } else { //between 200 and 999, or in real terms, between 0 and 7
            counter[(size_t)salary]++;
        }
    }
    for(size_t i = 0;i < 9; i++){
        if (i == 8){
            printf("Number of employees paid $1000 or over: %d\n",counter[i]);
        } else {
            printf("Number of employees paid between $%zu00 and $%zu99 : %d\n",i+2,i+2,counter[i]);
        }
    }
}