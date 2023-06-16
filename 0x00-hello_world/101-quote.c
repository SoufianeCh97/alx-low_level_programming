#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print a string using write function
 *	ssize_t write(int fd,const void 'buf.size-t count');
 *
 * Return: 1 (not success)
*/
int main(void)
{
	char [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
