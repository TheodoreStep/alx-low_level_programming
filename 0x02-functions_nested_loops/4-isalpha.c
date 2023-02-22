#include "main.h"
/**
 * _isalpha - check for alphabetic character
 *
 * @c: parameter to check
 * Return: 1 if alphabetic character
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
