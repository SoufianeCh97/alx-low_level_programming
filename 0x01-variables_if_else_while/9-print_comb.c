#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 0, 1, ... 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dgt = 0;

	while (dgt <= 9)
	{
		putchar(dgt + 48);
		if (dgt != 9)
		{
			putchr(',');
			putchr(' ');
		}
		dgt++;
	}
	putchar('\n');

	return (0);
}

