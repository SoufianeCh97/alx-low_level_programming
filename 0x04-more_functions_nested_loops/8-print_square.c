#include "main.h"

/**
 * print_square - a function that prints a square.
 *
 * @size: the size of the square
 *
 * Return: Always 0.
*/

void print_square(int size)
{
	int l, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
