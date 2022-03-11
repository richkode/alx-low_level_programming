#include <stdio.h>
/**
 * main - print all alphabet except q and e
 * Return: 0 for success code
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
