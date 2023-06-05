#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   const int MIN = 1;
   const int MAX = 100;
   int answer;
   int gues;
   int guesses;

    srand(time(0)); // This uses the current time as a Seed to generate Number

    answer = (rand() % MAX) + MIN;  // This Will generate the Random Number Between MIN & MAX

    // printf("%d", answer);  // Test to see if the Above Code Works.

   do{
      printf("\nEnter the Number: ");
      scanf("%d", &gues);

      if(gues < answer)
      {
        printf("The Answer is Low!");
      }  
      else if(gues > answer)
      {
        printf("The Answer is High!");
      }
      else
      {
        printf("\nCORRECT, You Won!");
      }
      guesses++;
   } while(gues != answer);

   printf("\n******************\n");
   printf("The Answer is: %d\n", answer);
   printf("Number of Guesses: %d\n", guesses);
   printf("******************\n");
    
    return 0;
}
                  //                   Author: Japhary  follow me on IG @Japhry_