#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 *
 * @s: input
 *
 *
 * Return: length of a string
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;
	return (c);
}
