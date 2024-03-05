#include <stdio.h>
#include <stdlib.h>

int main(void){
    float inradius = 0;
    double pi = 3.14159;
    printf("%s","Enter radius of circle:");
    scanf("%f",&inradius);
    if (inradius < 0 ){
        puts("input outside of range");
        exit(0);
    }

    double radius = (double)inradius;
    printf("Diameter:%f\n",(float)radius*2);
    printf("circumference:%f\n",(float)(2*pi*radius));
    printf("Diameter:%f\n",(float)(pi*radius*radius));
}