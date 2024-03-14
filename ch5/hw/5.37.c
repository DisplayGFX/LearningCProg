#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main(void){
    towers_hanoi_rev(25);
}

//okay, not my code, but I couldnt crack it in the same amount of moves. so Ill reverse engineer it and adapt it to the requested content.
void towers_hanoi(int n) 
{ 
 int x; 
 for(x=1;x<(1<<n);x++) 
  printf("%d -> %d\n",(x&(x-1))%3+1,(((x |(x-1)) + 1)%3)+1); //????????????????
} 


void towers_hanoi_rev(int n) 
{ 
 int x; 
 int first = 0;
 int second = 0;
 for(x=1;x<(1<<n);x++){ 
    //printf("x:%d\n",x);
    first = (x&(x-1)) /// bitwise anding x and x minus 1 ? How? why?
    %3 // getting 0, 1, or 2, modulous.
    +1;// adding 1 to identify the right pole
    //printf("init: %d\n",x&(x-1));
    second = ((
        (x |(x-1)) //bitwise or for towers of hanoi of x and x-1.... uhhh
    + 1) // adding 1? why?
    %3) // mod 3 to get 0, 1, or 2
    +1; // adjust to id right pole
    //printf("final: %d\n",(x |(x-1))+1);
    printf("%d -> %d\n",first,second);
  }
} 
