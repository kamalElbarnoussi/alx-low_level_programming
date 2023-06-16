#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random number and determines its sign.
 * It prints whether the number is positive, negative, or zero.
 * The random number is generated using the rand() function after
 * seeding the random number generator with the current time.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
    int n;

    /* Code to generate a random number */
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Code to determine the sign of the number */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return 0;
}
