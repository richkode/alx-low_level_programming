#include <stdio.h>
/**
 * main - print numbers from 0-9 separated by commas
 * Return: 0 for success code
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
