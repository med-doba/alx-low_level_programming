#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: a number
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n *=  -1;
	return (n);
}
