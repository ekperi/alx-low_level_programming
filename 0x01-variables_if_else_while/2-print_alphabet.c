#include <stdio.h>

/**
 * main - entry point
 * Return: int
 */
int main(void)
{
	char alph = 'a';
	while (alph <= 'z'){
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
