#include <unistd.h>
#include "main.h"

/**
 * _islower - check for lower case
 * @c: int
 * Return: int
 */
int _islower(int c)
{
	char lower_case[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int val_to_return = 0;

	while (i < 26)
	{
		if (lower_case[i] == c)
			val_to_return  = 1;
		i++;
	}
	return (val_to_return);
}
