#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print 0 - 98
 * @n: int
 * Return: void
 */
void print_to_98(int n)
{
	do
	{
		printf("%i", n);
		printf(", ");
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	while(n != 98);
}
