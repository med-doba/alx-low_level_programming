#include "main.h"

/**
 * _islower -  checks for lowercase character.
 *
 * @c: the character ascii
 * Return: 0 if c is lowercase or
 * 1 if it's uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
