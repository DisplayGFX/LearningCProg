// fig04_07.c Modified
// Replace the break statement in a for statement.
#include <stdio.h>

int main(void) {
   int x = 1; // declared here so it can be used after loop
   // loop 10 times or stop when x = 5
   for (; x <= 10 && !(x==5); ++x) {
      printf("%d ", x);
   }
   printf("\nBroke out of loop at x == %d\n", x);
}