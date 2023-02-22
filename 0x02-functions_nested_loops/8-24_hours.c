#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int	h, min;

	h = 0;
	while (h < 24)
	{
		min = 0;
		while (min < 60)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar('0' + h);
			}
			else
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			_putchar(':');
			if (min < 10)
			{
				_putchar('0');
				_putchar('0' + min);
			}
			else
			{
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
			min++;
		}
		h++;
	}
}
