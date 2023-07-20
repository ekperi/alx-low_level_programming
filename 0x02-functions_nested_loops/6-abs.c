#include <unistd.h>
#include "main.h"

/**
 * _abs - compute the absolute value
 * @y: int
 * Return: int
 */
int _abs(int y)
{
	if (y < 0)
		y *= -1;
	return (y);
}
