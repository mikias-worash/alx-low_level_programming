#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last digit
 * Description: 0, less than 6, greter than 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m <  6 && m > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}
