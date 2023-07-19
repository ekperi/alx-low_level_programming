#include <stdio.h>

/**
 * main - entry point
 * Return: int
 */
int main(void)
{
	char alph = 'a'
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (alph < 'g')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
