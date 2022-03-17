#include "main.h"
/**
 * print_line - draws straignt line in terminal
 * @n: number of times _ should be printed
 * Return: 0 for success code
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
