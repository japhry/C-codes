#include <stdio.h>
// Enum (Enumeration) ==> A User Defined type of named integer identifier. Helps to make a program more readable.
//                   Are Constants. 

enum Day{Mon = 1, Tue = 2, Wed  =3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};

int main()
{
    enum Day today = Mon; 

    // printf("%d", today);  //Also they are not STRING, but they can be treated as int

    if (today == Sat || today == Sun)
    {
        printf("\nWow! Today is Weekend, Party Time :)");
    } 
    else
    {
        printf("\nIt's a Working Day, Go back to Work :(");
    }  

    return 0;
}

// Follow me on Instagram @Japhry_