#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }
    printf("\n");

     /* my solution to create a square
     for (int i = 0; i < 3; i++)
     {
        printf("###\n");
     } */

     // const int n = 5;
     // int n = get_int("Size: ");

     // code becomes very repetitive, it is better to make a loop
     /* if (n < 1)
     {
        n = get_int("Size: ");
        if (n < 1)
        {
            n = get_int("Size: ");
        }
     } */

  // even using 'while', the code can improve
  // int n = get_int("Size: ");
     /* while (n < 1)
     {
        n = get_int("Size: ")
     } */

     int n;
     do
     {
        n = get_int("Size: ");
     }
     while (n < 1);

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
     }
}
