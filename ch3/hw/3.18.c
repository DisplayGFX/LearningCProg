#include <stdio.h>

int main(void){
    // Start loop
    while(1){
		// initalize the input
        float sinput = 0;
		// take the input for the salesperson's gross sales
        printf("%s","Enter sales in dollars (Enter -1 to stop):");
        scanf("%f",&sinput);
		// check if the value is the sentinel value
        if (sinput == -1){
            // exit the program if above is true
            puts("Exiting program");
            exit(0);
        }
		// multiply the gross sales by 9% and store the value
        float salescut = 0;
        salescut = .09*sinput;
		// make a sum of the salesperson's wage
        float sum = 0;
		// add $200 to the sum as salary
        sum += 200;
		// add the 9% to the sum
        sum += salescut;
		// print the sum
        printf("Salary is %.2f",sum);
		// repeat above
    }
}