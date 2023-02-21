#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase + new line.
 *
 */
void print_alphabet(void)
{
	int	i;

	i = 0;
	while (i < 26)
	{
		_putchar(97 + i);
		i++;
	}
	_putchar('\n');
}
