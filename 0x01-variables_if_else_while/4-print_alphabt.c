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
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}

putchar('\n');
return (0);
}
