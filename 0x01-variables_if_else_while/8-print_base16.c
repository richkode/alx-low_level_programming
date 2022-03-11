#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * Return: 0 for success code
 */
int main(void)
{
	for (int i = 48; i <= 57; i++)
		putchar(i);
	for (char ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
