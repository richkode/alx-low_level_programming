#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks whether character is uppercase or not
 * @c: character to be checked
 * Return: return 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
