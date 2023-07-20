#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - get the last digit of a value
 * @n: int
 * Return: int
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;
	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
