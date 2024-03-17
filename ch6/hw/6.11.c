// fig06_12.c modified
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

#include <stdbool.h>

int main(void) {
   int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37}; 
   
   puts("Data items in original order");
   
   // output original array
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   bool swapdone = false;
                  
   for (int pass = 1; pass < SIZE; ++pass) {    
      swapdone = false;
      //a
      //to improve pass efficency as described in part a
      // replace the - 1 in the below linw with the amount of passes
      // pass starts at 1, so first pass nothing changes, but as pass increases
      // desired optimization is achieved            
      for (size_t i = 0; i < SIZE - pass; ++i) {               
         if (a[i] > a[i + 1]) {                             
            int hold = a[i];                                
            a[i] = a[i + 1];                                
            a[i + 1] = hold;
            swapdone = true;                                
         }                                                  
      }
      //b
      //added lines outside of loop, an include for bool
      //and added the below if condition. Will stop passes if there were no swaps the entire pass.
      //like described, this means the array is sorted.
      if(!swapdone){
         break;
      }                                                     
   }                                                        

   puts("\nData items in ascending order");

   // output sorted array
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   puts("");
} 