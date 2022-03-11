#include <stdio.h>
/**
 * main - print alphabets in reverse order
 * Return: 0 for success code
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
