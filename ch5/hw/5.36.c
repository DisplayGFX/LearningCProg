#include <stdio.h>
#include <stdlib.h>

void hanoiInst(int,int,int,int);

int main(void){
    hanoiInst(3,1,3,2);
}

void hanoiInst(int numDisks, int initLoc, int finalLoc, int tempLoc){

    //error checking
    if (numDisks < 1 || initLoc == finalLoc || initLoc == tempLoc || finalLoc == tempLoc){
        puts("Invalid input, exiting now");
        exit(1);
    }
    

    if (numDisks == 1){
        printf("%d -> %d\n",initLoc,finalLoc);
    } else {
        hanoiInst(numDisks-1,initLoc,tempLoc,finalLoc); // step 1
        //1 disk left on init peg, temp peg should have n-1 disks, final peg should be empty
        printf("%d -> %d\n",initLoc,finalLoc); // step 2
        // init peg should be empty, temp peg should have n disks, final peg should be empty
        hanoiInst(numDisks-1,tempLoc,finalLoc,initLoc);
    }
}
