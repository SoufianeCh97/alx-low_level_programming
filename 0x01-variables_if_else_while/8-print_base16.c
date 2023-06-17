#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dgt = 48;

	while (dgt <= 102)
	{
		putchar(dgt);
		if (dgt == 57)
			dgt += 39;
		dgt++;
	}
	putchar('\n');

	return (0);
}
