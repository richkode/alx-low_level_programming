#include <stdio.h>
/**
 * main - print all alphabets in lowercase
 * Return: 0 for success code
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
