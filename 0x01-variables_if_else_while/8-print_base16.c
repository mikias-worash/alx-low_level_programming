#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints all base 16 nums
 * Return: Always 0 (success)
 */
int main(void)
{
	char a, ch;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
