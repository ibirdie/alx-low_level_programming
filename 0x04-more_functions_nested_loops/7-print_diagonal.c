#include "main.h"
/**
  *print_diagonal - printing n number of '\'
  *@n: input number
  *
  */

void print_diagonal(int n)
{
	int a;
		for (a = 1; a <= n; a++)

			if (n > 0)
				_putchar(' ');

		_putchar ('\\');

		_putchar('\n');
}
