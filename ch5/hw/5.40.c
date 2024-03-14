#include <stdio.h>

static int counter = 1;

int main(void){
    counter++;
    printf("%d\n",counter);
    main();
}