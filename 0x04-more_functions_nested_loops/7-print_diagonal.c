#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times to print
 * Return: diagonal line on terminal
 */
void print_diagonal(int n)
{
	int filas;
	int columns;

	if (n > 0)
	{
		for (filas = 0; filas < n; filas++)
		{
			for (columns = 0; columns <= filas; columns++)
				if (filas == columns)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
		}
	}
	else
	{
		_putchar('\n');
	}
}

