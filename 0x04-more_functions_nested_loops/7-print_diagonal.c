#include "main.h"
/**
  *print_diagonal - printing n number of '\'
  *@n: input number
  *
  */

void print_diagonal(int n)
{
	int a;
	int b;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (a = 1; a <= n; a++)
		{
			for(b = 1; b < a; b++)
			{
				if (n > 1)
				{
				_putchar(' ');
				}
			}
			_putchar ('\\');
			_putchar('\n');
		}
		}
}

