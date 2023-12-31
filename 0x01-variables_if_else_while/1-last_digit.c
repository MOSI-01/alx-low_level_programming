#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that generates a random number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
{
printf("last digit of %d is %d and is greater than 5", n, n % 10);
}
else if (n == 0)
{
printf("last digit of %d is %d and is 0", n, n % 10);
}
else if (n < 6 && n != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0", n, n % 10);
}

printf("\n");
return (0);
}
