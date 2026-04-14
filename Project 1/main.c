#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int num = (rand() % 100) + 1;
    int guesses = 0;
    int guessed ;

   // printf("Random Number: %d\n", num);


    do {
        printf("guess the number");
        scanf("%d", &guessed);
        if (guessed > num){
            printf("lower number please !\n");
        }
        else if (guessed < num){
            printf("higher number please !\n");
        }
        
        guesses++ ;
    
    } while (guessed != num);
    

    printf("you guessed the number in %d guesses", guesses) ;

    return 0 ;
}