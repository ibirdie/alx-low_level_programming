#include <stdio.h>
/**
  *main - 2-print_alphabet.c
  *
  *Return: Always (0);
 */
int main(void)
{
	char alph[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 27)
	{
		putchar(alph[i]);
		i++;
	}
	return (0);
}
