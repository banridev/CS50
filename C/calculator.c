#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
    int x = get_int("x: ");
    int y = get_int("y: ");
    */

    long x = get_long("x: ");
    long y = get_long("y: ");

    // float z = (float) x / (float) y;
    double z = (double) x / (double) y;
    printf("%.50f\n", z);
    // printf("%f\n", z);


/*
    printf("%li\n", x / y);
    printf("%li\n", x + y);
 */
}
