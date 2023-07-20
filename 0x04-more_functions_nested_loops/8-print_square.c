#include "main.h"
/**
  *print sqaure - Printing squares a number of times'
  *@n: input number
  *
  */

void print_square(int size)
{
	int a;

	if (size > 0)
	{
		for (a = 0; a <= size; a++)
			if (size % 2 == 0)
			_putchar('#');

		_putchar('\n');
	}
	_putchar('\n');
}
