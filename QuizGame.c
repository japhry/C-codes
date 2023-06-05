#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

int main()
{
    char questions[][100] = {"1.) Who is the Inventor of C Programming Language ?",
                        "2.) What Year did the C Programming Language Debut ?",
                        "3.) Who is the Predicessor of the C Programming Language ?"};
    char options[][100] = {"A. Denis Ritchie", "B. Japhary Hashim", "C. Michael Jackson", "D. Elizabeth Beneth",
                      "A. 2000", "B. 1990", "C. 1980", "D. 1972",
                      "A. Java", "B. C++", "C. C#", "D. B"};
    char answers[3] = {'A', 'D', 'D'};
    int numberofGuesses = sizeof(questions)/sizeof(questions[0]);
    
    char userInput;
    int score;

    printf("\n©©©©©©©©©©©©©©  QUIZ GAME  ©©©©©©©©©©©©©©\n");

    for(int i = 0; i < numberofGuesses; i++)
    {
        printf("%s\n", questions[i]);
    
       for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
          printf("%s\n", options[j]);
      }

      printf("Enter the Correct Answer: ");
      scanf("%c", &userInput);
      scanf("%c"); // Clears Input from input Buffer. (But I dont know why it still there...)

      if (userInput == answers[i])
      {
        printf("\nCORRECT!\n");
        score++;
      }
      else
      {
        printf("WRONG!\n");
      }
    }
    printf("******************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberofGuesses);
    printf("******************\n");

    return 0;
}

                  //                   Author: Japhary  follow me on IG @Japhry_