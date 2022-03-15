#include <string.h>
#include "main.h"
/**
 * main - prints _putchar
 * Return: 0 on success code.
 */
int main(void)
{
	char str[] = "_putchar";
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar(str[i]);
	return (0);
}
