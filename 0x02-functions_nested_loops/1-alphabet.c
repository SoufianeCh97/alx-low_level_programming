#include "main.h"

/**
 * Rrint alphabet using _putchar
 *
 * Description :
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}