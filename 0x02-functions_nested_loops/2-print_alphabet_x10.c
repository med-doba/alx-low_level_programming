#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase + '\n'.
 *
 */
void print_alphabet_x10(void)
{
	int	i, j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 26)
			_putchar(97 + i++);
		_putchar('\n');
		j++;
	}
}
