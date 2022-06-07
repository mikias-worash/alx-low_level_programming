#include "main.h"

/**
 * print_last_digit - print s the last digit of a num
 * @n: the number last digit wil be printed
 * Return: int
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
