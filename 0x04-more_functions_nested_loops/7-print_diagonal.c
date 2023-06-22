#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal.
 *
 * @n: s the number of times the character \ should be printed.
 *
 * Return: Always 0.
*/
void print_line(int n);
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 0; p <= n; p++)
		{
			for (s = 1; s <= l; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
