#include <stdio.h>
/**
 * main - print lowwercase alphabets followed by uppercase alphabets
 * Return: 0 on success code
 */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
