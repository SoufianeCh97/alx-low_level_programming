#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times using _putchar
 *
*/

void print_alphabet_x10(void)
{
	int ch, n;

	for (n = 0; n <= 9; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
