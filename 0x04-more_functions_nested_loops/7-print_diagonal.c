#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal.
 *
 * @n: s the number of times the character \ should be printed.
 *
 * Return: Always 0.
*/
void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (s = 1; s <= p; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
