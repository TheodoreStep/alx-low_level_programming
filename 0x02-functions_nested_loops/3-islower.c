#include "main.h"
/**
 * _islower - function to check for lowercase
 * @c: parameter to print
 * Return: 1 if lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
