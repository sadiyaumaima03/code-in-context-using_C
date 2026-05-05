#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main(){
        int secret, guess;

        printf("------WELCOME TO THE GUESS GAME------\n");
        printf("Enter your guess:");
        
        srand(time(0));
        secret = rand() % 100 + 1;
        
        while(guess != secret){
            scanf("%d",&guess);
            if(guess < secret){
                printf("Your guess is too low\n");
            } else if(guess > secret){
                printf("Your guess is too high\n");
            }
        }
        printf("Guessed correctly : %d\n",secret);
        printf("GoodBye!!\n");
    return 0;
    }
