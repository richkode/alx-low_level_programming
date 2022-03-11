#include <stdio.h>
/**
 * main - print all possible combinations of two digits
 * Return: 0 on success code
 */
int main(void)
{
	int i;
	int j = 49;

	for (i = 48; i <= 56;)
	{
		putchar(i);
		putchar(j);
		if (j == 57)
		{
			i++;
			j = 49;
		}
		if (i <= 56)
		{
			putchar(',');
			putchar(' ');
			j++;
		}
	}
	putchar('\n');
	return (0);
}
