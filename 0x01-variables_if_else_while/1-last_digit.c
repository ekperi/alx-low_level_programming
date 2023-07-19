#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: int
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		n *= -1;
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	if (ld == 0)
		printf("Last digit of %i is %i and is 0\n", n, ld);
	if (ld < 6 && ld != 0)
		printf("last digit of %i is %i and and is less than 6 and not 0\n", n, ld);
	return (0);
}
