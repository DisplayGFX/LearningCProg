#include <stdio.h>

#define SIZE 10

int main(void){
    //a
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    //b
	float *nPtr;

    //c
	for(size_t i = 0; i < SIZE; i++){
	    printf("%f\t",numbers[i]);
	}
    puts("");

    //d
	nPtr = &numbers[0];
	nPtr = numbers;

    //e
	for(int i = 0; i < SIZE; i++){
		printf("%f\t",*(nPtr+i));
	}
    puts("");

    //f
	for(size_t i = 0; i < SIZE; i++){
		printf("%f\t",*(numbers+i));
	}
    puts("");

    //g
	for(size_t i = 0; i < SIZE; i++){
		printf("%f\t",nPtr[i]);
	}
    puts("");

    //h
	numbers[4];
    *(numbers + 4);
    nPtr[4];
    *(nPtr + 4);

    //i
	//the address should be the address plus 8 times the size of `float` in bytes. so in this case, `1002500 + 8*4` or `1002532`. the value stored at this location is a float, because its within the array of floats. the value should be 8.8
	
    //j
    // `nPtr -= 4` should be the address minus 4 times the size of the type. In this case, the address is `1002500 + 5*4`, and `4*4` subtracted from it. so it should be `1002504`, which stores the  float. the value should be 1.1
}