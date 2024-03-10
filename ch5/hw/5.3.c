#include <stdio.h>
#include <math.h>

int main(void){
    float print = 0;

    print = sqrt(900.0);
    printf("The square root of 900 is %f\n",print);
    print = sqrt(9.0);
    printf("The square root of 9 is %f\n",print);

    print = cbrt(27.0);
    printf("The cube root of 27 is %f\n",print);
    print = cbrt(-8.0);
    printf("The cube root of -8 is %f\n",print);

    print = exp(1.0);
    printf("e to 1 is %f\n",print);
    print = exp(2.0);
    printf("e to 2 is %f\n",print);

    print = log(2.718282);
    printf("natural log of 2.718282 is %f\n",print);
    print = log(7.389056);
    printf("natural log of 7.389056 is %f\n",print);

    print = log10(1.0);
    printf("log of 1 is %f\n",print);
    print = log10(10.0);
    printf("log of 10 is %f\n",print);
    print = log10(100.0);
    printf("log of 100 is %f\n",print);

    print = fabs(13.5);
    printf("absolute value of 13.5 is %f\n",print);
    print = fabs(0.0);
    printf("absolute value of 0.0 is %f\n",print);
    print = fabs(-13.5);
    printf("absolute value of -13.5 is %f\n",print);

    print = ceil(9.2);
    printf("rounding up of 9.2 is %f\n",print);
    print = ceil(-9.8);
    printf("rounding up of -9.8 is %f\n",print);

    print = floor(9.2);
    printf("rounding down of 9.2 is %f\n",print);
    print = floor(-9.8);
    printf("rounding down of -9.8 is %f\n",print);

    print = pow(2,7);
    printf("2 raised to 7 is %f\n",print);
    print = pow(9,0.5);
    printf("9 raised to .5  is %f\n",print);

    print = fmod(13.657,2.333);
    printf("the remainder of 13.657 / 2.333  is %f\n",print);

    print = sin(0.0);
    printf("sine of 0 is %f\n",print);

    print = cos(0.0);
    printf("cosine of 0 is %f\n",print);

    print = tan(0.0);
    printf("tangent of 0 is %f\n",print);
}