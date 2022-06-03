#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Positive or negative
 * Description: positive or negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%s", "is zero,\n");
	else if (n < 0)
		printf("%s", "is negative,\n");
	else
		printf("%s", "is positive,\n");
	return (0);
}
