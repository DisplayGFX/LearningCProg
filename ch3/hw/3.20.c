#include <stdio.h>

int main(void){
    // initialize value for hours worked
    int hours = 0;
	// initialize value for hourly rate
    float rate = 0;
	// initialize value for sum
    float salary = 0;
    while(1){// start loop
        //take in hours worked
        printf("%s","Enter hours worked (Enter -1 to stop):");
        scanf("%d",&hours);
        //check for sentinel value
        if (hours == -1){
            //if hours worked is sentinel value
            // exit the program if above is true
            puts("Exiting program");
            exit(0);
        }
        //take in hourly rate
        printf("%s","Enter hourly rate:");
        scanf("%f",&rate);
        //if less than or equal to 40 hours
        if(hours <= 40){
            //multiply hours worked by hourly rate
            //add to sum
            salary = hours * rate;
        }
        //if more than 40 hours
        else if (hours > 40){
            //multiply hourly rate by 40 hours, add to sum
            salary = rate * 40;
            //subtract 40 from hours worked, store value
            int overtime = hours - 40;
            //multiply hourly rate by 1.5, store as overtime rate
            float overtime_rate = rate*1.5;
            //multiply hours worked by overtime rate
            //add above to sum
            salary += overtime*overtime_rate;
        }
        

        //print out sum
        printf("Salary is %.2f\n",salary);
    }
}