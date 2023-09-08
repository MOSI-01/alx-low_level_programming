#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase letters from 'z' to 'a' in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;

for (i = 'z'; i >= 'a'; i--)
putchar(i);

putchar('\n');

return (0);
}
