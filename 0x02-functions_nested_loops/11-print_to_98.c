#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural number form n to 98
 * @n: integer to start printing from
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(",")
		}
	}
	else
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(",");
		}
	}
	printf("\n");
}