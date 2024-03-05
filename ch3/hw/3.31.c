#include <stdio.h>
/*
if (y == 8)  
if (x == 5)  
puts("@@@@@");  
else  
puts("#####");  
puts("$$$$$");  
puts("&&&&&"); 
*/
int main(void){
    int x = 0;
    int y = 0;
    
    
    puts("part a");
    x = 5;
    y = 8;

    //no modification needed
    if (y == 8)  
    if (x == 5)  
    puts("@@@@@");  
    else  
    puts("#####");  
    puts("$$$$$");  
    puts("&&&&&"); 

    puts("part b");
    x = 5;
    y = 8;


    if (y == 8)  
    if (x == 5)  
    puts("@@@@@");  
    else{  
    puts("#####");  
    puts("$$$$$");  
    puts("&&&&&"); 
    }

    puts("part c");
    x = 5;
    y = 8;

    if (y == 8)  
    if (x == 5)  
    puts("@@@@@");  
    else{  
    puts("#####");  
    puts("$$$$$");}  
    puts("&&&&&"); 

    puts("part d");
    x = 5;
    y = 7;

    if (y == 8){  
    if (x == 5)  
    puts("@@@@@");}  
    else{  
    puts("#####");  
    puts("$$$$$");  
    puts("&&&&&"); 
    }
}