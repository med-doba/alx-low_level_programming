#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character ascii
 * Return: 0 if c is not digit or 1 if it's digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
