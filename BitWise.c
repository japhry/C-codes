#include <stdio.h>

int main()
{
    // Bitwise Operator >>>> Are Special Operator used in bit level programming.

    /*
          & = AND
          | = OR
          ^ = Exclusive OR (XOR)
          << = Left Shift
          >> = Right shift
    */
     
     int a = 14;  // 14 = 00001110
     int b = 7;   // 7  = 00000111
     int c = 0;   // C  = 00000000

     c = a & b;
     printf("\nThe Result Wen use Use (&): %d\n", c);

     c = a | b;
     printf("The Result Wen use Use (|): %d\n", c);
     c = a ^ b;
     printf("The Result Wen use Use (^): %d\n", c);

     c = a << 1;
     printf("The Result Wen use Use (<<): %d\n", c);

     c = a >> 1;
     printf("The Result Wen use Use (>>): %d\n\n", c);

    return 0;
}

  // Array - A data Structure that can store many values of the same data type.
#include <stdio.h>

int main()
{
    double bei[] = {500, 600, 700, 800, 900, 1000, 2000};
    // If you want to display all the data inside an array do this.
  for(int i = 0; i < sizeof(bei)/sizeof(bei[0]); i++)
  {
        printf("%.2lf Tsh.\n", bei[i]);
  }
    //printf("%.2lf Tsh.", bei[4]); --> to display single data.

    //or

    double miaka[5];

    miaka[0] = 2020;
    miaka[1] = 2021;
    miaka[2] = 2022;
    miaka[3] = 2023;
    miaka[4] = 2024;

    //printf("\n%d Bytes.", sizeof(miaka));   // Display Multiple Values

   printf("\n%.0lf", miaka[3]); //--> Display Single Value

    return 0;
}

// Follow me on Instagram @Japhry_