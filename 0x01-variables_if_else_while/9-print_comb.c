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
		if (i == 57)
		{
			putchar(i);
			break;
		}
		putchar(i);
		putchar(44);
		putchar(32);
	}
	return (0);
}