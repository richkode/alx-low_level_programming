#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Determine if number is positive, negative or neutral
 * Return: 0 on success code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
