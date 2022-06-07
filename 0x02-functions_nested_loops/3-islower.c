#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: the char to be checked
 * Return: return 1 if lower or 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
