#include "main.h"

/**
 * main - print lowercase letters
 * Description: prints all lowercase letters
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
