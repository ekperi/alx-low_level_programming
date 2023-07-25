#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	int lng;

	for (lng = 0; *s != '\0'; ++s)
		lng++;
	return (lng);
}
