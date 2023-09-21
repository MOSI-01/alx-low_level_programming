#include "main.h"
/**
 * print_last_digit - print the last digit
 * @i: funtion parameter
 *
 * Return: n
 */

int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	 _putchar('\n');
	return (n);
}
