#include "main.h"

/**
 * _abs -  A function that computes the absolute value of an integer.
 *
 * @n: input
 *
 * Return: n result.
 *
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
