#include <stdio.h>

/**
 * main - entry point
 * Return: int
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putch(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
