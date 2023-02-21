#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: a number
 * Return: 1 if n is greater than zero or
 * 0 if n is zero
 * or -1  if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (!n)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
