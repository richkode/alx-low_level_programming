#include <stdio.h>
#include <unistd.h>
/**
 * main - print to standard error
 * Return: 1 for no error code
 */
int main(void)
{
	write(stderr,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	59);
	return (1);
}
