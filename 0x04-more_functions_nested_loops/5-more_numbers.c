#include "main.h"

/**
  *more_numbers - multiples of 1 to 14.
  *
  *Return: Always (0);
  */

void more_numbers(void)
{
	int a;
	int b;

	while (a <= 9)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
	a++;
	_putchar('\n');
	}
}
