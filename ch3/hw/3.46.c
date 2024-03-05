#include <stdio.h>

int main(void){

    //according the the US Census Beuro https://www.census.gov/library/stories/2023/11/world-population-estimated-eight-billion.html
    //world population hit 8 billion sometime last year
    //fudging the number to be 8.1, as I have seen other estimates to be at this number for march 2024 
    double worldpop = 8.1e9;
    //according to the UN population division https://population.un.org/wpp/
    //growth rates in 2022 was 0.9%
    double rate = 0.9/100;
    int curyear = 2024;
    double added = 0;
    int i = 1;
    puts("year\tworld pop\tadded");
    printf("%d\t%f\tN/A\n",curyear,worldpop);
    while (i < 100){
        curyear++;
        added = worldpop*rate;
        worldpop += added;
        printf("%d\t%.0f\t%.0f\n",curyear,worldpop,added);
        i++;
    }
}