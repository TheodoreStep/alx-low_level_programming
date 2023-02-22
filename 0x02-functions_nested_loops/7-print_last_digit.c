#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @i: parater to compute
 *
 * Return: always r
 */

int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (i < 0)
		r = -(r);
	_putchar(r + '0');
	return (r);
}
