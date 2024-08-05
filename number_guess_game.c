#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  //Generating random number between 1-100
  int number;
  srand(time(0));
  number= rand()%100+1;
  //printf("The random number is %d",number);

  //taking the input from the user;
  int guess;
  printf("Guess the number between 1-100\n");
  scanf("%d",&guess);

  //generating the loop for the game
  while(guess!=number){
    if(guess<number){
      printf("Please enter a higher number\n");
    }else{
      printf("Please enter a lower number\n");
    }
    scanf("%d",&guess);
  }

  printf("You have enterted %d which is correct.\n Congratulation you won!!!");
  
  return 0;
}
