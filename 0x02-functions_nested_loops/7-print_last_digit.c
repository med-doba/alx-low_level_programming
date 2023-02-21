#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: a number
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int rtn;

	rtn = n % 10;
	if (rtn < 0)
		rtn *= -1;
	_putchar(rtn + '0');
	return (rtn);
}
