// fig05_09.c modified
// Recursive factorial function.
#include <stdio.h>

unsigned long long int factorial(int number, int iteration); 

int main(void) {
   // calculate factorial(i) and display result
   puts("most recursion cases will delve into the recursion until it hits the base case,");
   puts("then the rest of the 'tower of recursion' collapses. You can see this with the iteration Depth,");
   puts("which shows you the depth to which the recursion delve to.");
   for (int i = 0; i <= 21; ++i) {
      printf("%s","in\treturn\titeration depth\n");
      printf("%d! = %llu\n", i, factorial(i,0));
   } 
} 

// recursive definition of function factorial  
unsigned long long int factorial(int number, int iteration) { 
   if (number <= 1) { // base case
      printf("%d\t%d\t%d\n",number,1,iteration+1);             
      return 1;                                
   }                                           
   else { // recursive step 
      int return_number = number * factorial(number - 1,iteration+1); 
      printf("%d\t%d\t%d\n",number,return_number,iteration+1);                 
      return return_number; 
   }                                           
}                                              
