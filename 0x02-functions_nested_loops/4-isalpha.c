#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the character ascii
 * Return: 1 if c is a letter or
 * 0 if it's not a letter
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
