#include <unistd.h>
#include "main.h"

/**
 * print_sign - print the sign int
 * @n: int
 * Return: int
 */
int print_sign(int n)
{
	int val_to_return = 0;

	if (n > 0)
	{
		val_to_return = 1;
		_putchar('+');
	}
	else if (n == 0)
		_putchar('0');
	else
	{
		val_to_return = -1;
		_putchar('-');
	}
	return (val_to_return);
}
