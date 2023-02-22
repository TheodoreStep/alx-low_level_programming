#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: parameter to print
 * Return: 1 if n is greater than zero
 * and 0 if n is zero
 * -1 if otherwise
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
