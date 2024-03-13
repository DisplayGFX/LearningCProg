#include <stdio.h>
#include <math.h>

int roundToInteger(double);
double roundToTenths(double);
double roundToHundreds(double);
double roundToThousandths(double);

int main(void){
    double input = 0;
    printf("%s","Please input number:");
    scanf("%lf",&input);
    printf("Number:\t%lf\n",input);
    printf("Integer:\t%d\n",roundToInteger(input));
    printf("Tenths:\t\t%.1lf\n",roundToTenths(input));
    printf("Hundreds:\t%.2lf\n",roundToHundreds(input));
    printf("Thousandths:\t%.3lf\n",roundToThousandths(input));
}


int roundToInteger(double in){
    int y = (int)floor(in+.5);
    return y;
}

double roundToTenths(double in){
    double y = floor(in*10+.5)/10;
    return y;
}

double roundToHundreds(double in){
    double y = floor(in*100+.5)/100;
    return y;
}

double roundToThousandths(double in){
    double y = floor(in*1000+.5)/1000;
    return y;
}