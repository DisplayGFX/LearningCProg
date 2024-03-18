#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main(void){
    srand(time(NULL));
    int tally[11] = {};//results range from 2 to 12, so 11 values
    int die1;
    int die2;
    int sum;
    for(int i = 0; i < ROLLS; i++){
        die1 = rand()%6 + 1;
        die2 = rand()%6 + 1;
        sum = die1 + die2;
        tally[(sum-2)]++;
    }
    puts("number of rolls\t2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12");
    printf("%15s","");
    for(size_t i = 0; i < 11; i++){
        printf("\t%d",tally[i]);
    }
    puts("");
    printf("%15s","Expected rolls");
    printf("\t%d",(int)(((float)1/(float)36)*ROLLS));//2
    printf("\t%d",(int)(((float)2/(float)36)*ROLLS));//3
    printf("\t%d",(int)(((float)3/(float)36)*ROLLS));//4
    printf("\t%d",(int)(((float)4/(float)36)*ROLLS));//5
    printf("\t%d",(int)(((float)5/(float)36)*ROLLS));//6
    printf("\t%d",(int)(((float)6/(float)36)*ROLLS));//7
    printf("\t%d",(int)(((float)5/(float)36)*ROLLS));//8
    printf("\t%d",(int)(((float)4/(float)36)*ROLLS));//9
    printf("\t%d",(int)(((float)3/(float)36)*ROLLS));//10
    printf("\t%d",(int)(((float)2/(float)36)*ROLLS));//11
    printf("\t%d",(int)(((float)1/(float)36)*ROLLS));//12
    puts("");
}