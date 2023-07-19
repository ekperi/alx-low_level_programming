#include <stdio.h>

/**
 * main - entry point
 * Return: int
 */
int main(void)
{
	char l_case = 'a';
	char u_case = 'A';

	while (l_case <= 'z')
	{
		putchar(l_case);
		l_case++;
	}
	while (u_case <= 'Z')
	{
		putchar(u_case);
		u_case++;
	}
	putchar('\n');
	return (0);
}
