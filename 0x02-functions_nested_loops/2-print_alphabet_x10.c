#include "main.h"

/**
  *print_alphabet_x10 - Printing a to z 10times.
  *
  *Return: void;
  */

void print_alphabet_x10(void)
{
	char AB = 'a';
	int count = 0;
		while (count++ <= 9)
		{
		for (AB = 'a'; AB <= 'z'; AB++)
		_putchar(AB);
		_putchar('\n');
		}

}
