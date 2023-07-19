#include "main.h"

/**
 *print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */

 void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	int row, col, first_num, second_num, product;
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;

			if (col == 0)
			{
				putchar(product + '0');
			}

			else if (product <= 9)
			{
				putchar(' ');
				putchar(' ');
				putchar(product + '0');
			}

			else if (product > 9 && product < 100)
			{
				putchar(' ');
				putchar(product / 10 + '0');
				putchar(product % 10 + '0');
			}
			// else
			// {
			// 	if (product >= 100)
			// 		putchar((product / 100) + '0');
			// 	if (product >= 10)
			// 		putchar(((product / 10) % 10) + '0');
			// 	putchar(product % 10 + '0');
			// }
			else if (product >= 100)
			{
				putchar((product / 100) + '0');
				putchar(((product / 10) % 10) + '0');
				putchar(product % 10 + '0');
			}

			if (col != n)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
void print_times_tables(int n)
{
	int row, column, product;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;

			if (column != 0)
			{
				putchar(',');
				putchar(' ');

				if (product < 100)
					putchar(' ');
				if (product < 10)
					putchar(' ');
			}

			if (product >= 100)
				putchar((product / 100) + '0');
			if (product >= 10)
				putchar(((product / 10) % 10) + '0');

			putchar((product % 10) + '0');
		}
		putchar('\n');
	}
}
