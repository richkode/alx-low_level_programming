#include <stdio.h>
/**
 * main - print lowwercase alphabets followed by uppercase alphabets
 * Return: 0 on success code
 */
int main(void)
{
	char ch, dh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (dh = 'A'; dh <= 'Z'; dh++)
	{
		putchar(dh);
	}
	putchar('\n');
	return (0);
}
