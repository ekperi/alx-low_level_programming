#include <unistd.h>
#include "main.h"

/**
 * _isalpha - check for alphabets
 * @c: int
 * Return: int
 */
int _isalpha(int c)
{
	char lower_case[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int val_to_return = 0;

	while (i < 52)
	{
		if (lower_case[i] == c)
			val_to_return = 1;
		i++;
	}
	return (val_to_return);
}
