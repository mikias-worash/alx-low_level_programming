#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int x, y, product;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			product = x * y;
			if (product == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (x != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
