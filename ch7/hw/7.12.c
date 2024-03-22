// fig07_16.c modified
// Card shuffling and dealing.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

//structs for dealing hand
struct card{
    size_t face;
    size_t suit;
};

struct hand{
    struct card first;
    struct card second;
    struct card third;
    struct card fourth;
    struct card fifth;
};

// prototypes
void shuffle(int deck[][FACES]);
//modified prototype
struct hand deal(int deck[][FACES], const char *face[], const char *suit[]);

//new prototypes
void containsPairs(struct hand givenHand, const char *face[], const char *suit[]);
void containsTwoPairs(struct hand givenHand, const char *face[], const char *suit[]);

int main(void) {
   // initialize deck array
   int deck[SUITS][FACES] = {0};

   srand(time(NULL)); // seed random-number generator
   shuffle(deck); // shuffle the deck

   // initialize suit array                     
   const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};
   
   // initialize face array                    
   const char *face[FACES] = {"Ace", "Deuce", "Three", "Four", "Five", 
       "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    //get hand back from dealing

    struct hand curHand = deal(deck, face, suit); // deal the deck
    printf("%5s of %-8s %zu %zu \n", face[curHand.first.face], suit[curHand.first.suit],curHand.first.face,curHand.first.suit);
    printf("%5s of %-8s %zu %zu \n", face[curHand.second.face], suit[curHand.second.suit],curHand.second.face,curHand.second.suit);
    printf("%5s of %-8s %zu %zu \n", face[curHand.third.face], suit[curHand.third.suit],curHand.third.face,curHand.third.suit);
    printf("%5s of %-8s %zu %zu \n", face[curHand.fourth.face], suit[curHand.fourth.suit],curHand.fourth.face,curHand.fourth.suit);
    printf("%5s of %-8s %zu %zu \n", face[curHand.fifth.face], suit[curHand.fifth.suit],curHand.fifth.face,curHand.fifth.suit);
    puts("");
    //a
    containsPairs(curHand,face,suit);
    puts("");
    //b
    containsTwoPairs(curHand,face,suit);
    puts("");


} 

// shuffle cards in deck
void shuffle(int deck[][FACES]) {
   // for each of the cards, choose slot of deck randomly
   for (size_t card = 1; card <= CARDS; ++card) {
      size_t row = 0; // row number
      size_t column = 0; // column number

      // choose new random location until unoccupied slot found
      do {                                                     
         row = rand() % SUITS;                                 
         column = rand() % FACES;                              
      } while(deck[row][column] != 0);                        

      deck[row][column] = card; // place card number in chosen slot
   } 
} 


// deal cards in deck to a hand
struct hand deal(int deck[][FACES], const char *face[], const char *suit[]) {
    struct hand currHand;

   // deal each of the cards up to 5 cards
   for (size_t card = 1; card <= 5; ++card) {
      // loop through rows of deck
      for (size_t row = 0; row < SUITS; ++row) {
         // loop through columns of deck for current row
         for (size_t column = 0; column < FACES; ++column) {
            // if slot contains current card, display card
            if (deck[row][column] == card) {
                //printf("%5s of %-8s ", face[column], suit[row]);
                switch(card){
                    case 1:
                        currHand.first.face = column;
                        currHand.first.suit = row;
                        break;
                    case 2:
                        currHand.second.face = column;
                        currHand.second.suit = row;
                        break;
                    case 3:
                        currHand.third.face = column;
                        currHand.third.suit = row;
                        break;
                    case 4:
                        currHand.fourth.face = column;
                        currHand.fourth.suit = row;
                        break;
                    case 5:
                        currHand.fifth.face = column;
                        currHand.fifth.suit = row;
                        break;
                }
            } 
         } 
      } 
   }
   return currHand;

} 

//a
void containsPairs(struct hand givenHand, const char *face[], const char *suit[]){

    //lets be a bit extra, and print the pair
    //there feels like a better way to do this.
    if(givenHand.first.face == givenHand.second.face
    || givenHand.first.face == givenHand.third.face
    || givenHand.first.face == givenHand.fourth.face
    || givenHand.first.face == givenHand.fifth.face){
        puts("You have a pair");
        if (givenHand.first.face == givenHand.second.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.first.face], suit[givenHand.first.suit],face[givenHand.second.face], suit[givenHand.second.suit]);
        }
        if (givenHand.first.face == givenHand.third.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.first.face], suit[givenHand.first.suit],face[givenHand.third.face], suit[givenHand.third.suit]);
        }
        if (givenHand.first.face == givenHand.fourth.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.first.face], suit[givenHand.first.suit],face[givenHand.fourth.face], suit[givenHand.fourth.suit]);
        }
        if (givenHand.first.face == givenHand.fifth.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.first.face], suit[givenHand.first.suit],face[givenHand.fifth.face], suit[givenHand.fifth.suit]);
        }
    }
    if(givenHand.second.face == givenHand.third.face
    || givenHand.second.face == givenHand.fourth.face
    || givenHand.second.face == givenHand.fifth.face){
        puts("You have a pair");
        if (givenHand.second.face == givenHand.third.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.second.face], suit[givenHand.second.suit],face[givenHand.third.face], suit[givenHand.third.suit]);
        }
        if (givenHand.second.face == givenHand.fourth.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.second.face], suit[givenHand.second.suit],face[givenHand.fourth.face], suit[givenHand.fourth.suit]);
        }
        if (givenHand.second.face == givenHand.fifth.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.second.face], suit[givenHand.second.suit],face[givenHand.fifth.face], suit[givenHand.fifth.suit]);
        }
    }
    if(givenHand.third.face == givenHand.fourth.face
    || givenHand.third.face == givenHand.fifth.face){
        puts("You have a pair");
        if (givenHand.third.face == givenHand.fourth.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.third.face], suit[givenHand.third.suit],face[givenHand.fourth.face], suit[givenHand.fourth.suit]);
        }
        if (givenHand.third.face == givenHand.fifth.face){
            printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.third.face], suit[givenHand.third.suit],face[givenHand.fifth.face], suit[givenHand.fifth.suit]);
        }
    }
    if(givenHand.fourth.face == givenHand.fifth.face){
        puts("You have a pair");
        printf("%5s of %-8s and %5s of %-8s \n", face[givenHand.fourth.face], suit[givenHand.fourth.suit],face[givenHand.fifth.face], suit[givenHand.fifth.suit]);
    }
}

//b
void containsTwoPairs(struct hand givenHand, const char *face[], const char *suit[]){

    //starting from scratch with better way maybe.
    struct card *cards[5] = {&givenHand.first, &givenHand.second, &givenHand.third, &givenHand.fourth, &givenHand.fifth};
    //you know what, I want to only work on it if I need to.    
}
