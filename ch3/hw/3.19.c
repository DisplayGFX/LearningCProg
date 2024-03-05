#include <stdio.h>

int main(void){
    //start loop
    while(1){
		// take in loan principal
        float principal = 0;
        printf("%s","Enter loan prinicpal (Enter -1 to stop):");
        scanf("%f",&principal);
		// check if loan is sentinel value
        if(principal == -1){
            // 	exit program if above is true
            puts("exiting program");
            exit(0);
        }
		// take in interest rate
        float interest = 0;
        printf("%s","Enter interest rate:");
        scanf("%f",&interest);
		// take in loan term
        int term = 0;
        printf("%s","Enter term of loan in days:");
        scanf("%d",&term);
		// calculate the interest accumulated with this formula
		// 	`interest = principal * rate * days/ 365`
        float charge = 0;
        charge = principal*interest*term/365;
        //print the interest charged
        printf("Interest charge is %d\n",charge);
		// repeat loop
    }
}