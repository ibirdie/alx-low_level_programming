#include <stdio.h>
#include <stdlib.h>

/**
  *main - Last question
  *
  *Return: Always (0);
  */

int main(void)
{
int a = 0;
int b;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 98 || b != 99)
				{
				putchar(',');
				putchar(' ');
				}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
