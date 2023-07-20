#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
 void print_times_table(int n)
{
	int i, j, quo, nextquo;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				quo = i * j;
				nextquo = (j + 1) * i;

				number(quo);
				if (nextquo < 10 && j != n && n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (nextquo < 100 && j != n && n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (nextquo > 99 && j != n && n != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
