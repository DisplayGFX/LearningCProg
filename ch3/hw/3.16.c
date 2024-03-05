#include <stdio.h>
#include <stdbool.h>
int main(void){
    // outside of loop, initilize stored miles and stored gallons
    float storedmiles = 0;
    float storedgallons = 0;
    bool flag = true;
    while(flag){

        // inside the loop, initalize the miles and gallon variables
        float inmiles = 0;
        float ingallons = 0;

        // take in miles driven as float
        printf("%s","Enter the miles driven (-1 to end):");
        scanf("%f",&inmiles);

        // if either/miles is a sentinel value, exit loop
        if(inmiles == (float)-1){
            puts("End of Entry");
            flag = false;
            continue;
        }
        puts("");

        // take in gallons used as float
        printf("%s","Enter the gallons used:");
        scanf("%f",&ingallons);

        // divide miles per gallon
	    // print a the mpg number
        printf("The miles/gallon for this tank was %f\n",(inmiles/ingallons));

        // add the miles and the gallons to the stored miles/gallons
        storedmiles += inmiles;
        storedgallons += ingallons;

        //repeat loop
    }

	//once outside the loop, divide the stored miles by the stored gallons
    //print the above number
	printf("The overall miles/gallon was %f",(storedmiles/storedgallons));

}