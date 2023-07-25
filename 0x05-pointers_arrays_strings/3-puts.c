#include "main.h"

/**
 * _puts - puts code
 *@str: string to be printed
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int A;

	for (A = 0; str[A]; A++)
	{
		_putchar(str[A]);
	}
	_putchar('\n');
}
