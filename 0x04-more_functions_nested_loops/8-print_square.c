#include "main.h"
/**
 * print_square - prints a square on the screen
 * @size: length of square
 * Return: 0 on success code
 */
void print_square(int size)
{
	int filas;
	int columns;

	if (size > 0)
	{
		for (filas = 0; filas < size; filas++)
		{
			for (columns = 0; columns < size; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
