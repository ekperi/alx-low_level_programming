#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - print a - z 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int count;

	for (count = 0; count < 10; count++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		_putchar('\n');
	}
}
