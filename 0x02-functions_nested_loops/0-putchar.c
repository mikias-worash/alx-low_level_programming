#include "main.h"

/**
 * main - Putchar
 * Description: prints -putchar
 * Return: Alwasy 0 (success)
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i =  0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
