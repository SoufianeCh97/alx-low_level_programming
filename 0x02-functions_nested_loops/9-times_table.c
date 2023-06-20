#include "main.h"

/**
 * A function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int n,m,tt;

	for (n = 0; n <=9; n++)
	{
		_putchar(48);
		for (m = 1 ; m <=9; m++)
		{
			_putchar(',');
			_putchar(' ');

			tt = n * m;
			if (tt <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((tt / 10) + 48);
			}
			_putchar((tt % 10) + 48);
		}
		_putchar('\n');
	}
}
