#include <stdio.h>
#include <unistd.h>
/**
 * main - print to standard error
 * Return: 1 for no error code
 */
int main(void)
{
fwrite("and that piece of art is useful\" - Dorka Korpar, 2015-10-19\n",
60, 1, stderr);
return (1);
}
