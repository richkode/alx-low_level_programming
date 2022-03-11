#include <stdio.h>
/**
 * main - print integer values using putchar
 * Return: 0 for success code
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
