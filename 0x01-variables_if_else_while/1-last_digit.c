#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
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
/* your code goes there */
if (n > 5)
printf("last digit of %d is %d and is greater than 5", n % 10);
else if (n == 0)
printf("last digit of %d is %d and is 0", n);
else if (n < 0 && n != 0)
printf("last digit of %d is %d and is less than 6 and not 0", n);
printf("\n");
return (0);
}