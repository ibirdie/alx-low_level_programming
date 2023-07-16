#include <stdio.h>
/**
 *main - 8-print_base16.c
 *
 * Return: Always (0)
 */

int main(void)
{

	char a = 97;
	int b = 0;

	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	while (a < 103)
	{
		putchar(a);
		a++;
	}
		putchar('\n');
	return (0);
}
