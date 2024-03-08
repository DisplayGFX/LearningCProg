// fig04_05.c Modified
// Counting letter grades with if...else.
#include <stdio.h>

int main(void) {
   int aCount = 0;
   int bCount = 0; 
   int cCount = 0; 
   int dCount = 0; 
   int fCount = 0; 

   puts("Enter the letter grades.");
   puts("Enter the EOF character to end input.");
   int grade = 0; // one grade 

   // loop until user types end-of-file key sequence
   while ((grade = getchar()) != EOF) {
      if (grade == 'A' || grade == 'a'){
         ++aCount;
      } else if (grade == 'B' || grade == 'b'){
         ++bCount;
      } else if (grade == 'C' || grade == 'c'){
         ++cCount;
      } else if (grade == 'D' || grade == 'd'){
         ++dCount;
      } else if (grade == 'F' || grade == 'f'){
         ++fCount;
      } else if (grade == '\n' || grade == '\t' || grade == ' '){      
      } else {
         printf("%s", "Incorrect letter grade entered."); 
         puts(" Enter a new grade."); 
      }
   } // end while

   // output summary of results
   puts("\nTotals for each letter grade are:");
   printf("A: %d\n", aCount);
   printf("B: %d\n", bCount); 
   printf("C: %d\n", cCount); 
   printf("D: %d\n", dCount); 
   printf("F: %d\n", fCount); 
}