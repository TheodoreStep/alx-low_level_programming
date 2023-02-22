#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 *@r: parameter to compute
 * Return: always r
 */

int _abs(int r)
{
	if (r < 0)
		r = -(r);
	else if (r >= 0)
		r = r;
	return (r);
}
