#include <stdio.h>
/**
 * main - Advanced 100
 *
 * Return: Always (0);
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
		putchar(a + '0');
		putchar(b + '0');
	if (!(a == 8 && b == 9))
		putchar(44);
		putchar(32);
	}
	}
return (0);
}
