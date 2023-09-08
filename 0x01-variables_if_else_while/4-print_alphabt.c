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
char i;
while (i <= 'z')
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
i++;
}
putchar('\n');

return (0);
}

