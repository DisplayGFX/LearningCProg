#include <stdio.h>
#include <math.h>

int main(void){
    float print = 0;

    printf("sqrt(x):y...\t"); 
    printf("900:%.0f\t",sqrt(900.0));
    printf("9:%.0f\t",sqrt(9));
    printf("100:%.0f\t",sqrt(100.0));
    puts("");

    printf("cbrt(x):y...\t"); 
    printf("27:%.0f\t",cbrt(27.0));
    printf("-8:%.0f\t",cbrt(-8.0));
    puts("");
    
    printf("exp(x):y...\t"); 
    printf("1:%.3f\t",exp(1.0));
    printf("2:%.3f\t",exp(2.0));
    puts("");

    printf("log(x):y...\t"); 
    printf("2.718282:%.0f\t",log(2.718282));
    printf("7.389056:%.0f\t",log(7.389056));
    puts("");

    printf("log10(x):y...\t"); 
    printf("1:%.2f\t",log10(1.0));
    printf("10:%.2f\t",log10(10.0));
    printf("100:%.2f\t",log10(100.0));
    puts("");

    printf("fabs(x):y...\t");
    printf("13.5:%.1f\t",fabs(13.5));
    printf("0.0:%.1f\t",fabs(0.0));
    printf("-13.5:%.1f\t",fabs(-13.5));
    puts("");

    printf("ceil(x):y...\t");
    printf("9.2:%.0f\t",ceil(9.2));
    printf("-9.8:%.0f\t",ceil(-9.8));
    puts("");

    printf("floor(x):y...\t");
    printf("9.2:%.0f\t",floor(9.2));
    printf("-9.8:%.0f\t",floor(-9.8));
    puts("");

    printf("pow(x,y):z...\t");
    printf("2,7:%.0f\t",pow(2,7));
    printf("9,.5:%.0f\t",pow(9,0.5));
    puts("");

    printf("fmod(x,y):z...\t");
    printf("13.657,2.333:%.3f\t",fmod(13.657,2.333));
    puts("");

    printf("sin(x):y...\t");
    printf("0:%.2f\t",sin(0));
    printf("30:%.2f\t",sin(30));
    printf("60:%.2f\t",sin(60));
    printf("90:%.2f\t",sin(90));
    puts("");

    printf("cos(x):y...\t");
    printf("0:%.2f\t",cos(0));
    printf("30:%.2f\t",cos(30));
    printf("%s","\t"); // alignment
    printf("60:%.2f\t",cos(60));
    printf("90:%.2f\t",cos(90));
    puts("");

    printf("tan(x):y...\t");
    printf("0:%.2f\t",tan(0));
    printf("30:%.2f\t",tan(30));
    printf("60:%.2f\t",tan(60));
    printf("%s","\t"); // alignment
    printf("90:%.2f\t",tan(90));
    puts("");
}