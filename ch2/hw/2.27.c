#include <stdio.h>

int main(void){
    //considering we dont learn about even while statements by chapter 2 and it specifically says "within this chapter", I will do it manually
    puts("number\tsquare\tcube");
    printf("%d\t%d\t%d\n",0,0*0,0*0*0);
    printf("%d\t%d\t%d\n",1,1*1,1*1*1);
    printf("%d\t%d\t%d\n",2,2*2,2*2*2);
    printf("%d\t%d\t%d\n",3,3*3,3*3*3);
    printf("%d\t%d\t%d\n",4,4*4,4*4*4);
    printf("%d\t%d\t%d\n",5,5*5,5*5*5);
    printf("%d\t%d\t%d\n",6,6*6,6*6*6);
    printf("%d\t%d\t%d\n",7,7*7,7*7*7);
    printf("%d\t%d\t%d\n",8,8*8,8*8*8);
    printf("%d\t%d\t%d\n",9,9*9,9*9*9);
    printf("%d\t%d\t%d\n",10,10*10,10*10*10);
    
    printf("%s","\n");
    //however, with for loops...
    
    puts("number\tsquare\tcube");
    for(int num = 0;num < 11;num++){
        printf("%d\t%d\t%d\n",num,num*num,num*num*num);
    }
}