#include "main.h"

/**
 * print_alphabet - Printing a to z.
 *
 * Return: Always 0.
 */


void print_alphabet(void)
{

	char I = ('a');
		while (I <= 'z')
		{
			_putchar(I);
			I++;
		}
	_putchar ('\n');

}
