#include <stdio.h>
#include <unistd.h>

/**
 * main - alphabet in lowercase
 * Description: prints the alphabet in lowercase except q & e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
