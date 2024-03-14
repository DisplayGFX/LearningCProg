#include <stdio.h>
#include <math.h>

double distance(double,double,double,double);

int main(void){
    printf("Distance of 6,3 to 1,2 is %lf", distance(6.0,3.0,1.0,2.0));
}

double distance(double x1,double y1, double x2, double y2){
    double xdist = fabs(x1-x2);
    double ydist = fabs(y1-y2);
    return sqrt(pow(xdist,2)+pow(ydist,2));
}