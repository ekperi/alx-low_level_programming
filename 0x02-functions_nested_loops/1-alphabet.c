#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
