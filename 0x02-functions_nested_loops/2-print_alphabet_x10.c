#include "main.h"

/**
 * main - print lowercase letters 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
