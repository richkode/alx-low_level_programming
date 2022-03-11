#include <stdio.h>
/**
 * main - print all alphabets in lowercase
 * Return: 0 for success code
 */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
