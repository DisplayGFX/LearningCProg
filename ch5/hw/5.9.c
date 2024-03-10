#include <stdio.h>
#include <math.h>

float calcuateCharges(float);

int main(void){
    double sumh = 0;
    double car1h = 0;
    double sumd = 0;
    printf("Please time spent for first car:");
    scanf("%lf",&car1h);
    sumd += calcuateCharges(car1h);
    sumh += car1h;
    double car2h = 0;
    printf("Please time spent for second car:");
    scanf("%lf",&car2h);
    sumd += calcuateCharges(car2h);
    sumh += car2h;
    double car3h = 0;
    printf("Please time spent for third car:");
    scanf("%lf",&car3h);
    sumd += calcuateCharges(car3h);
    sumh += car3h;
    
    puts("Car\tHours\tCharge");
    printf("1\t%f\t%f", car1h,calcuateCharges(car1h));
    printf("2\t%f\t%f", car2h,calcuateCharges(car2h));
    printf("3\t%f\t%f", car3h,calcuateCharges(car3h));
    printf("TOTAL\t%f\t%f",sumh, sumd);
}

double calculateCharges(double hours){
    double charge = 0;
    double hourcharge = ciel(hours); // hours are charged as soon as the next hour is used, best way to represent this policy
    if (hourcharge <=3){
        return 2.00; //initial fee, and negative numbers very unlikely
    } else {
        charge += 2.00;
        hourcharge = hourcharge - 3; //take only hours after inital 3 hour grace period
        charge += hourcharge * .50;
    }
    if (charge > 10){
        return 10.00; //maximum charge per 24 hour period, no car will go over 24 hours
    } else {
        return charge;
    }
}