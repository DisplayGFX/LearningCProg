#include <stdio.h>
#include <stdbool.h>
int main(void){
    int input = 0;
    double rate = 0;
    int hours = 0;
    double gross = 0;
    double paycheck = 0;
    int items = 0;
    double piecework = 0;
    while(true){
        printf("Please enter code for employee:");
        scanf("%d",&input);
        switch (input){
            case 1:
                printf("%s","please enter salary:");
                scanf("%lf",&paycheck);
                break;
            case 2:
                printf("%s", "Please enter hourly rate:");
                scanf("%lf",&rate);
                printf("%s", "Please enter hours:");
                scanf("%d",&hours);
                if (hours <=40){
                    paycheck += hours*rate;
                } else {
                    paycheck += 40*hours;
                    paycheck += 1.5*rate*(hours-40);
                }
                break;
            case 3:
                paycheck += 250;
                printf("%s", "Please enter gross sales:");
                scanf("%lf",&gross);
                paycheck += gross*5.7/100;
                break;
            case 4:
                printf("%s", "Please enter items made");
                scanf("%lf",&items);
                printf("%s", "Please enter piece rate");
                scanf("%lf",&piecework);
                paycheck += items*piecework;
                break;
            default:
                puts("Please enter a valid number");
                break;
        }
        printf("your paycheck is %.2f",paycheck);
    }
}